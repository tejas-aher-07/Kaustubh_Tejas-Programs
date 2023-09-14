#include<iostream>
using namespace std;

//#include <array>

int main()
{
	int n,count=0;
	cout<<"Enter the size of array";
	cin>>n;
	int ptr1[n];
	
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>ptr1[i];
		count++;
	}
	int *ptr2[5];
	
	cout<<"the elements are : "<<endl;
	for(int i=0;i<count;i++)
	{
		ptr2[i]=&ptr1[i];
		cout<<"\t"<<*ptr2[i]<<"\t"<<ptr2[i]<<endl;
	}
	
	
}
