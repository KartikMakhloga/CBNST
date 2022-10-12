
#include<stdio.h>
#include<math.h>

int main()
{
	float true_value,approximate_value;

	printf("\nEnter True Value : ");
	scanf("%f",&true_value);

	printf("\nEnter Approximate Value : ");
	scanf("%f",&approximate_value);

	float absolute_error,relative_error,percentage_error;

	absolute_error = fabs(true_value-approximate_value);
	relative_error = fabs(absolute_error/true_value);
	percentage_error = fabs(relative_error*100);

	printf("\nAbsolute Error : %f",absolute_error);
	printf("\nRelative Error : %f",relative_error);
	printf("\nPercentage Error : %f percent",percentage_error);

	return 0;
}

