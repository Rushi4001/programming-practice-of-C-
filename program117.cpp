#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
using namespace std;
class FileX
{
public:
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {   cout<<"Unable to open file\n";}
        else
        {cout<<"File succesfully open..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void ReadData()
    {
        char Arr[20];
        read(fd,Arr,10);
		write(1,Arr,10);
       
    }
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    obj.ReadData();
    return 0;
}
