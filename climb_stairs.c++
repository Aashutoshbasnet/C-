#include<iostream> 

using namespace std;

int number(int n);


int main() {
	int n;
	cout<<"enter the th stair you want to go to: "<<endl;
	cin>>n;
	
	cout<<"the number of ways you can go to "<<n<<"th stair is: "<<number(n)<<endl;
	
	return 0;
}

int number(int n) {
	if(n < 0)
	return 0;
	
	if(n == 0)
	return 1;
	
	
	while(n>0) {
		return number(n-1) + number(n-2);
		
	}
}