#include <iostream>
using namespace std;


double func(double a, double b, double c, double x) {
    return a * x * x + b * x + c;
}

int produkti_skalar(int a[], int b[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + a[i] * b[i];
    }

    return s;
}

int main() {

    //produkti skalar 
    const int n = 5;
    int a[n] = { 1, 0, 1, 4, 7 };
    int b[n] = { 34, 7, 7, 5, 1 };
    cout << produkti_skalar(a, b, n) << endl;

    // vazhdim i funksionit 
    cout << "y = " << func(2.0, 1.5, 3.2, 6.1);
    return 0;
}

