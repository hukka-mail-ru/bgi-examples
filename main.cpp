#include <graphics.h>
#include <stdlib.h>

int getRandom(int lower, int upper)
{
    return (rand() % (upper - lower + 1)) + lower;
}


int WIN_MAIN() //  main() for Windows 
{
    initwindow(640, 480);
    srand(0);   // Initialization of random number generator

    for (int i = 0; i < 1000; i++)
    {
        setcolor(getRandom(BLACK, WHITE));

        line(getRandom(0, 640),
             getRandom(0, 480),
             getRandom(0, 640),
             getRandom(0, 480));

        circle(getRandom(0, 640),
               getRandom(0, 480),
               getRandom(0, 100));

        delay(30);
    }


    getch(); // wait until we close the window
}