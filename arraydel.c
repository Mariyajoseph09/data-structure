#include<stdio.h>
int main()
{
	int array[100],position,c,n;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(c=0;c<n;c++)
		scanf("%d",&array[c]);
		printf("enter the location to delete:");
		scanf("%d",&position);
		if(position>=n+1||position<1)
		printf("deletion is not possible");
		else
		{
		for( c=position-1;c<n-1;c++)
		array[c]=array[c+1];
		printf("resultant array is:\n");
		for(c=0;c<n-1;c++)
		printf("%d\n",array[c]);
		}
return 0;
}
