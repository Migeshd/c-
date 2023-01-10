//if else if else


#include<iostream>
using namespace std;

int main(){
	
	int day;
	cout<<"enter no of days"<<endl;
	cin>>day;
	
	if(day==1){
		cout<<"sunday";
	}else if(day==2){
		cout<<"monday";
	}else if(day==3){
		cout<<"tuesday";
	}else if(day==4){
		cout<<"invalid";
	}
	return(0);
}
