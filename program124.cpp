#include<iostream>

using namespace std;

void Swap(int ino1,int ino2)//call by value
{
	int temp;
	temp=ino1;
	ino1=ino2;
	ino2=temp;
	
}

int main()
{
	int iValue1=0,iValue2=0;
	
	cout<<"Enter first number\n";
	cin>>iValue1;
	
	cout<<"Enter second number\n";
	cin>>iValue2;
	
	Swap(iValue1,iValue2); //swap(10,20)
	cout<<"After swap value1 is :"<<iValue1<<"\n";
	cout<<"After swap value2 is :"<<iValue2<<"\n";
	
	return 0;
}
	

























