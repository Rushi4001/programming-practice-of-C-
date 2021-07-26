#include<iostream>

using namespace std;

class arithmatic
{
public:
	int ino1,ino2;

void accept()
{
	cout<<"enter first number\n";
	cin>>ino1;
	cout<<"enter second number\n";
	cin>>ino2;
}
int addition()
{
	int iresult=0;
	iresult=ino1+ino2;
	return iresult;
}
int subtraction()
{
	int iresult=0;
	iresult=ino1-ino2;
	return iresult;
}
};
int main()
{
	int iret=0;
	arithmatic obj1;
	arithmatic obj2;
	
	obj1.accept();
	iret=obj1.addition();
	cout<<"addition is :"<<iret<<"\n";
	
	obj2.accept();
	iret=obj2.subtraction();
	cout<<"subtraction is :"<<iret<<"\n";
	
	return 0;
}
	
	
	