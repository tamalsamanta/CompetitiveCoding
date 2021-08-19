#include<bits/stdc++.h>
using namespace std;

string maxString(string s){

    int i=0, maxcount=0, spi;
    for(i; s[i]!='\0'; i++){
        int count = 0;
        if(s[i] == '1')
            for(int j=i; s[j]!= '\0'; j++){
                if(s[i] == '1'){
                    count++;
                    i++;
                    if(maxcount < count){
                        maxcount = count;
                        spi = i;
                    }
                }
                else break;
            }
        else continue;
    }   

    int lssb=0, lssf=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1'){
            lssf++;
        }
        else break;
    }

    for(int i=s.size()-1; i>=0; i--){
        if(s[i] == '1'){
            lssb++;
        }
        else break;
    }

    int maxdiv = lssb+lssf;
    if(maxcount > maxdiv)
        return s.substr(spi-maxcount , s.size()-spi+maxcount) + s.substr(0, spi-maxcount);
    else return s.substr(s.size()-lssb, lssb)+s.substr(0, s.size()-lssb);
    return s;
}

void solve(){
    

    string s;
    cin >> s;  
    string maxstring = maxString(s); //max decimal string achieved.
    cout << maxstring;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}