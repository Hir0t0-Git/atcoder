#include<iostream>
using namespace std;
int main()
{
    int N, A;
    cin >> N >> A;
    int c = N % 500;
    if(c<=A){
        cout << "Yes";
    }else{
        cout << "No";
    }
}