#include<bits/stdc++.h>
using namespace std;



int main(){
  long long N, T;
  cin >> N >> T;
  
  vector<long long> A(N);
  for(int i=0;i<N;i++) cin >> A[i];
  
  long long total = 0;
  long long curr = 0;
  
  
  for(long long a: A){
      if(curr < a){
        total += a - curr;
        curr = a + 100;
      }
    }
  
  
  if(curr < T) total += T - curr;
  cout << total;
  return 0;
}
