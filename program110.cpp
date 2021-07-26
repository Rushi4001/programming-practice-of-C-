#include<iostream>
using namespace std;

class stringx
{
	public:
	char str[30];
	
	void accept()
	{
		cout<<"enter string\n";
		scanf("%[^'\n']s",str);
	}
	void pattern()
	{
		char *ptr=str;
		char *s=str;
		int icnt1=0,icnt2=0;
		while(*ptr!='\0')
		{
			while(icnt2<=icnt1)
			{
				cout<<*s<<"\t";
				s++;
				icnt2++;
			}
			icnt2=0;
			s=str;
			ptr++;
			icnt1++;
			cout<<"\n";
		}
	}
};
int main()
{

	stringx obj;
	obj.accept();
	obj.pattern();
	
	return 0;
}