#include<bits/stdc++.h>
using namespace std;

vector<int> BubbleSort(vector<int> &arr){

    for(int i =0; i<arr.size()-1; i++){
        
        for(int j=i+1; j<=i+1; j++){
            cout<<"i : "<<i<<"j : "<<j<<endl;
          if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
          }
        }
    }

    return arr;
}


int main(){

    vector<int> arr ={4,3,2,5,1};
    vector<int> v = BubbleSort(arr);
    for(auto i : v){
        cout<<i<<" ";
    }
    // BubbleSort(arr);

    return 0;
}