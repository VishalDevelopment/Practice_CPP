#include<bits/stdc++.h>
using namespace std;

 void BubbleSort(vector<int> &arr){
    for(int i = 0; i<arr.size()-1; i++){
        int sp = false;
        for(int j = 0; j<arr.size()-1-i; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            sp = true;
            }
        }
        if(sp==false){
            break;
        }
    }
}

void SelectionSort(vector<int> &arr){
    for(int i = 0 ; i<arr.size()-1; i++){
        int mini = i;
        for(int j = i+1; j<arr.size(); j++ ){
            if(arr[mini]>arr[j]){
                mini = j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}
void InsertionSort(vector<int> &arr){
    for(int i = 0 ; i<arr.size()-1; i++){
        int prev = i+1;
        while(prev>0 && arr[prev]<arr[prev-1]){
            swap(arr[prev-1],arr[prev]);
            prev--;
        }
    }
}
int main(){
    vector<int> arr ={3,2,1,5};
   BubbleSort(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }
    
    return 0;
}