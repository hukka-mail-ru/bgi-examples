#include <graphics.h>


int smile = 0;

void drawFace(int x, int y)
{

    setfillstyle(SOLID_FILL, LIGHTMAGENTA);
    fillellipse(200, 200, 100, 100);

    setfillstyle(SOLID_FILL, WHITE);
    fillellipse(x - 20, 150, 10, 10);
    fillellipse(x + 20, 150, 10, 10);

    setcolor(WHITE);

    setlinestyle(SOLID_LINE, 0, 10);
    arc(200, 200, 180, 0, y);

    if (smile)
    {
        setlinestyle(SOLID_LINE, 0, 10);
        arc(200, 200, 180, 0, smile);
    }
}

void onMouseMove(int x, int y)
{
    cleardevice();
    drawFace(x, y);
}

void onMousePress(int x, int y)
{
    smile = y;
}


int WIN_MAIN() //  main() for Windows 
{

    initwindow(400, 400 );

    drawFace(40, 200);

    registermousehandler(WM_MOUSEMOVE, onMouseMove);
    registermousehandler(WM_LBUTTONDOWN, onMousePress);

    getch(); // wait until we close the window
}