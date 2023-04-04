/*Write a programe that display the factorial of a number.*/
#include <iostream>
using namespace std;
int main(){
	int a,n,fact=1;
	cout<<"Enter the number :";
	cin>>n;
	for(a=1;a<=n; a++){
		cout<<a<<endl;
			fact *=a;
	}

	cout<<"The factorial of "<<n<<" is :"<<fact;
	return 0;
}
