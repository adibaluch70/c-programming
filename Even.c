#include <stdio.h>
int main()
{
    /*
    Name= Adi A.M. Baluch
    Div= C(1)
    Age= 18
    UIN= 251P012
    Class= Computer Engineer FE
    */
    int num;
    printf("Enter a Number:");
    scanf("%d", &num);
    if(num % 2 == 0)
    {
        printf("It is an even number");
    }
    else
    {
        printf("It is an odd number");
    }
    return 0;
}
