/*ABC085B bucket法による解法*/
#include<iostream>
using namespace std;
int N;
int d[110];
int main()
{
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> d[i];
    }
    int num[110] = {0}; //bucket, バケツ
    for(int i=0; i<N; i++){
        num[d[i]]++;
    }
    int ans = 0;
    for(int i=0; i<=100; i++){
        if(num[i]){     //0より大きければ
            ans++;      //インクリメント
        }
    }
    cout << ans;
}