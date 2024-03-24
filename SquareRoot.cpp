#include <iostream>
#include <vector>
#include <algorithm> // Include this for reverse and swap
using namespace std;

int mySqrt(int x) {
        int s = 0;
        int e= x;
        long long int mid = s+(e-s)/2;
        int ans;

        while(s<=e){
            if(mid*mid == x){
                return mid;
            } else if(mid*mid < x){
                ans = mid;
                s= mid+1;
            }else {
                e=mid-1;
            }
mid = s+(e-s)/2;

        
        }
        return ans;
    }
    int main(){
    int x = 68;
    int ans = mySqrt(x);
    cout<< "SquareRoot of x is : " << ans<<endl;
    }