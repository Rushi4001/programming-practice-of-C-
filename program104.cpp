#include<stdio.h>
#include<stdlib.h>
int sumarr(int Arr[], int isize)
{
	int i=0,isum=0;
	

	for(i=0;i<isize;i++)
	{
		isum=isum+Arr[i];
		
		
	}
	return isum;
	
}
int main()
{
	int *arr=NULL;
	int ilength=0;
	int i=0,iret=0;
	
	printf("enter the numbers of elements\n");
	
	scanf("%d",&ilength);
	
	arr=(int*)malloc(ilength*sizeof(int));
	
	printf("enter the number\n");
	for(i=0;i<ilength;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	iret=sumarr(arr,ilength);
	printf("sum of all number is:%d",iret);
	
	
	free(arr);
	
	
	return 0;
}