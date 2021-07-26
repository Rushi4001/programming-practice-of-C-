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
	int wordcount()
	{
		int icnt=0;
		char*ptr=str;
		
		while(*ptr!='\0')
		{
			if(*ptr==' ')
			{
				while((*ptr==' ')&&(*ptr!='\0'))
				{
					ptr++;
				}
			}
			else
			{
				icnt++;
				while((*ptr!=' ')&&(*ptr!='\0'))
				{
					ptr++;
				}
			}
		}
		return icnt;
	}
};
int main()
{
	int ret=0;
	stringx obj;
	obj.accept();
	ret=obj.wordcount();
	cout<<"wordcount is :"<<ret<<"\n";
	
	return 0;
}