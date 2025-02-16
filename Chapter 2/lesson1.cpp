
#include<iostream>
using namespace std;

void EvenOdd(){
    int n =11;
if (n%5==0)
{
    cout<<"Divisible by 5";
}
else{
cout<<"Not Divisible by 5";
    
}
}


void AbsoluteValue(){
    int n ;
    cin>>n;

    if (n>0)
    {
        cout<<"n : "<<n;
    }
    else{
        cout<<"n : "<<-(n);
    }
    
}

void SellerProfitOrLoss(){
float cost,sell,result;

 
cout<<"cost : ";
cin>>cost;
cout<<"selling price : ";
cin>>sell;

result = cost - sell;
cout<<" C : "<<result<<endl;
if (result<0)
{
    cout<<"Seller Made profit of "<<result;
}
else{
    cout<<"Seller Made loss of "<<result;

}

}

void CalculateRectangle(){
    float len ,btdh;

    cin>>len>>btdh;

    float paramter = 2*(len+btdh);
    float area = len*btdh;

    if (area>paramter)
    {
        cout<<"Area greater than parameter";
    }
    
    else{
        cout<<"parameter greater than area";
    }

}

void SwitchLearn(){

    int n;
    switch (n)
    {
    case 10:
        cout<<"n : "<<10;
        break;
        case 11:
        cout<<"n : "<<11;
        break;
        case 12:
        cout<<"n : "<<12;
        break;
        case 13:
        cout<<"n : "<<13;
        break;
    
    default:
        cout<<"n : no idea";
        break;
    }

}

int main(){

    int a =10 , b=20;

    int max_value = ((a + b)>0) ? a : b;


    return 0;
}