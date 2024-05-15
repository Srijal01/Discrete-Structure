//WAP to demonstrate an example of floor and ceiling functions.
#include<stdio.h>
#include<math.h>
int main()
{
	float num = 3.7;
	int floorResult, ceilResult;
	floorResult = floor(num);
	ceilResult = ceil(num);
	printf("Original number: %.2f\n",num);
	printf("Floor value: %d\n",floorResult);
	printf("Ceiling value: %d\n",ceilResult);
	return 0;
}
