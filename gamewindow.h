#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <windows.h>

class GameWindow
{
public:
    GameWindow(HINSTANCE hInstance);
    ~GameWindow();

    void Show();

private:
    HWND hwnd;

    static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
};

#endif // GAMEWINDOW_H
