#include<bits/stdc++.h>
using namespace std;

void sortArr(vector<int> &arr, int low , int high){
    if(low>=high) return;
    int i = 0;
   while (i<high)
   {
        if(arr[i]>arr[i+1]) {
            swap(arr[i],arr[i+1]);
       }
       i++;
   }
   
    sortArr(arr,low+1,high);
}


int main(){
    vector<int> arr = { 20,30,10,40,40};
    sortArr(arr,0,arr.size()-1);
    
    
    int largest = arr[arr.size() - 1]; 
    int secondLargest = -1;

    int i = arr.size() - 2; 
    
    while (i >= 0) {
        if (largest>arr[i] ) {  
            secondLargest = arr[i];
            break;
        }
        i--;
    }
    cout<<"Secong Largest No : "<<secondLargest;

 

  
   
    return 0;
}