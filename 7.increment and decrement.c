#include<stdio.h>

int main()
{
    int a = 5, b;
    a++;
    printf("%d \n",a);
    ++a;
    printf("%d \n",a);
    b = a++;
    printf("%d  %d \n",a,b);
    b = ++a;
    printf("%d  %d Increment operators \n",a,b);

    int c = 7, d;
    c--;
    printf("%d \n",c);
    --c;
    printf("%d \n",c);
    d = c--;
    printf("%d  %d \n",c,d);
    d = --c;
    printf("%d  %d Decrement operators \n",c,d);

    return 0;
}
