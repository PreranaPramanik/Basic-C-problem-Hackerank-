#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sum,diff;
    float c,d,s,sub;
    scanf("%d %d",&a, &b);
    scanf("%f %f",&c, &d);
    sum = a+b;
    diff = a-b;
    s = c+d;
    sub = c-d;
    printf("%d %d\n",sum,diff);
    printf("%0.1f %0.1f\n",s,sub);
    return 0;
}