#include<stdio.h>
void main(){
    float a;
    float b;
    float swap;
    printf("Enter a :");
    scanf("%f",&a);
    printf("The old value of a is :%f\n",a);
    printf("Enter b :");
    scanf("%f",&b);
    printf("The old value of b is :%f\n",b);
    printf("*********************************\n");
    
    swap = a;
    a = b;
    b = swap;
    printf("The new value of a is :%f\n",a);
    printf("The new value of b is :%f\n",swap);
    printf("*********************************\n");
    printf("*********************************\n");
}