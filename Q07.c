/*Simson*/
#include <stdio.h>
#include <math.h>
int main( )
{
   int n,i;
   float a,b,h,sum1,sum2,sum3,intvle;
   float F(float x);
   printf(" give the initial value of limit a\n");
   scanf("%f",&a);
   printf( "give the value of final limit b\n");
   scanf("%f",&b);
   printf( "give the value of interval 'n'\n");
   scanf("%d",&n);
   h=(b-a)/n;
   sum1=(F(a)+F(b));
   sum2=0;
   for (i=1;i<n;i=i+2)
   {
    sum2=sum2+F(a+i*h);
   }
   sum3=0;
   for (i=2;i<n-1;i=i+2)
   {
    sum3=sum3+F(a+i*h);
   }
   intvle=h*(sum1+4*sum2+2*sum3)/3;
   printf("\n");
   printf("a..........b............n............Value of Integration\n\n\n");
   printf( "\n%f  %f     %d           %5f\n",a,b,n,intvle);
}
float F(float x)
  {
   float f;
   f=(log(1+.8*x+.64))/(.8+x);
   return (f);
  }