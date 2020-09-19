#include <graphics.h>


void onMouseMove(int x, int y)
{
    cleardevice();
    readimagefile("simpson.bmp", x, y, x + 250, y + 250);
}

void onMouseClick(int x, int y)
{
    cleardevice();
    readimagefile("simpson_eyes.bmp", x, y, x + 250, y + 250);
}

int WIN_MAIN() //  main() for Windows 
{
    initwindow(500, 500);
    setbkcolor(WHITE);

    registermousehandler(WM_MOUSEMOVE, onMouseMove);
    registermousehandler(WM_LBUTTONDOWN, onMouseClick);
    registermousehandler(WM_LBUTTONUP, onMouseMove);

    getch(); // wait until we close the window
}