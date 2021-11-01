#include <bits/stdc++.h>
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define LL long long
#define endl "\n"

using namespace std;

int main() {
    BOOST;
    int t;
    long long a=0, b=0, c=0, A=0, B=0, C=0;
    cin>> t;
    for(int i=1; i<=t; i++) {
        cin>> a >> b >> c;
        if(a==b && b==c && c==a) {
            A=1;
            B=1;
            C=1;
        }
        else if(a>b && a>c) {
            A=0;
            B=(a-b)+1;
            C=(a-c)+1;
        }
        else if(b>a && b>c) {
            A=(b-a)+1;
            B=0;
            C=(b-c)+1;
        }
        else if(c>a && c>b) {
            A=(c-a)+1;
            B=(c-b)+1;
            C=0;
        }
        else if(a>b && a==c) {
            A=1;
            B=(a-b)+1;
            C=1;
        }
        else if(b>a && b==c) {
            A=(b-a)+1;
            B=1;
            C=1;
        }
        else if(a>c && a==b) {
            A=1;
            B=1;
            C=(a-c)+1;
        }
        cout<< A << " " << B << " " << C << endl;
    }
return 0;
}
