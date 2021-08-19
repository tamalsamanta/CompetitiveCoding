#include<bits/stdc++.h>
using namespace std;

int* shift(int a[], int n){
	int temp;
	temp = a[0];
	for(int i=0; i<n-1; i++)
		a[i] = a[i+1];
	
	a[n-1] = temp;
	
	return a;
}

int main(){
	
	int t;
	cin >> t;
	
	while(t--){
		int n;
		cin >> n;
		
		int k;
		cin >> k;
		
		int b[n];
		for(int i=0; i<n; i++)
			cin >> b[i];
			
		int res = 0;
		k %= n;
		for(int i=n-k; i<n; i++){
			if(b[i] == 1){
				res+=pow(2,n-i);
			}
			
			if(i == n-1){
				i = 0;
			}
		}
	}
	
	return 0;
}
