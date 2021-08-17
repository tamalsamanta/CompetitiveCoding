#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		k %= n;
		int a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
		
		for(int j=n-k; j<n; j++)
			cout << a[j] << " ";

		for(int j=0; j<n-k; j++)
			cout << a[j] << " ";
		
		cout << endl;
	}

	return 0;
}