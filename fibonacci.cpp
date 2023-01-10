#include <iostream>
using namespace std;
int main(){
	int n,a=0,b=1, c=0, i;
	cout<<"enter the number of terms:";
	cin>>n;
	cout<<"fibonacci series";
	for(i=1;i<=n;i++){
		if(i==1){
			cout<<" "<<+1;
			continue;
		}
		if(i==2){
			cout<<+2<<" ";
			continue;
		}
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
	return(0);
}
