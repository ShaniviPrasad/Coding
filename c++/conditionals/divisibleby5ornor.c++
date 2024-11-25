#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    if (x>0)
        if (x%5==0) cout<<"number is divisible by 5"; 
        else cout<<"number is not divisible by 5 ";
    else cout<<"number is not positive integer";
    
}