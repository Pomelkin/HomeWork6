#include "pt4.h"
using namespace std;

void Solve()
{
    Task("TheMassiv5");
    int n, a[40] = {}, max = 0, maxi = 0, smin = 0,smax = 0;
    pt >> n;
    for (int i = 0; i < n ; i++)
    {
        pt >> a[i];
        if (a[i] > max)
        {
            max = a[i];
            maxi = i;
        }
    }
    for (int i = maxi + 1; i < n; i++) smax += a[i];
    for (int i = maxi - 1; i >= 0; i--) smin += a[i];
    pt << smax << smin;
}
