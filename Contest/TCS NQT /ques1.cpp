// 🔶 Problem Kya Bol Raha Hai?

// Hume ek sorted array ya ek pair-pattern maintain karne wali array di hui hoti hai jisme:

// Har element even number of times (i.e., 2–2 ki pair me) aata hai

// Sirf ek element aisa hoga jo odd number of times (i.e., 1 ya 3 times) aata hai

// Hume usi odd-occurring element ko O(log n) time me find karna hai

// ⚠️ Validity Conditions

// Har element pair me hona chahiye
// Example: 2 3 2 ❌ (3 ka pair nahi)

// Koi element 2 se zyada consecutive times nahi aa sakta
// Example: 1 1 2 2 2 3 3 ❌ (2 three times aya)

// Ek hi element odd times aayega (i.e., single element)


//************* Solution ************

#include<bits/stdc++.h>
using namespace std;

int findOdd(vector<int>& arr){
    int left = 0, right = arr.size() - 1;
    
    while(left < right){
        int mid = left + (right - left) / 2;
        
        if(mid % 2 == 1){
            mid--;
        }
        
        if(arr[mid] == arr[mid+1]){
            left = mid + 2;
        }else{
            right = mid;
        }
    }
    return arr[left];
    
}

int main(){
    int n ;
    cin >> n;
    
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout << findOdd(arr);
    return 0;
}
