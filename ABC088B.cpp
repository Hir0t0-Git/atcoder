#include<iostream>
#include<algorithm>
using namespace std;
int N;
int a[110];
int main()
{
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    sort(a, a+N, greater<int>());
    int al=0, bo=0;
    for(int i=0; i<N; i++){
        if(i%2 == 0){
            al += a[i]; 
        }else{
            bo += a[i];
        }
    }
    cout << al - bo;
}