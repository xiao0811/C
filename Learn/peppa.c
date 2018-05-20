/**
 * C语言画小猪佩奇
 * 后面可带参数 ./peppa 2  ./peppa 4 .....
 */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double c(double x, double y, double r)
{
    return sqrt( x * x + y * y) - r;
}
double u(double x, double y, double t)
{
    return x * cos(t) + y * sin(t);
}
double v(double x, double y, double t)
{
    return y * cos(t) - x * sin(t);
}
double fa(double x, double y)
{
    return fmin(c(x, y, 0.5), c(x * 0.47 + 0.15, y + 0.25, 0.3));
}
double no(double x, double y)
{
    return c(x * 1.2 + 0.97, y + 0.25, 0.2);
}
double nh(double x, double y)
{
    return fmin(c(x + 0.9, y + 0.25, 0.03), c(x + 0.75, y + 0.25, 0.03));
}
double ea(double x, double y)
{
    return fmin(c(x * 1.7 + 0.3, y + 0.7, 0.15), c(u(x, y, 0.25) * 1.7, v(x, y, 0.25) + 0.65, 0.15));
}
double ey(double x, double y)
{
    return fmin(c(x + 0.4, y + 0.35, 0.1), c(x + 0.15, y + 0.35, 0.1));
}
double pu(double x, double y)
{
    return fmin(c(x + 0.38, y + 0.33, 0.03),c(x + 0.13, y + 0.33, 0.03));
}
double fr(double x, double y)
{
    return c(x * 1.1 - 0.3, y + 0.1, 0.15);
}
double mo(double x, double y)
{
    return fmax(c(x + 0.15, y-0.05, 0.2), -c(x + 0.15, y, 0.25));
}
double o(double x, double y, double(*f)(double, double), double i)
{
    double r = f(x, y);
    return fabs(r) < 0.02 ? (atan2(f(x, y + 1e-3) - r,f(x + 1e-3, y) - r) + 0.3) * 1.273 + 6.5 : r < 0 ? i : 0;
}
double s(double x, double y, double(*f)(double, double), double i)
{
    return f(x, y) < 0 ? i : 0;
}
double f(double x, double y)
{
    return o(x, y, no, 1) ? fmax(o(x, y, no, 1), s(x, y, nh, 12)) : fmax(o(x, y, fa, 1), fmax(o(x, y, ey, 11), fmax(o(x, y, ea, 1), fmax(o(x, y, mo, 1), fmax(s(x, y, fr, 13), s(x, y, pu, 12))))));
}
int main(int argc, char *argv[])
{
    for(double y = -1, s = argc > 1 ? strtod(argv[1], 0) : 1; y < 0.6; y += 0.05 / s, putchar('\n')) {
            for(double x = -1; x < 0.6; x += 0.025 / s) {
                putchar(" .|/=\\|/=\\| @!"[(int)f(u(x, y, 0.3), v(x, y, 0.3))]);
            }
    }
}
