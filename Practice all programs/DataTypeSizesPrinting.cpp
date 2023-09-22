#include<iostream>
using namespace std;
void printLine();
int main(){
	printLine();
	cout<<"\t DataType \t\t Size Of DataType"<<endl<<endl;
	printLine();
	cout<<"\t Integer \t\t "<<sizeof(int)<<endl;
	printLine();
	cout<<"\t Short \t\t\t "<<sizeof(short)<<endl;
	printLine();
	cout<<"\t Float \t\t\t "<<sizeof(float)<<endl;
	printLine();
	cout<<"\t Double \t\t "<<sizeof(double)<<endl;
	printLine();
	cout<<"\t Character \t\t "<<sizeof(char)<<endl;
	printLine();
}
void printLine(){
	cout<<"|-----------------------|------------------------|"<<endl;
}
