#include <stdio.h>

int main() {
    float c,f;
    printf("Enter temp in celcius");
    scanf("%f",&c);
    f=(c*9/5) + 32;
    printf("The temp in farenheight is : %f\n",f);
    return 0;
}