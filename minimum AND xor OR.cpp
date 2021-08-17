#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n;
		cin >> n;
		
		int a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
			
		sort(a, a+n);
			
		int minval = INT_MAX;
		
		for(int i=0; i<n-1; i++){
			int andexp = a[i]&a[j];
			int orexp = a[i]|a[j];
			int res = andexp^orexp;
			if(minval > res)
				minval = res;
		}
		
		cout << minval;
	}

	return 0;
}

