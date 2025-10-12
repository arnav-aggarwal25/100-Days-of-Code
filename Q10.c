#include <stdio.h>

int main() {
    int t,h,m,s;
    printf("Enter Time in Seconds : ");
    scanf("%d",&t);
    h = t/3600;
    m = (t%3600) / 60;
    s = (t%3600) % 60;
    printf("Time is %d:%d:%d",h,m,s);
    return 0;
}