#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin>>s;
    while(s--){
        int x,y,z;
        cin>>x>>y>>z;
        cout<<(((1.0*z/(x*y))>0.5)?"YES":"NO")<<endl;
    }
    return 0;
}