#include <iostream>
using namespace std;
#include<String.h>
class String1{
	int len;
	char* ptr;
	public:
		String1(char* name){
			this->len=strlen(name);
			this->ptr=new char[len+1];
			strcpy(this->ptr,name);
		}
		String1(int len,char* name){
			this->len=len;
			this->ptr=new char[len+1];
			strcpy(this->ptr,name);
		}
		void displaystring(){
			cout<<"Length of String is : "<<len<<endl;
			cout<<"Accepted String is : "<<ptr<<endl;
		}
};
int main(){
	String1* s1=new String1(10,"Kaustubh");
	s1->displaystring();
	
	String1 s2("CDAC");
	s2.displaystring();
}
