#include "gamewindow.h"

GameWindow::GameWindow(HINSTANCE hInstance)
{
    WNDCLASS wc = { };
    wc.lpfnWndProc = GameWindow::WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = "GameWindow";
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hIcon = LoadIcon(NULL, IDI_WINLOGO);

    RegisterClass(&wc);

    this->hwnd = CreateWindowExA(0, "GameWindow", "Ghostwriter", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL);
}

GameWindow::~GameWindow()
{

}

void GameWindow::Show()
{
    ShowWindow(this->hwnd, SW_NORMAL);
    UpdateWindow(this->hwnd);

    MSG msg = { };
    bool is_running = true;
    while (is_running == true)
    {
        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            if (msg.message == WM_QUIT) is_running = false;
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }
}

LRESULT GameWindow::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    PAINTSTRUCT ps;

    switch (uMsg)
    {
    case WM_CREATE:
    {

    }
        return 0;

    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;

    case WM_KEYDOWN:
        return 0;

    case WM_MOUSEMOVE:
        return 0;

    case WM_PAINT:
    {
        BeginPaint(hwnd, &ps);
        EndPaint(hwnd, &ps);
    }
        return 0;

    case WM_SIZE:
        return 0;

    }

    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}
