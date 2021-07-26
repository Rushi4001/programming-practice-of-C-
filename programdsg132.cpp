#include<iostream>

using namespace std;

template <class T>

struct node
{
	T data;
	struct node *next;
};


template<class T>
class singlyLL
{
	private:
		struct node<T> * Head;
		int iSize;
	
	public:	
		singlyLL();
		void Display();
		int Count();
		void InsertFirst(T);
};

template<class T>
void singlyLL<T>::InsertFirst(T no)
{
	struct node<T> *newn=new struct node<T>;
	newn ->data=no;
	newn->next=NULL;
	
	newn->next=Head;
	Head=newn;
	iSize++;
	
}

template <class T>
int singlyLL<T>::Count()
{
	return iSize;
}

template <class T>
void singlyLL<T>::Display()
{
	struct node<T> *temp=Head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
	cout<<"\n";
}

template <class T>
 singlyLL<T>::singlyLL()
{
	Head=NULL;
	iSize=0;
}

int  main()
{
	singlyLL <double> obj;
	obj.InsertFirst('A');
	obj.InsertFirst('B');
	obj.InsertFirst('C');
	
	obj.Display();
	
	cout<<"length of linked list is:"<<obj.Count()<<"\n";
	
	return 0;
}
