#include<iostream>
#include<string>

using namespace std;

int * matchingStrings(string a[],int m,string b[],int n){
	int s[10000];
	
	
	for(int i=0;i<n;i++){
		
		int count = 0;
		
		for(int j=0;j<m;j++){
			if(b[i] == a[j]){
				count++;
			}
		}
		s[i] = count;
		
	}
	return s;
}

int main(){
	
	string a[100],b[100];
	int c,d;
	
	cout<<"Enter the size of strings"<<endl;
	cin>>c;
	
	for(int i=0;i<c;i++){
		cin>>a[i];
	}
	
	cout<<"Enter the size of queries"<<endl;
	cin>>d;
	
	for(int i=0;i<d;i++){
		cin>>b[i];
	}
	
	int * t = matchingStrings(a,c,b,d);
	
	for(int i=0;i<d;i++){
		cout<<t[i]<<" ";
	}
	
	
}
