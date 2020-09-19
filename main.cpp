#include <graphics.h>


void onMouseMove(int x, int y)
{
    cleardevice();
    setbkcolor(WHITE);

    readimagefile("simpson.bmp", x, y, x + 250, y + 250);
}



int WIN_MAIN() //  main() for Windows 
{
    initwindow(500, 500);

    registermousehandler(WM_MOUSEMOVE, onMouseMove);

    getch(); // wait until we close the window
}