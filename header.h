#include<stdio.h>
typedef struct complex_t {

float real;

float imaginary;

} complex_t;

complex_t addition(complex_t num1,complex_t num2)
{
   complex_t answer;
   answer.real=num1.real + num2.real;
   answer.imaginary=num1.imaginary+num2.imaginary;

   return answer;
}

complex_t substraction(complex_t num1,complex_t num2)
{
   complex_t answer;
   answer.real = num1.real - num2.real;
   answer.imaginary = num1.imaginary - num2.imaginary;

   return answer;
}
complex_t muliply(complex_t num1,complex_t num2)
{
   complex_t answer;
   answer.real = (num1.real*num2.real) - (num1.imaginary*num2.imaginary);
   answer.imaginary = (num1.imaginary*num2.real) + (num1.real*num2.imaginary);

   return answer;
}
complex_t division(complex_t num1,complex_t num2)
{
    complex_t answer;
    answer.real = (num1.real*num2.real + num1.imaginary*num2.imaginary)/(num2.real*num2.real+num2.imaginary*num2.imaginary);
    answer.imaginary = (num1.imaginary*num2.real - num1.imaginary*num2.imaginary)/(num2.real*num2.real + num2.imaginary*num2.imaginary);

    return answer;
   
}
