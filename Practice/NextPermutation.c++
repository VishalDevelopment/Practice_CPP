#include<bits/stdc++.h>
using namespace std;
// Better Solution (IT doesn't exist but for c++ stl improve it than bruteforce)
// void NextPermuation(vector<int> &arr){
//     next_permutation(arr.begin(),arr.end());
// }

void NextPermuation(vector<int> &arr){
    int index = -1;
    int n = arr.size();
    for(int i = n-2; i>=0; i++){
        if(arr[i]<arr[i+1]){
            index = i;
            break;
        }
    }

    if(index==-1){
        reverse(arr.begin(),arr.end());
    }
else{

    for(int i=n-1; i>index;i--){
        if(arr[index]<arr[i]){
            swap(arr[index],arr[i]);
            break;
        }
    }

    reverse(arr.begin()+(index+1),arr.end());

} 

}

int main(){
    vector<int> arr = {1,2,3};
    NextPermuation(arr);
    for(auto i : arr){
        cout<<i<<" ";
    }

    return 0;
}