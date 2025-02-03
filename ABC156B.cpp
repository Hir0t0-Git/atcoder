#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    string ans = "";
    int cnt = 0;
    while(N>0){
        string tmp = to_string(N%K);
        ans.append(tmp);
        cnt += 1;
        N /= K;
    }
    reverse(ans.begin(),ans.end());
    cout << ans << "\n";
    cout << cnt;
}