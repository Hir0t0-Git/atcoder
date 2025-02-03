/*ABC 085B mapを用いた解法*/
#include<iostream>
#include<set>
using namespace std;
int N;
int d[110];
int main()
{
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> d[i];
    }
    set<int> values;  
    for(int i=0; i<N; i++){
        values.insert(d[i]);    //挿入時, 重複は除去される!
    }
    cout << values.size();
}