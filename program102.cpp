#include<iostream>

using namespace std;

class arithmatic
{
public:
	int ino1,ino2;
	arithmatic(int x,int y)
	{
		ino1=x;
		ino2=y;
	}

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
	int iret1=0 ,iret2=0;
	arithmatic obj1(10,11);
	arithmatic obj2(20,15);
	
	
	iret1=obj1.addition();
	cout<<"addition is :"<<iret1<<"\n";
	
	
	iret2=obj2.subtraction();
	cout<<"subtraction is :"<<iret2<<"\n";
	
	return 0;
}
	
	
	