#include<iostream>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h> 
using namespace std;

int main(){
	char input[128];
	cout<<"********************welcome talk with B.O.B************************\n"; 
	while (1)
	{
		gets(input);
		 
		 if(strcmp(input, "hi")==0){
		 	cout<<"hello i am B.O.B\n";
		 }
		 else if(strcmp(input, "how are you")==0){
		 	cout<<"I am fine\n";
		 }
		 else if(strcmp(input, "what are you doing")==0){
		 	cout<<"I am learning somthing new\n";
		 }
		 else if(strcmp(input, "sum")==0){
		 	int num1,num2;
		 	cout<<"give first number\n";
		 	cin>>num1;
		 	cout<<"give second number\n";
		 	cin>>num2;
		 	cout<<"the sum is "<<num1+num2<<"\n"; 
		 }
		 else if(strcmp(input, "multiply")==0){
		 	int num1,num2;
		 	cout<<"give first number\n";
		 	cin>>num1;
		 	cout<<"give second number\n";
		 	cin>>num2;
		 	cout<<"the sum is "<<num1*num2<<"\n"; 
		 }
		 else if(strcmp(input, "subtract")==0){
		 	int num1,num2;
		 	cout<<"give first number\n";
		 	cin>>num1;
		 	cout<<"give second number\n";
		 	cin>>num2;
		 	cout<<"the sum is "<<num1-num2<<"\n"; 
		 }
		 else if(strcmp(input, "divide")==0){
		 	int num1,num2;
		 	cout<<"give first number\n";
		 	cin>>num1;
		 	cout<<"give second number\n";
		 	cin>>num2;
		 	cout<<"the sum is "<<num1/num2<<"\n"; 
		 }
	      else if(strcmp(input, "hello")==0){
		 	cout<<"hi sir\n";
		 }
		 else if(strcmp(input, "what is your name")==0){
		 	cout<<"sir I am B.O.B\n";
		 }
		 else if(strcmp(input, "bye")==0){
		 	exit(0);
		 }
		 else if(strcmp(input, "you can feel")==0){
		 	cout<<"sorry I can't feel";
		 }
		 else{
		 	cout<<"sorry I can't understand";
		 }
	}
}

