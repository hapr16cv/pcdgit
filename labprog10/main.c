float quad(floata,floatb,floatc)
{
 d=b*b-4*a*c;
 if(d==0)
   {
   root1=root2=-b/(2*a);
    printf("the roots are equal r1=%f,r2=%f",root1,root2);
   }
 else if(d>0)
   { root1=-b+(sqrt(d))/(2*a);
     root2=-b-(sqrt(d))/(2*a);
    printf("the roots are real and distinct r1=%f,r2=%f",root1,root2);
   }
  else if(d<0)
   { rr=-b/(2*a);
     ir=sqrt(-d)/(2*a);
     printf("the roots are complex and imaginary r1=%f+i%f ,r2=%f+i%f",rr ,ir,rr,ir);
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,d,r1,r2,rr,ir;
 printf("enter the coefficients");
 scanf("%f%f%f",&a,&b,&c);
 float quad(a,b,c);
 return 0;
 }
 
     
