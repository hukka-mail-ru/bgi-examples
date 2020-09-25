#include <graphics.h>

int WIN_MAIN() //  main() for Windows 
{
    int xsize = 640;
    int ysize = 480;

    initwindow(xsize, ysize);
    bar(0, 0, xsize, ysize);


    // Рисуем сетку: 
    setcolor(LIGHTGRAY);
    setlinestyle(DOTTED_LINE, 0, 1); // Стиль линии: пунктирная, толщина 1

    for (int i = 0; i < xsize; i+=20) // вертикальные линии  
    {
        line(i, 0, i, ysize);
    }

    for (int i = 0; i < ysize; i += 20) // горизонтальные лини
    {
        line(0, i, xsize, i);
    }


    // Рисуем оси координат: 
    setcolor(DARKGRAY);
    setlinestyle(SOLID_LINE, 0, 1); // Стиль линии: сплошная, толщина 1
    line(0, ysize / 2, xsize, ysize / 2);
    line(xsize / 2, 0, xsize / 2, ysize);


    // Рисуем параболы:
    setlinestyle(SOLID_LINE, 0, 3); // Стиль линии: сплошная, толщина 3
    for (int i = 0; i < 25; i++)
    {
        setcolor( i % 11 + 5); // Цвет параболы меняется с каждой итерацией
        for (double x = -100; x < 100; x++)
        {
            double y = x * x / (50.0 - i*10.0) - (i*10.0 - 50.0);

            double realx = xsize / 2 + x;
            double realy = ysize / 2 - y;

            if (x == -100)
            {
                moveto(realx, realy); // Начинаем рисовать параболу из точки (realx, realy)
            }
            else
            {
                lineto(realx, realy); // Ведем линию в точку (realx, realy)
            }

            delay(1); // Пауза 1 миллисекунда
        }
    }


    getch(); 
}