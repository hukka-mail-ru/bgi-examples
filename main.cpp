#include <graphics.h>

// Что делаем в случае движения мышки:
void onMouseMove(int x, int y)
{
    cleardevice(); // очистить экран
    readimagefile("simpson.bmp", x, y, x + 250, y + 250);  // вывести на экран катринку из файла "simpson.bmp"
}


// Что делаем в случае нажатия мышки:
void onMousePress(int x, int y)
{
    // Рисуем глаза:
    setcolor(BLACK);
    setlinestyle(SOLID_LINE, 0, 3);
    circle(x + 134, y + 91, 10);  // Первый глаз
    circle(x + 177, y + 118, 10); // Второй глаз
} 


// Что делаем в случае отпускания мышки:
void onMouseRelease(int x, int y)
{
    onMouseMove(x, y); // то же , что и в случае движения мышки
}


int WIN_MAIN() //  main() для Windows 
{
    initwindow(500, 500);
    setbkcolor(WHITE); // фон белого цвета

    // Перехват мышки:
    registermousehandler(WM_MOUSEMOVE, onMouseMove);    // Если курсор мыши двигается, то вызываем функцию onMouseMove()
    registermousehandler(WM_LBUTTONDOWN, onMousePress); // Если кнопка мыши нажата, то вызываем функцию onMousePress()
    registermousehandler(WM_LBUTTONUP, onMouseRelease); // Если кнопка мыши отпущена, то вызываем функцию onMouseRelease()

    getch(); // подождать, пока мы не закрыли окно
}