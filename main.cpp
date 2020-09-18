#include <graphics.h>
<<<<<<< Updated upstream
=======

int eyes = 0;
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
        setfillstyle(SOLID_FILL, WHITE);
        fillellipse(eyes - 20, 150, 10, 10);
        fillellipse(eyes + 20, 150, 10, 10);

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
    eyes = x;
    smile = y;
}
>>>>>>> Stashed changes


int WIN_MAIN() //  main() for Windows 
{
<<<<<<< Updated upstream
    initwindow(640, 480);
    setcolor(3);

    for (int i = 0; i < 10; i++)
    {
        circle(200, 200, i * 10);
        delay(250);
    }

    line(200, 50, 200, 350);
    line(50, 200, 350, 200);
=======
    initwindow(400, 400 );

    drawFace(40, 200);
>>>>>>> Stashed changes


    getch(); // wait until we close the window
}