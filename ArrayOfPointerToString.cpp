#include<iostream>
using namespace std;
int main(){
	char* names[5]={"rohan","ram","rahul","rohit","rachana"};
//	cout<<(names+0)<<"\t";
//	cout<<names[0]<<"\t";
//	cout<<*(names+0);
	for(int i = 0;i<5;i++){
		int j=0;
		for(;j<10;j++){
			if(*(*(names+i)+j)=='\0')
				break;
				
			cout<<*(*(names+i)+j);
			
		}
		cout<<endl;
	}
}
