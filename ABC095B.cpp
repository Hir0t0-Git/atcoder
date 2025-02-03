#include<iostream>
using namespace std;
int N, X, m[110];
int main()
{
    cin >> N >> X;
    int M = X, S = 0;   //それぞれm[N]の最小値, 合計の消費量
    for(int i=0; i<N; i++){
        cin >> m[i];
        if(m[i]<M){
            M = m[i];
        }
        S += m[i];
    }
    int n = (X - S) / M;
    cout << N + n;
}