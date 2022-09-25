#include<iostream>
using namespace std;
void encrypt(int & size)
{
    cout<<"enter size of the char array:\n";
    cin>>size;
    char*p;
    p=new char[size];
    int i=0;
    for(int i=0;i<size && *(p+i)!='\0';i++)
    {
        cin>>*(p+i);
    }
    size=i;
    char encyrpt;
    cout<<"enter encryption key:\n";
    cin>>encyrpt;
    for(int k=0;*(k+p)!='\0';k++)
    {
        *(p+k)=char(*(p+k)-encrypt)
    }
    for(int j=0;j<size;j++)
    {
        cout<<*(p+j);
    }
}
int main()
{
    int size=0;
    encrypt(size);
}
