#include <graphics.h>
#include <stdlib.h>

int getRandom(int lower, int upper)
{
    return (rand() % (upper - lower + 1)) + lower;
}

void onMouseMove(int x, int y)
{
    int d = 30;
    circle(x + getRandom(-d, d), y + getRandom(-d, d), getRandom(0, 25));
}

void onMousePress(int x, int y)
{
    setcolor(getRandom(LIGHTGRAY, WHITE));
}


int WIN_MAIN() //  main() for Windows 
{
    initwindow(640, 480);
    srand(0);   // Initialization of random number generator
    setcolor(LIGHTGRAY);

    registermousehandler(WM_MOUSEMOVE, onMouseMove);
    registermousehandler(WM_LBUTTONDOWN, onMousePress);

    getch(); // wait until we close the window
}