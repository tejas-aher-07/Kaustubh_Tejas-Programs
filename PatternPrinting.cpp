#include<iostream>
using namespace std;
int main(){
	char sym;
	int num;
	cout<<"Enter symobol you want to print"<<endl;
	cin>>sym;
	cout<<"Enter number of times symobol you want to print"<<endl;
	cin>>num;
	int i=0;
	while(i<num){
		cout<<sym;
		i++;	
	}
}
