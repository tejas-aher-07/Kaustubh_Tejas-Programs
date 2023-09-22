#include <stdio.h>
void Strcpy(char*,char*);
void Strrev(char*);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char str1[]="PGDAC";
	char str2[]="IET";
	char str3[50],str4[50];
	
	//Printing the length of String
	int l1= Strlen(str1);
	printf("%d\n",l1);
	int l2= Strlen(str2);
	printf("%d\n",l2);
	
	//Copying One String into Another
	Strcpy(str3,str1);
	Strcpy(str4,str2);
	
	//Reversing a string
	Strrev(str3);
	Strrev(str4);
	
	int a = Strcamp("TEJAS","TEJA");
	if(a){
		printf("String 1 is greater");
	}
	else if(a==-1){
		printf("String 2 is greater");
	}
	else{
		printf("Strings are equal");
	}
	return 0;
	

}

int Strlen(char *str)
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		
	}
	return i;
}

void Strcpy(char *str,char* p){
	int i;
	for(i=0;p[i]!='\0';i++){
		str[i]=p[i];
	}
	str[i]='\0';
	printf("New String After coping is %s \n",str);
//	printf("%d",Strlen(str));
//printf("%d",Strlen(revstr));
}

void Strrev(char *str)
{
	char revstr[Strlen(str)];
	int i,j;
	for(i=Strlen(str)-1,j=0;i>=0;i--,j++)
	{
		revstr[j]= str[i];
	}
	//revstr[j]='\0';
	printf("After Reversing string is %s ",revstr);

}
int Strcamp(char* p,char* q){
	int i;
	for(i = 0;p[i]!='\0';i++){
		if(p[i]!=q[i]){
			break;
		}
	}
	if(p[i]>q[i]){
		return 1;
	}
	else if(p[i]<q[i]){
		return -1;
	}
	else{
		return 0;
	}
}
