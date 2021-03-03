

// A program of bisection method in c

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float f(float x)
{
	float sum;
	sum = pow(x, 3) + x + 3;
	return sum;
}
int main()
{
	float a, b, e, m;
	printf("This Program Illustrates the bisection method in C:\n");
	printf("x^3 + 3*x - 5 = 0\n");
	step:
	printf("Enter the Value of a and b: ");
	scanf("%f%f",&a, &b);
	printf("Enter tolerable Error: \n");
	scanf("%f",&e);
	if (f(a)*f(b) > 0)
	{
		goto step;
	}
	step1:
	m = (a+b)/2;
	if (f(m) == 0){
		printf("the root is : %f", m);
		exit(0);
	}
	else if (f(a) * f(m) < 0)
		b = m;
	else if (f(b) * f(m) < 0)
		a = m;
	if (fabs (a - b) > e){
		goto step1;
	}
	printf("the root is : %f\n", m);
	return 0;
}