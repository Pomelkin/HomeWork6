#include "pt4.h"
#include <iostream>
using namespace std;

void Solve()
{
    Task("TheMassiv25");
    setlocale(LC_ALL, "Russian");
    int s[50] = {}, n, sum = 0;;
    pt >> n;
    for (int i = 0; i < n; i++) pt >> s[i];
    for (int i = 0; i < n - 1; i++) if (s[i] > s[i + 1]) s[i] = 999; /*���� ����� ������ ������ ������� ������, �� = ��� 999, ����� ����� �������� ��� � ������� ��� ������*/
    for (int i = 0; i < n - 1; i++) if (s[i] == 999) {
        pt << i; 
        sum += 1;
    }
    pt << sum;
}
