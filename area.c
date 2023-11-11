#include<stdio.h>
void main(){
    float pi = 3.14;
    float r;
    float ar;
    printf("Enter the Radius :");
    scanf("%f",&r);
    ar = pi*r*r; 
    printf("The Area is :%f",ar);
}