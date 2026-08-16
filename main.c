#include<stdio.h>
#include "main.h"
int de=393;
int main()
{
    int a,b;
    //printf("The value of de is: %d\n",de);
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum: %d\n",add(a,b));
    printf("The value of de is: %d\n",de);
    printf("Sub: %d\n",sub(a,b));
    return 0;
}