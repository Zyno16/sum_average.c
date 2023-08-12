#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,f,sum,avr;
    printf("enter a?:");
    scanf("%f",&a);
    printf("enter b?:");
    scanf("%f",&b);
    printf("enter c?:");
    scanf("%f",&c);
    printf("enter d?:");
    scanf("%f",&d);
    printf("enter f?: ");
    scanf("%f",&f);
    sum=a+b+c+d+f;
    avr=sum/2;
    printf("the sum is%.2f\n",sum);
    printf("the average is %.2f\n",avr);
    return 0;
}
