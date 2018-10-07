#include<stdio.h>
void test();
main()
{
 test();
 test();
 test();
}
void test()
{
 static int a = 0;
 a = a+1;
 printf("%d\t",a);
}