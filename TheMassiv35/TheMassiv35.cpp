#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f1("f1.txt");
    ofstream f2("f2.txt");
    int n, l, r,MassOld[20] = {};
    f1 >> n >> l >> r;
    for (int i = 0; i < n; i++)
    {
        f1 >> MassOld[i];
        f2 << MassOld[i]<<" ";
    }
    f2 << "\n\n";
    for (int i = 0; i < n; i++) if (!(MassOld[i] >= l && MassOld[i] <= r)) f2 << MassOld[i]<<" ";
    f1.close();
    f2.close();
}
