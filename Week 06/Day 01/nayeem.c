#include <stdio.h>
int main()
{
    int i, n, s = 0;
    printf("Enter last number =");
    scanf("%d",&n);
    i = 10;
jump:
    s = s + i;
    i = i + 10;
    if (i < n)
    {
        goto jump;
    }
    printf("Sum = %d", s);
    return 0;
}