//B. Bobritto Bandito
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int x = min(0, l + (n - m));
        x = max(x, -m);
        int r_x = x + m;
        cout << x << " " << r_x << endl;
    }
}