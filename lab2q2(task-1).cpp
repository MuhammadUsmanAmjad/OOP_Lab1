#include<iostream>
using namespace std;
void input(int*m,int size)
{
	for(int i=0;i<size;i++)
	 {
		 cin>>*(m+i);
	 }
}
void output(int *m,int size)
{
	cout<<"{";
	for(int i=0;i<size;i++)
	{
		cout<<*(m+i)<<",";
	}
	cout<<"}";
}
int*intersection(int*set1,int& size1,int*set2,int& size2,int &size3)
{
	
	int k=0;
	/*if(size1<size2)
		size=size1;
	else
		size=size2;*/
	int *p=nullptr;
	p=new int[size1+size2];
	for(int j=0;j<(size1+size2);j++)
	{
	for(int i=0;i<(size1+size2);i++)
	{
		if(*(set1+j)==*(set2+i)){
			*(p+k)=*(set1+j);
			k++;
			
	}
	}
	}
	
	return p;

}

int main()
{
	int *set1=nullptr;int *set2=nullptr;
	int size1=0,size2=0,size3=0;
	int *set3=nullptr;
	
	cout<<"enter sizez:\n";
	cin>>size1>>size2;
	set1=new int[size1];
	set2=new int[size2];
	size3=size1+size2;
	set3=new int[size3];
	cout<<"1st set:\n";
	 input(set1,size1);
	 cout<<"\n1st set is:\n";
	 output(set1,size1);
	 cout<<"\n2nd set:\n";
	 input(set2,size2);
	 cout<<"\n2nd set is:\n";
	  output(set1,size1);
	set3=intersection(set1,size1,set2,size2,size3);
	cout<<"\nintersection of 2 sets is:\n";
	 output(set3,size3);
	system("pause");
	return 0;

}

