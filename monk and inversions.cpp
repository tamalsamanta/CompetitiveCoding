#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cin >> a[i][j];

		int c=0;

		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)	
				for(int x=i; x<n; x++)
					for(int y=j; y<n; y++)
						if(a[x][y] < a[i][j])
							c++;

		cout << c << endl; 
	}