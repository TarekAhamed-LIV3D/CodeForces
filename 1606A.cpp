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
        string ahamed;
        cin>>ahamed;
        if(ahamed.size()==1){
                cout<<ahamed<<endl;
        }
        else{
                cout<<ahamed.back()<<ahamed.substr(1)<<endl;
        }
    }
}
