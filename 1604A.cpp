#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define ll long long

int main(){
    BOOST;
    int tarek;
    ll x,ans=0;
    cin>>tarek;
    while(tarek--) {
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            ans = max(ans, x-i);
        }
        cout << ans << endl;
    }
}
