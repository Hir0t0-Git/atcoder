#include<iostream>
using namespace std;
int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int ans = 0;
    for(int i=1; i<=N; i++){
        int tmp = i;
        int sum = 0;
        while(tmp != 0){
            sum += tmp%10;
            tmp /= 10;
        }
        if(sum >= A && sum <= B){
            ans += i;
        }
    }
    cout << ans;
}