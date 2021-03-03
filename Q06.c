#include<stdio.h>
int main()
{
	float x[100],y[100],a,s=1,t=1,k=0;
	int n,i,j;
	printf("\n\n Enter the number of the terms of the table: ");
	scanf("%d",&n);
	printf("\n\n Enter the respective values of the variables x and y: \n");
	for(i=0; i<n; i++)
	{
		scanf ("%f",&x[i]);
		scanf("%f",&y[i]);
		}
		printf("\n\n The table you entered is as follows :\n\n");
		for(i=0; i<n; i++)
		{
			printf("%0.3f\t%0.3f",x[i],y[i]);
			printf("\n");
			}
k=0;
printf("\n Enter the Value of the x to find respective value of y\n");
scanf("%f",&a);
for(i=0;i<n;i++)
{
	s=1;
	t=1;
	for (j=0;j<n;j++)
	{
		if(j!=i)
		{
			s=s*(a-x[j]);
			t=t*(x[i]-x[j]);
		}
	}
	k=k+((s/t)*y[i]);
}
printf("\n\n THe respective value of the variable y is :%f\n",k);
}