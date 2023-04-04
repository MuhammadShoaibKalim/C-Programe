/*
write a program that show number is perfect or not
perfect: if it is divisible by 2 or itself i.e 13%13=0  
*/
#include<iostream>
using namespace std;
int main(){
	int a,n,sum=0;
	cout<<"Enter the number :";
	cin>>n;
	for(a=0;a<=n;a++)
{
sum +=a;	
	}
	if(n%a==0){
		cout<<"The number is perfect.";
	}
	else
	cout<<"The number is not perfect.";
	
  return 0;
}
