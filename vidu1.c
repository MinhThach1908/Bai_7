#include <stdio.h>

int vidu1_main()
//int main()
{
    int num, res;
    printf("Enter a number: ");
    scanf("%d", &num);
    res = num % 2;
    printf(res == 0 ? "The number is even.\n" : "The number is odd.\n");
    return 0;
}

