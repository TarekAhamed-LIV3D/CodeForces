#include<bits/stdc++.h>
using namespace std;

#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    BOOST;
    int a;
    cin>>a;
    if(2 < a && a <= 100){
        if (a%2 == 0){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        cout << "NO";
    }
}