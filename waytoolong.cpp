#include<bits/stdc++.h>
using namespace std;
 
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    BOOST;
    int n;
    string s;
    cin >> n;
    while (n--){
        cin >> s;
        if (s.length() > 10){
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << "\n";
        }
        else{
            cout << s << "\n";
        }
    }
}