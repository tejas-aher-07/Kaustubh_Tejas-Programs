#include<iostream>

using namespace std;
class Reference
{
	int a,b;
	public:
		void setter(int p,int q)
		{
			a=p;
			b=q;
		}
		void display()
		{
			cout<<a<<b;
		}
		void swapByReference(int& p,int& q)
		{
			int temp=p;
			p=q;
			q=temp;
//			a=p;
//			b=q;
//			setter(p,q);
			
		}
};
//void Reference ::swapByReference(int& p,int& q)
//{
//	int temp=p;
//	p=q;
//	q=temp;
//}
int main()
{
	Reference r1;
	int a,b;
	cout<<"Enter A and B : ";
	cin>>a>>b;
	r1.setter(a,b);
	cout<<"Before Swapping : "<<endl;
	r1.display();

	r1.swapByReference(a,b);
	r1.setter(a,b);
	cout<<"After Swapping : ";
	r1.display();
	
}

