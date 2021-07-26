#include<iostream>
using namespace std;

class numberx
{
	public:
	int ino;
	
	void accept()
	{
		cout<<"enter number\n";
		cin>>ino;
	}
	void pattern()
	{
		int ivalue=ino,itemp=0;
	
		while(ivalue>0)
		{
			itemp=ivalue;
			while(itemp>0)
			{
				cout<<itemp%10<<"\t";
				itemp=itemp/10;
			}
			cout<<"\n";
			ivalue=ivalue/10;
		}
		
	}
};
int main()
{

	numberx obj;
	obj.accept();
	obj.pattern();
	
	return 0;
}