#include <graphics.h>


void onMouseMove(int x, int y)
{
    cleardevice();
    setcolor(CYAN);

    for (int i = 0; i < 10; i++)
    {
        circle(mousex(), mousey(), i * 3);
    }
}

void onMousePress(int x, int y)
{
    setcolor(YELLOW);
    x = mousex();
    y = mousey();

    setfillstyle(LINE_FILL, LIGHTMAGENTA);
    fillellipse(x, y, 50, 50);
}


int WIN_MAIN() //  main() for Windows 
{
    initwindow(640, 480);

    registermousehandler(WM_MOUSEMOVE, onMouseMove);
    registermousehandler(WM_LBUTTONDOWN, onMousePress);

    getch(); // wait until we close the window
}