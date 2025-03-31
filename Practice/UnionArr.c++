#include<bits/stdc++.h>
using namespace std;

vector<int> UnionArr(vector<int> a,vector<int> b){
  int j=0;
  int i =0;
  vector<int> temp;
  while (i < a.size() && j < b.size()) {
    if (a[i] <= b[j]) {
        if (temp.empty() || temp.back() != a[i]) {  
            temp.emplace_back(a[i]);
        }
        i++;  
    } else {
        if (temp.empty() || temp.back() != b[j]) {  
            temp.emplace_back(b[j]);
        }
        j++; 
    }
}

while (i<a.size()){
    temp.emplace_back(a[i]);
    i++;
}
while (j<b.size())
{
    temp.emplace_back(b[j]);
    j++;
}


  

   return temp;
}



int main(){
    vector<int>a= {-7, 8};
    vector<int> b= {1, 2, 3, 6, 7};

    vector<int> set = UnionArr(a,b);
    for(auto i : set){
        cout<<i<<" ";
    }


    return 0;
}