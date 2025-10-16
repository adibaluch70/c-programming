#include <stdio.h>
/*
Name= Adi Baluch
Div=C1
Branch= Computer Engineer
UIN= 251P012
*/
int main()
{
    int num1, num2, sum = 0;
    printf("Enter two odd numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for(int i = num1; i <= num2; i++)
    {
        sum += i;
    }
    printf("Sum of numbers: %d\n", sum);
    return 0;
}
