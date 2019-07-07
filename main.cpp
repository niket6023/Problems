#include <bits/stdc++.h>
using namespace std;


bool check(char s){
    return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
}
string reverse(string s){
    int l=s.length();
    int i=0;
    int j=l-1;

    while(j>i) {
        if (check(s[i]) && check(s[j])) {
            swap(s[i], s[j]);
            i++;
            j--;
        } else if (check(s[i]) && !check(s[j])) {
            j--;
        } else if (!check(s[i]) && check(s[j])) {
            i++;
        } else {
            i++;
            j--;
        }
    }
    return s;
}
int main() {
    int t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;
        cout<<reverse(s)<<endl;
    }
    return 0;
}