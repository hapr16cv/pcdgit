float quad(float a,float b,float c)
{
	float a,b,c,d,root1,root2,rr,ir;
 d=(b*b)-(4*(a*c));
 if(d==0)
   {
   root1=root2=(-b)/(2*a);
   printf("the roots are equal r1=%f,r2=%f\n",root1,root2);
   }
 else if(d>0)
   { root1=(-b+(sqrt(d)))/(2*a);
     root2=(-b-(sqrt(d)))/(2*a);
    printf("the roots are real and distinct r1=%f,r2=%f\n",root1,root2);
   }
  else if(d<0)
   { rr=(-b)/(2*a);
     ir=(sqrt(-d))/(2*a);
     printf("the roots are complex and imaginary r1=%f+i%f ,r2=%f+i%f\n",rr ,ir,rr,ir);
    }
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,root1,root2,rr,ir;
 printf("enter the coefficients\n");
 scanf("%f%f%f",&a,&b,&c);
 quad(a,b,c);
 return 0;
 }
