#include<bits/stdc++.h>
using namespace std;

int ConsectiveNo(vector<int> &arr){
   int counter = 0;
   int appears = 0;
   for (int i = 0; i < arr.size(); i++) {
    if (arr[i] != 0) {
        counter++;
        if (counter > appears) {  
            appears = counter;
        }
    } else {
        counter = 0;  
    }
}
    return appears;
}

int main(){
    vector<int> vec = {1, 1, 1, 0, 1, 1, 1, 1}
    ;
    cout<<"No : "<<ConsectiveNo(vec);
}