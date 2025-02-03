#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string ans = "";
    int l = s.length();
    for(int i=0; i<l; i++){
        if(i%2 == 0){
            ans.push_back(s[i]);
        }
    }
    cout << ans;
}