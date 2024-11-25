#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    if (x>0)
        if (x%2==0) cout<<"number is even"; 
        else cout<<"number is odd";
    else cout<<"number is not positive integer";
    
}