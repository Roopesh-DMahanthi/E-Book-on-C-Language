#include<stdio.h>
int number;
void main()
{
number=10;
printf("In function main. value is %d\n",number);
fun1();
fun2();
}
fun1()
{
number=20;
printf("In function fun1. value is %d",number);
}
fun2()
{
printf("\nIn function fun2. value is %d\n",number);
}