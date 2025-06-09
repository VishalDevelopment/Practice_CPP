#include<bits/stdc++.h>
using namespace std;

// Optimal Sol
void nby3(vector<int> arr){
    int ele1 = 0; int ele2 = 0;
    int freq1 = 0; int freq2 = 0;
    for(int i = 0; i<arr.size(); i++){
        if(freq1==0 && ele1!=arr[i]){
            freq1=1;
            ele1 = arr[i];
        }
        else if(freq2==0 && ele2 !=arr[i]){
            freq2=1;
            ele2 = arr[i];
        }
        else if(ele1==arr[i]){
            freq1++;
        }
        else if(ele2 == arr[i]){
            freq2++;
        }
        else{
            freq1--;
            freq2--;
        }
    }
    freq1 =0 , freq2=0;
    vector<int> vec;
    for(auto i : arr){
        if(ele1 == i) freq1++;
        if(ele2== i) freq2++;
    }
    if (freq1 > arr.size() / 3) cout << ele1 << " ";
    if (freq2 > arr.size() / 3) cout << ele2 << " ";
}

int main(){
    vector<int> vec = {3,2,3};
    nby3(vec);
    return 0;
}