#include <graphics.h>

void drawSomething(int x, int y)
{
    setcolor(5);
    x = mousex();
    y = mousey();

    moveto(x - 50, y - 50);
    lineto(x + 50, y - 50);
    lineto(x + 50, y + 50);
    lineto(x - 50, y + 50);
    lineto(x - 50, y - 50);
}

void drawCross(int x, int y)
{
    cleardevice();
    setcolor(3);
    x = mousex();
    y = mousey();

    for (int i = 0; i < 10; i++)
    {
        circle(x, y, i * 3);
    }

    line(x, y-50, x, y+50);
    line(x-50, y, x+50, y);
}


WINDOWS_MAIN() //  "int main()", but for Windows 
{
    initwindow(640, 480);
    setcolor(3);

    for (int i = 0; i < 10; i++)
    {
        circle(200, 200, i * 10);
    }

    line(200, 50, 200, 350);
    line(50, 200, 350, 200);

    registermousehandler(WM_MOUSEMOVE, drawCross);
    registermousehandler(WM_LBUTTONDOWN, drawSomething);


    getch(); // wait until we close the window
}