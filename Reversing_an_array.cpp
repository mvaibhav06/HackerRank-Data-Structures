#include<iostream>
using namespace std; 

int * reverse(int a[],int b[],int n){
	int j = 0;
	for(int i=n-1;i>=0;i--){
		b[j++] = a[i];
	}
	return b;
}

int main(){
	int c[10],d[10];
	int n;
	
	cout<<"Enter the no of elements in the array"<<endl;
	cin>>n;
	
	cout<<"Enter array elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	
	reverse(c,d,n);
	for(int i=0;i<n;i++){
		cout<<d[i]<<" ";
	}
}
