#include<iostream>

using namespace std;

int Maximum(int Arr[], int iSize)
{
	int imax=Arr[0];
	for(int i=1;i<iSize;i++)
	{
		if(Arr[i]>imax)
		{
			imax=Arr[i];
		}
	}
	return imax;
}

int main()
{
	int *arr=NULL;
	int isize,iret=0;
	
	cout<<"Enter number of elements\n";
	cin>>isize;
	
	arr=new int[isize];
	
	cout<<"Enter the values\n";
	for(int i=0;i<isize;i++)
	{
		cin>>arr[i];
	}
	
	iret=Maximum(arr,isize);
	cout<<"Largest Number is : "<<iret<<"\n";
	delete[]arr;
	
	return 0;
}






















