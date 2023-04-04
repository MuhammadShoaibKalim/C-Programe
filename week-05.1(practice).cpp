/*
Write a programe that show the sum of a given number number using for loop.
*/
#include<iostream>
using namespace std;
int main(){
	
	int a,n, sum=0;
	cout<<" Enter the value of n :";
	cin>>n;
	
	for(a=1;a<=n;a++){
	sum +=a;
	
	}
	cout<<"The sum of given value of n is :"<<sum;
}
