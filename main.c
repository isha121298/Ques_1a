#include<stdio.h>
#include"header.h"
int main()
{
    complex_t first_num,second_num,add,sub,mul,div;

    first_num.real=3;
    first_num.imaginary=5;
    second_num.real=2;
    second_num.imaginary=6;

    add=addition(first_num,second_num);
    sub=substraction(first_num,second_num);
    mul=muliply(first_num,second_num);
    div=division(first_num,second_num);

    printf("Addition of two complex number is %.2f+%.2fi \n",add.real,add.imaginary);
    printf("Substraction of two complex number is %.2f+%.2fi \n",sub.real,sub.imaginary);
    printf("Multiplication of two complex number is %.2f+%.2fi \n",mul.real,mul.imaginary);
    printf("Division of two complex number is %.2f+%.2fi \n",div.real,div.imaginary);

    return 0;
}