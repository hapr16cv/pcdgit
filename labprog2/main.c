int reverse(int num)
{
   int rev = 0, temp;
   while (num != 0)
   {
      rev = rev * 10;
      rev = rev + (num%10);
      num       = num/10;
   }
   return rev;
}
#include <stdio.h>

int main()
{
   int n, rev = 0, c, temp;

   printf("Enter a number to reverse\n");
   scanf("%d", &n);
   temp=n;
   c = reverse(n);
   if(temp==c)
   {
       printf("%d is Palindrome\n",temp);
   }
   else
   {
       printf("%d is Not a Palindrome. Reverse is %d",temp,c);
   }
 return 0;
}
