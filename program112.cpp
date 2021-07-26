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
		int ivalue=ino;
		int icnt=0;
		int i=0,j=0;
		while(ivalue>0)
		{
			icnt++;
			ivalue=ivalue/10;
		}
		ivalue=ino;
		
		for (i=icnt;i>0;i--)
		{
			for(j=0;j<i;j++)
			{
				cout<<ivalue%10<<"\t";
				ivalue=ivalue/10;
				
			}
			cout<<"\n";
			ivalue=ino;			
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