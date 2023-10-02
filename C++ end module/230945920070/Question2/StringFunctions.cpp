#include<iostream>
using namespace std;

void stringConcatination(char *,char *);
void stringCopy(char *,char []);
int stringLength(char []);

int main(){
	cout<<"Enter size of Sting 1 : ";
	int ct;
	cin>>ct;
    char* string1=new char[ct+1];
    cout<<"Enter string 1 : ";
	cin>>string1;
    cout<<"Enter size of Sting 2 : ";
	int ct1;
	cin>>ct1;
    char* string2=new char[ct1+1];
	cout<<"Enter string 2 : ";
	cin>>string2;
	
    cout<<"Length of first string is : "<<stringLength(string1)<<endl;
    cout<<"Length of second string is : "<<stringLength(string2)<<endl;
    
    cout<<"Concatinated String is : ";
    stringConcatination(string1,string2);
    cout<<string1<<endl;
    
    cout<<"Copied String is : ";
    char string[stringLength(string1)+1];
    stringCopy(string,string2);
    cout<<string<<endl;
}

void stringConcatination(char *str1,char *str2){
    for(int i=0,j=0;i<((stringLength(str1)+stringLength(str2)));i++){
        if(str1[i]=='\0'){
            str1[i]=str2[j];
            str1[i+1]='\0';
            j++;
        }
    }
}
void stringCopy(char *str,char str1[]){
    int i;
    for(i=0;i<stringLength(str1);i++){
        if(str1[i]=='\0'){
            break;
        }
        else{
            str[i]=str1[i];
        }
    }
    str[i]='\0';
}
int stringLength(char str[]){
    int count=0;
    for(int i=0;;i++){
        if(str[i]=='\0'){
            break;
        }
        else{
            count++;
        }
    }
    return count;
}
