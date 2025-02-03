#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int total = 700;
    for(int i=0; i<3; i++){
        if(s[i]=='o'){
            total += 100;
        }
    }
    cout << total;
}