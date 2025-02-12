#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int f(int n){
    int cnt = 0, t = n;
    while(n >= t) if(n & 1) n = n * 3 + 1; else{ cnt ++; n >>= 1; }
    return cnt;
}
signed main(){
    int N = 100; /// N is bound
    for(int i = 3; i < N; i += 2){
        cout << i << " + 2^" << f(i)  << "x\n";
    }
}
