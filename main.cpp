#include <iostream>
using namespace std;

int fibonacci (int m){
	if (m==0 || m==1){
		return m;
	}
	else {
		return (fibonacci(m-1)+fibonacci(m-2));
	}
}
void fib(int num){
	int x=0, y=1, z=0;
	for (int i=0; i<num; i++){
		cout<<x<<" ";
		z=x+y;
		x=y;
		y=z;
	}
}

int main (){
	int n, m=0;
	cout<<"Input Rekursif :";
	cin>>n;
	
	cout<<"Deret Fibonacci Rekursif :";
	for (int i=1; i<=n; i++){
		cout<<fibonacci(m)<<" ";
		m++;
	}
	int num;
	cout<<"Input Iteratif :";
	cin>>num;
	cout<<"Output Iteratif :";
	fib(num);
	
	return 0;
}
