

#include<stdio.h>
#include<math.h>
#define ESP 0.0001
#define X1(x2,x3) ((17 - 20*(x2) + 2*(x3))/20)
#define X2(x1,x3) ((-18 - 3*(x1) + (x3))/20)
#define X3(x1,x2) ((25 - 2*(x1) + 3*(x2))/20)
int main()
{
	double x1=0,x2=0,x3=0,y1,y2,y3;
	int i=0;
	printf("\n ________________________________\n");
	printf("\nx1\t\tx2\t\tx3\n");
	printf("\n ________________________________\n");
	printf("\n%f\t%f\t%f",x1,x2,x3);
	do
	{
		y1=X1(x2,x3);
		y2=X2(x1,x3);
		y3=X3(x1,x2);
		if (fabs(y1-x1)<ESP&&fabs(y2-x2)<ESP&&fabs(y3-x3)<ESP)
		{
			printf("\n ________________________________\n");
			printf("\n\nx1=%.3lf",y1);
			printf("\n\nx2=%.3lf",y2);
			printf("\n\nx3=%.3lf\n",y3);
			i=1;
		}
		else
		{
			x1=y1;
			x2=y2;
			x3=y3;
			printf("\n%f\t\t%f\t\t%f\n",x1,x2,x3);
		}
	}

	while(i!=1);
}