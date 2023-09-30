#include<iostream>
using namespace std;

int main(){
	char* String1[5]={"Kaustubh","Vishnu","Pawar","IET","CDAC"};
	for(int i=0;i<5;i++){
		for(int j=0;j<10;j++){
			cout<<(*(String1+j)+i);
	      	cout<<endl;
		}
	}
}
