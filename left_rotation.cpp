#include<iostream>
using namespace std;

int main(){
	int a[100000];
	int n,d;
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	
	for(int j=1;j<=d;j++){
		for(int i=0;i<n-1;i++){
		int temp = a[i];
		a[i] = a[i+1];
		a[i+1] = temp;
	}
	}
	
	
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
