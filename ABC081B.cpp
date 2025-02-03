#include<iostream>
using namespace std;
int N;
int A[210];
int main()
{
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    int flag = 0; 
    int i = 0;
    while(true){
        for(int j=0; j<N; j++){
            if(A[j]%2 == 1){
                flag = -1;
            }else{
                A[j] /= 2;
            }
        }
        if(flag == -1){
            cout << i;
            break;
        }else{
            i += 1;
        }
    }
}