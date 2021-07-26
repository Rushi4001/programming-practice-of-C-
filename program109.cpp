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
		int icnt=0;
		while(*ptr!='\0')
		{
			while(*(s+icnt)!='\0')
			{
				cout<<*s<<"\t";
				s++;
			}
			s=str;
			ptr++;
			icnt++;
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






