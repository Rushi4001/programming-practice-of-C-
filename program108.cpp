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
	int strlenx()
	{
		int icnt=0;
		char*ptr=str;
		while(*ptr!='\0')
		{
			ptr++;
			icnt++;
		}
	return icnt;
	}
	
	
};
int main()
{
	int iret=0;
	stringx obj;
	obj.accept();
	iret=obj.strlenx();
	cout<<"string length is :"<<iret<<"\n";
	return 0;
}