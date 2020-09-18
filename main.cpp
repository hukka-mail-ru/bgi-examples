#include <graphics.h>

void drawAim(int x, int y)
{
    setcolor(CYAN);

    for (int i = 0; i < 10; i++)
    {
        circle(x, y, i * 3);
    }
}

void onMouseMove(int x, int y)
{
    cleardevice();
    drawAim(mousex(), mousey());
}

void onMousePress(int x, int y)
{
    setcolor(YELLOW);
    x = mousex();
    y = mousey();

    setfillstyle(LINE_FILL, LIGHTMAGENTA);
    fillellipse(x, y, 50, 50);

    drawAim(x, y);
}



int WIN_MAIN() //  main() for Windows 
{
    initwindow(640, 480);

    registermousehandler(WM_MOUSEMOVE, onMouseMove);
    registermousehandler(WM_LBUTTONDOWN, onMousePress);

    getch(); // wait until we close the window
}