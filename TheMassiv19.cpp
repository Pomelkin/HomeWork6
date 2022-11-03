#include "pt4.h"
#include <algorithm>
#include <iostream>
using namespace std;

void Solve()
{
    Task("TheMassiv19");
    setlocale(LC_ALL, "Russian");
    int n, s[40] = {}, min[3] = {},k = 0;
    pt >> n >> min[0] >> min[1] >> min[2]; /*создание массива для записи 3 мин чисел*/

    for (int i = 3; i < n; i++)
    {
        int Num;
        pt >> Num;
        for (int n = 0; n < 3; n++)
        {
            if (Num < min[n])
            {
                min[n] = Num;     /*если число меньше элемента в массиве - записываем его в эту ячейку*/
                break;
            }
        }

    }
    sort(begin(min),end(min),greater<>()); /*сортировка массива*/
    for (int i = 0; i < 3; i++) pt << min[i];
    
}
