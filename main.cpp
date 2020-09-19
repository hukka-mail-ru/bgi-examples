#include <graphics.h>


int WIN_MAIN() //  main() for Windows 
{
    initwindow(640, 480);
    setcolor(GREEN);

    // field:
    int left = 100;
    int right = 400;
    int top = 100;
    int bottom = 400;

    // ball:
    int x = 200;
    int y = 200;
    int radius = 30;

    // movement:
    int dx = 1;
    int dy = 2;


    for (;; x += dx, y += dy) // endless loop
    {
        cleardevice();

        rectangle(left, top, right, bottom);
        circle(x, y, radius);

        if (x > right - radius) dx = -dx;
        if (x < left + radius) dx = -dx;

        if (y < top + radius) dy = -dy;
        if (y > bottom - radius) dy = -dy;

        delay(10);
    }


    getch(); // wait until we close the window
}