#include <stdio.h>
int main()
{
    /*
    Name= Adi Baluch
    class= computer C01
    division= C
    UIN= 251P012
    */
    int physics, chemistry, math;
    printf("Enter marks of physics:");
    scanf("%d", &physics);
    printf("Enter marks of chemistry:");
    scanf("%d", &chemistry);
    printf("Enter marks of math:");
    scanf("%d", &math);
    
    int sum = physics + chemistry + math;
    printf("sum=%d\n", sum);
    
    float average = sum / 3;
    printf("average=%f\n", average);
    
    (average >= 50) ? printf("student eligible for admission") : printf("student not eligible for admission");
    
    return 0;
}
