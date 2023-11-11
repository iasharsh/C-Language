// Online C compiler to run C program online
#include<stdio.h>
#include<math.h>
void main(){
    int p,r,t;
    float interest = 0.0;
    float Ci = 0.0;
    printf("Enter the Principle amount :");
    scanf("%d",&p);
    printf("Enter the Rate :");
    scanf("%d",&r);
    printf("Enter the Time :");
    scanf("%d",&t);
    interest = (p*r*t)/100;
    printf("Simple Interest is :%f\n",interest);
    Ci = p*pow((1+0.01*r),t);
    printf("Compound Interest is :%f\n",Ci);

    printf("CODE IS COMPLETE");
}