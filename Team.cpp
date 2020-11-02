#include <iostream>
using namespace std;

int main() {
    int n,x,y,z;
    int count = 0;
    if (n<=0){
        return 0;
    }
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x >> y >> z;
        if (x+y+z>1){
            ++count;
        }
    }
    cout << count;
}
