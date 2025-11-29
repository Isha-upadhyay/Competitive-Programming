#include<bits/stdc++.h>
using namespace std;



int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;

    while(t--){
        int n , y, r;
        cin >> n >> y >> r;

        int suspend = r + y / 2;
         suspend = min(suspend, n);
    
      cout << suspend << "\n";

    }
    return 0;

}
