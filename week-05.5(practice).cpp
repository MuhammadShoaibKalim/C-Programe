/*
Write a programe that display a multiplication table. 

*/
#include<iostream>
using namespace std;
int main(){
	
	int a,b;
	cout<<" Enter the value of b :";
	cin>>b;
	
	for(a=1;a<=10;a++){
		cout<<a<<" * "<<b<<" = "<<a*b<<endl;
		
	}
}
