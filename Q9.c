#include <stdio.h>
#include <math.h>

int main() {
    float p,r,t,sim,com,temp,temp2;
    printf("Enter Principle amount, Rate of Interest  and Amount of time in years ");
    scanf("%f%f%f",&p,&r,&t);
    sim=(p*r*t)/100;
    temp=(1+r);
    temp2= pow(temp,t);
    com= p*temp2;
    printf("the Simple Interest =%f and the compound interest = %f",sim,com);
    return 0;
}