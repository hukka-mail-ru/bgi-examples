#include <graphics.h>

const int w = 22;
const int h = 45;

void drawDigit(int digit, int x, int y)
{
    if (digit == 0) readimagefile("pics\\0.bmp", x, y, x + w, y + h);
    if (digit == 1) readimagefile("pics\\1.bmp", x, y, x + w, y + h);
    if (digit == 2) readimagefile("pics\\2.bmp", x, y, x + w, y + h);
    if (digit == 3) readimagefile("pics\\3.bmp", x, y, x + w, y + h);
    if (digit == 4) readimagefile("pics\\4.bmp", x, y, x + w, y + h);
    if (digit == 5) readimagefile("pics\\5.bmp", x, y, x + w, y + h);
    if (digit == 6) readimagefile("pics\\6.bmp", x, y, x + w, y + h);
    if (digit == 7) readimagefile("pics\\7.bmp", x, y, x + w, y + h);
    if (digit == 8) readimagefile("pics\\8.bmp", x, y, x + w, y + h);
    if (digit == 9) readimagefile("pics\\9.bmp", x, y, x + w, y + h);
}



int WIN_MAIN() //  main() for Windows 
{
    initwindow(540, 540);
    
    readimagefile("pics\\watch.bmp", 0, 0, 540, 540);

    for (int i = 0; i < 10; i++)
    {
        drawDigit(i, 286, 299);
        delay(1000);
    }

    getch(); // wait until we close the window
}