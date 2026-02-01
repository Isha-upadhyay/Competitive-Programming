#include<bits/stdc++.h>
using namespace std;

int main(){
  long long N, K;
  cin >> N >> K;
  
  long long low = 0;
  long long high = 200000, ans = 0;
  
  while(low <= high){
    long long mid = (low + high)/2;
    
    long long sum = (mid + 1) * (2 * N + mid ) / 2;
    
    if(sum >= K){
      ans = mid;
      high = mid - 1;
    }else{
      low = mid + 1;
    }
  }
  cout << ans;
}
