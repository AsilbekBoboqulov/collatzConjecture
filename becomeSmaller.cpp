#include <bits/stdc++.h>
using namespace std;
#define ff first
#define sc second
#define int int64_t
pair<int, int> f(int i, int j){
    if(j < 2 || i < 2) return {i, j};
    else if(i % 2 < 1 && j % 2 < 1) return f(i / 2, j / 2);
    else if(i % 2 < 1 && j % 2) return f(3 * i, 3 * j + 1);
    else return {i, j};
}
signed main(){
    for(int i = 2; i < 100; i++){
        for(int j = 1; j < i; j += 2){
            pair<int, int> pr = f(i, j);
            if(pr.ff < i && pr.sc < j) cout << i << " X + " << j << "    to    " << pr.ff << " X + " << pr.sc << "\n";
        }
    }
}
//32x+3
//96x+10
//48x+5
//144x+16
//72x+8
//36x+4
//18x+2
//9x+1
// 32x+3 > 9x+1
