#include <iostream>
int main(){
    string s;
    cin >> s;
    long count(0);
    bool cng(false);
    for (long x=1; x < s.size(); x++){
        if(s[x - 1] == 'V' && s[x] == 'K'){
            s[x - 1] = s[x] = 'X';
            ++count;
        }
    }
    for(long x = 1; x < s.size(); x++){
        if((s[x - 1] == 'V' && s[x] == 'V') || (s[x - 1] == 'K' && s[x] == 'K')){
            ++count;
            break;
        }
    }
    cout << count << endl;
}
