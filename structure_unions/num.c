#include <stdio.h>
struct numbers
{
   int num1, num2;
};
int main()
{
   struct numbers s1 = {.num2 = 22, .num1 = 11};
   struct numbers s2 = {.num2 = 30};
 
   printf ("num1: %d, num2: %d\n", s1.num1, s1.num2);
   printf ("num1: %d", s2.num2);
   return 0;
}