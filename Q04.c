/* Solution by Newton Raphson Method */

#include <stdio.h>
#include <math.h>
#define err 0.00001
#define ITNO 20
#define F(x)  tan(x)+a* pow(sin(x),2)-1
#define FD(x) (1/pow(cos(x),2))+a*sin(2*x)
int main()
{
  int count;
  float x0,xn,fx,fdx,a=3;
  printf("Give the initial approximation\n");
  scanf("%f",&x0);
  count=1;
  begin:
  fx=F(x0);
  fdx= FD(x0);
     xn=x0-(fx/fdx);
     printf("\n n=%d xn=%f",count,xn);
     if(fabs(xn-x0)<err)
      printf("\n the root is %f\n",xn);
    else
    {
      x0=xn;
      count=count+1;
      if(count<=ITNO)
      {
        goto begin;
      }
      else
      {
        printf("the solution does not converge");
      }
    }

}