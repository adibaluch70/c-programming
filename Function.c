#include <stdio.h>
#include <stdlib.h>
/*
Name:Adi Baluch
UIN:251P011
Class: Computer C1
*/
void counter() {
//static int count =0;
static int count =0;
count++;
printf("number of time function is called %d\n",count);
}
int main (){
counter();
counter();
counter();
counter();
return 0;
}
