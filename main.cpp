#include <graphics.h>

int WIN_MAIN() //  main() for Windows 
{
    int xsize = 640;
    int ysize = 480;

    initwindow(xsize, ysize);
    bar(0, 0, xsize, ysize);

    // coordinate grid:
    setcolor(LIGHTGRAY);
    line(20, ysize/2, xsize-20, ysize / 2);
    line(xsize/2, 20, xsize / 2, ysize-20);


    // parabolas:
    setlinestyle(SOLID_LINE, 0, 3);
    for (int i = 0; i < 25; i++)
    {
        setcolor( i % 11 + 5);
        for (double x = -100; x < 100; x++)
        {
            double y = x * x / (50 - i*10) - (i*10 - 50);

            double realx = xsize / 2 + x;
            double realy = ysize / 2 - y;

            if (x == -100)
            {
                moveto(realx, realy);
            }
            else
            {
                lineto(realx, realy);
            }

            delay(1);
        }
    }


    getch(); // wait until we close the window
}