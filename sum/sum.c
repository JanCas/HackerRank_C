#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sum()
{
    float n1, n2;
    int n3, n4;

    scanf("%d %d", &n3, &n4);
    scanf("%f %f", &n1, &n2);

    printf("%d %d \n", n3+n4, n3-n4);
    printf("%.2f %.2f", n1+n2, n1-n2);
}

int main()
{

    sum();
    return 0;
}