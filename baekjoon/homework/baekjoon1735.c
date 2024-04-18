#include<stdio.h>

int big(int a, int b) {
    if (b == 0)
        return a;
    return big(b, a % b);
}

int main()
{
    int a, b, c, d;
    int sun, mom;

    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    sun = a * d + c * b;
    mom = b * d;

    int num = big(sun, mom);

    sun /= num;
    mom /= num;

    printf("%d %d", sun, mom);

    return 0;
}
