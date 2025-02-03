#include<iostream>
#include<string>
using namespace std;
int main()
{
    int s;
    cin >> s;
    int cnt = 0;
    for(int i=0; i<3; i++){
        int tmp = s % 10;
        cnt += tmp;
        s /= 10;
    }
    cout << cnt;
}