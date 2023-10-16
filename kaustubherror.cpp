#include<iostream>
using namespace std;

class kv
{
		int i;
		int j;
		int a[i][j];
		
	public:
		kv()
		{
			i=j=0;
		}
		kv(int i,j)
		{
			this->i=i;
			this->j=j;
		}
		
		void set()
		{
			cout<<"ENTER THE SEAT NUMBER IN "<<i<<"* "<<j<<endl;
			for(int i=0;i<this->i;i++)
			{
				for(int j=0;j<this->j;j++)
				{
					cin>>a[i][j];
				}
			}
		}
		
		void display()
		{
			
			cout<<"Seats number available in theatre are : "<<endl;
			for(int i=0;i<this->i;i++)
			{
				for(int j=0;j<this->j;j++)
				{
					cout<<a[i][j]<<",";
				}
				cout<<endl;
			}
			
		}
		
	
		
	
};
int main()
{
	kv kv1(4,4);
	kv1.set();
	kv1.display();
}
