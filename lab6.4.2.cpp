#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int n, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < n - 1)
        Create(a, n, Low, High, i + 1);
}

void Print(int* a, const int n, int i)
{
    cout << setw(4) << a[i];
    if (i < n - 1)
        Print(a, n, i + 1);
    else
        cout << endl;
}

int Find1(int* a, const int n, int i1)
{
    if (i1 < n)
    {
        if (a[i1] > 0)
        {
            return i1;
        }
        return Find1(a, n, i1 + 1);
    }
    else
        return -1;
}

int Find2(int* a, int n, int i2)
{

    if (i2 > -1 && i2 < n)
    {
        if (a[i2] > 0)
        {
            return i2;
        }
        else

            return Find2(a, n, i2 - 1);
    }
    else
        return -1;

}

int Sum(int* a, int i1, int i2, int S)
{
    if (i1 <= i2)
    {
        S += a[i1];
        return Sum(a, i1 + 1, i2, S);
    }
    else
        return S;
}


void Sort(int* a, const int n, int i)
{
    int k = 0;
    for (int j = 0; j < n - i; j++)
        if (a[j + 1] == 0)
        {
            int tmp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = tmp;
            k = 1;
        }
    if (k == 0)
        return;
    if (i < n - 1)
        Sort(a, n, i + 1);
}


int main()
{
    srand((unsigned)time(NULL));
    int n;
    cout << "n = "; cin >> n;
    int* r = new int[n];
    int Low = -20;
    int High = 20;

    Create(r, n, Low, High, 0);
    Print(r, n, 0);

    int i1 = Find1(r, n, 0);
    if (i1 > -1)
        cout << endl;
    else
        cout << endl;

    int i2 = Find2(r, n, n - 1);
    if (i2 > -1)
        cout << endl;
    else
        cout << endl;

    cout << "S = " << Sum(r, i1, i2, 0) << endl;

    Sort(r, n, 0);
    Print(r, n, 0); 

    return 0;
}

