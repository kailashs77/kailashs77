#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    while(n--){
        float x,y,z;
        cin>>x>>y>>z;
        cout << (((x + y) / 2) > z ? "YES" : "NO") << '\n';
    }
    return 0;
}