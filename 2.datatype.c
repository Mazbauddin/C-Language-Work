#include<stdio.h>

int main()
{
// integer
    int num1;
    num1 = 5;
    printf("%d\n",num1);
    printf("%d byte\n",sizeof(num1));

//character
    char num;
    num = 'B';
    printf("%d\n",num);
    printf("%c\n",num);
    printf("%d byte\n",sizeof(num));

//float
    float num2;
    num2= 1.2;
    printf("%.4f\n",num2);
    printf("%d byte\n",sizeof(num2));

//double
    double num3;
    num3= 1.3;
    printf("%lf\n",num3);
    printf("%d byte\n",sizeof(num3));

    // sqr feet count

    float width =39.6, width1=39.6,sum;
    sum = width+width1;

    float long1 =48.9, long2= 54.8,lum;
    lum = long1+long2;
    printf("%.2f",sum);
    printf("\n%.2f",lum);

    double all;
    all = sum * lum;

    printf("\n The value is %.2lf",all);


    return 0;

}
