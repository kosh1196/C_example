#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x ,y;
     float a ,s, m, d;
    printf("Enter two numbers: \n");
    scanf("%d %d", &x,&y);
    a = x+y;
    s = x-y;
    m = x*y;
    d = x/y;
    printf("The addition of two no: %f \n",a);
    printf("The subtraction of two no: %f \n",s);
    printf("The multiplication of two no: %f  \n",m);
    printf("The division of two no: %f \n",d);
    return 0;
}
