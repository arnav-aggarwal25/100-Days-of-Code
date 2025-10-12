#include <stdio.h>

int main() {
    int r;
    float area,cir;
    printf("Enter the radius of the Cirle : ");
    scanf("%d",&r);
    area= 3.14*r*r;
    cir= 2*3.14*r;
    printf("The circumference of the circle is : %f\n",cir);
    printf("The area of the circle is : %f\n",area);
    return 0;
}