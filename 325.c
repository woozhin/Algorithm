#include<stdio.h>

int main()
{
    int a = 1;
    unsigned int b = -1;
    float c = 0.33;
    long long int d = 55;
    double e = 0.413;
    char f = 'A';

    printf("O %d %u %f %lld %lf %c\n", a, b, c, d, e, f);
    printf("X %f %c %d %llf %u %d\n", a, b, c, d, e, f);
    printf("X %c %d %s %f %lld %f", a, b, c, d, e, f);
}