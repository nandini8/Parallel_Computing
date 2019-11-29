#include <omp.h>
#include <stdio.h>
int main(int *argc, char**argv)
{
    double area, pi, x;
    int i, n;

    printf("Enter the number of intervals: \n");
    scanf("%d", &n);
    area = 0.0;

    #pragma omp parallel for private(x) reduction (+:area)
    
        for(i = 0; i<n; i++)
        {
            x = (i+0.5) / n;
            area += 4.0/(1.0 + x*x);
            printf("X, Area: %f %f\n", x, area);
        }
    
    pi = area / n;
    printf("Area: %f", pi);
    return 0;
}