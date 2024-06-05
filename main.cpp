#include <iostream>

#include <windows.h>

#include "gamewindow.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow)
{
    GameWindow gameWindow(hInstance);
    gameWindow.Show();
    return 0;
}
