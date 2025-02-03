#include<iostream>
using namespace std;
int main()
{
    int N, T, A;
    cin >> N >> T >> A;
    int min_idx = -1;
    double min_dif = 1e9;
    for(int i=1; i<=N; i++){
        int tmp;
        cin >> tmp;
        double dif = abs(A - (T - 0.006 * tmp));
        if(min_dif > dif){
            min_idx = i;
            min_dif = dif;
        }
    }
    cout << min_idx;
}