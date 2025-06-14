#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int first(vector<int> arr, int n) {
    int ans = -1;
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == n) {
            ans = mid;
            high = mid - 1; // go left
        } else if (arr[mid] < n) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int last(vector<int> arr, int n) {
    int ans = -1;
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == n) {
            ans = mid;
            low = mid + 1; // go right
        } else if (arr[mid] < n) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int count_occurrence(vector<int> arr, int n) {
    int f = first(arr, n);
    int l = last(arr, n);
    if (f == -1 || l == -1) return 0; // element not found
    return (l - f + 1);
}

int main(){

      vector<int> arr =  {2, 4, 6, 8, 8, 8, 11, 13};
   int  x = 8;
    int ans = count_occurrence(arr, x);
    cout << "The number of occurrences is: "<<ans;
}