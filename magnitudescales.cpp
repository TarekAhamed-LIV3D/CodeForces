#include<bits/stdc++.h>
using namespace std;
 
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    BOOST;
    int a,b;
    cin >> a >> b;
    if(3 <= b && b <= a && a <= 9){
        int c;
        c = a - b;
        int d = pow(32,c);
        cout << d;
    }
    else if (a == b)
    {
        cout << "1";
    }
}