#include <iostream>
#include <vector>
#include <algorithm> // Include this for reverse and swap
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid] < arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;

    }
    return s;
        
    }
    int main(){
        vector<int> arr;
        arr.push_back(10);
        arr.push_back(20);
        arr.push_back(50);
        arr.push_back(30);
        arr.push_back(40);

        int peak = peakIndexInMountainArray(arr);
        cout<<peak<<endl;
        return 0;
    }