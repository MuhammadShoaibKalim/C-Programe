/*
Write a programe that show the GDC of a number.
30,21

*/
#include<iostream>
using namespace std;
int main(){
	
	int m,n,sub=0;
	cout<<"Enter the value of a, b :";
	cin>>m>>n;
	while(m!=n){
		if(m>n){
			m=m-n;
			cout<<m<<endl;
		}
		else if(n>m){
			n=n-m;
			cout<<n<<endl;
		}
	}
	return 0;
}
