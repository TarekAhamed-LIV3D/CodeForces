#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define ll long long

int main(){
    BOOST;
    ll tarek;
    cin>>tarek;
    while(tarek--){
        int a;
        cin >> a;
        std::vector<int> v(a);
        for(int i = 0; i<a; ++i){
            cin >> v[i];
        }
        vector<int>::iterator it1,it2,it3;
        it1 = std::find (v.begin(), v.end(), 1);
        it2 = std::find (v.begin(), v.end(), 2);
        it3 = std::find (v.begin(), v.end(), 3);
        if(*it1 == 1){
            if(*it2 == 2){
                if(*it3 == 3){
                    cout << "YES" << endl;
                }
                else cout << "NO" << endl;
            }
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
}
