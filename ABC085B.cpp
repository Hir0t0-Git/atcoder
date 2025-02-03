#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int N;
int d[110];
int main()
{
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> d[i];
    }
    sort(d, d+N, greater<int>());
    int cnt = 1;
    int last_size = d[0];
    for(int i=1; i<N; i++){
        if(d[i]<last_size){
            cnt += 1;
            last_size = d[i];
        }
    }
    cout << cnt;
}