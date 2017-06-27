#include <stdio.h>

double func(double x, double y)
{
    return y - 12.0 * x + 2.0;
}

int main()
{
    int i;
    double x, y, h, k1, k2, k;

    puts("");
    puts("dy/dx = y - 12.0 * x + 3.0");

    puts("      X               Y");

    x = 0.0;
    y = 1.0;
    h = 0.1;

    printf("%10.6lf      %10.6lf\n", x, y);
    for (i = 0; i < 20; ++i)
    {
        k1 = h * func(x, y);
        k2 = h * func(x + h, y + h);
        k  = (k1 + k2) / 2.0;
        x  = x + h;
        y  = y + k;
        printf("%10.6lf      %10.6lf\n", x, y);
    }
    return 0;
}
