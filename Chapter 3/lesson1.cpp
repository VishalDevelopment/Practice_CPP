
#include <iostream>
using namespace std;

void Q1()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
}
void Q2()
{

    int n = 2;
    while (n < 21)
    {
        if (n % 2 == 0)
        {
            cout << n << endl;
        }
        n++;
    }
}

void Q3()
{

    int n = 1;
    do
    {
        cout << "Hello C++!" << endl;
        n++;
    } while (n <= 5);
}

void Q4()
{

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }
}
void Q5()
{

    int n = 10;
    while (n >= 1)
    {
        if (n == 5)
        {
            break;
        }
        cout << n << endl;

        n--;
    }
}

void Q6()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1;j<=i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void Q7(){
    for (int i = 1; i <=5; i++)
    {
        cout<<"table of"<<i;
        for(int j =1; j<=10; j++){
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
        }
        
    }
    
}

void Q8(int n){
    int num = n;
    int rem = 0;
    int sum = 0;
    int temp =0;
    while (num>0)
    {
        rem =0;
        cout<<"loading"<<endl;
        temp = num % 10;
        rem = rem*10+temp;
        sum = sum+rem;
        num = num/10;
    }
    cout<< "sum of digit are "<<sum;
    
}

void Q9(int n){
    int num =n;
    int count = 0;

    for(int i =1; i<=n; i++){
        if (num%i==0)
        {
            count++;
        }
    }
   

    if (count>2)
    {
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }
}

void Q10(int n ){
    int num = n;
    int rem = 0;
    int rev = 0;
    while (num>0)
    {
        num = num%10;
        rem = rem*10+num ;
        num/=10;
    }
    cout<<"Reverse : "<<rem;
}
int main()
{

    // Q1();
    // Q2();
    // Q3();
    // Q4();
    // Q5();
    // Q6();
    // Q7();
    // Q8(22);
    // Q9(12);
    Q10(4321);
    return 0;
}
