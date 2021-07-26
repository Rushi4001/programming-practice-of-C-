
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
        fd = open(Name,O_WRONLY|O_APPEND);
        if(fd == -1)
        {   cout<<"Unable to create file\n";}
        else
        {cout<<"File succesfully created..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void WriteData()
    {
		char str[]=" pune";
		write(fd,str,5);
    }
};
int main()
{
    
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    
    obj.WriteData();
    return 0;
}
