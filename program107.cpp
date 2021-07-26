
#include<iostream>
using namespace std;
int addition(int ino1,int ino2)
{
	int result=0;
	result=ino1+ino2;
	return result;
}
int main()
{
	int ivalue1=0,ivalue2=0,iret=0;
	
	cout<<"enter first number\n";
	cin>>ivalue1;
	
	cout<<"enter second number\n";
	cin>>ivalue2;
	
	iret=addition(ivalue1,ivalue2);
	
	cout<<"addition of "<<ivalue1<<"and"<<ivalue2<<"is :"<<iret;
	
	return 0;
}
