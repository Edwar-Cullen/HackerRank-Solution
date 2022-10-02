#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int b;cin>>b;
    int w;cin>>w;
    int bc;cin>>bc;
    int wc;cin>>wc;
    int z;cin>>z;
    int cost;
    int bmin = min(bc, wc + z);
    int wmin = min(wc , bc + z);
    cost = b*bmin + w*wmin;
    cout<<cost;
    return 0;
}