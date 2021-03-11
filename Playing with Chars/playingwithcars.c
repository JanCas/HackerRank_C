#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void th()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c;
    char s[200];
    char sen[200];

    scanf("%c", &c);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s", sen);

}

/*
int main()
{
    th();
    return 0;
}
 */