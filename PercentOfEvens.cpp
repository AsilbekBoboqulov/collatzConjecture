#include<bits/stdc++.h>
using namespace std;
void PercentOfEvens(int n){
    double InitialN = n, CountEven = 0, CountVec = 0;
    vector<int> Sequence;
    while(InitialN <= n){
        Sequence.push_back(n);
        if(n % 2 == 1){
            n *= 3;
            n += 1;
        }
        else n /= 2;
    }
    //Printing for array
    //for(auto Element:Sequence) cout << Element << ' '; cout << '\n';
    for(auto Element:Sequence){
        if(Element % 2 == 0) CountEven += 1;
        CountVec += 1;
    }
    cout << "Number " << Sequence[0] << ": " << CountEven / CountVec << " percent of steps are even\n";
}
int main()
{
    int UpperBound = 100;
    for(int i = 3; i < UpperBound; i += 2){
        PercentOfEvens(i);
    }
}
