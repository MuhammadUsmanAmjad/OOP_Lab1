#include<iostream>
using namespace std;
int *initilize(int & size)
{
	int *p=nullptr;
	
	cout<<"enter size of array:\n";
	cin>>size;
	p = new int[size];
	cout<<"enter input:\n";
	for(int i=0;i<size;i++)
	{
		cin>>*(p+i);
	}
	return p;
}
void outputarray(int*ptr,int size)
{
for(int i=0;i<size;i++)
{
	cout<<*(ptr+i)<<" ";
}
}
int* compressarray(int *m,int &size)
{
	int * ptr=new int[size];
	for(int i=0;i<size-1;i++)
	{
      if(m[i]!=m[i+1]){
		ptr[i]=m[i];
	  }
		delete []m;
	}
	return ptr;

}

int main()
{
	int *arr=0;
	int size;
	arr=initilize(size);
	cout<<"arrays before compression is:\n";
	outputarray(arr,size);
	//cout<<"the sorted array is:\n";
	compressarray(arr,size);
	outputarray(arr,size);
	system("pause");
		return 0;
}

