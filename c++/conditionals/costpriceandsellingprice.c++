#include<iostream>
using namespace std;
int main(){
    int cp,sp,p,l; cout<<"enter the cost price:"<<endl; cin>>cp;
    cout<<"enter the selling price:"<<endl; cin>>sp;
    if(sp>cp){ p=sp-cp; cout<<"profit:"<< p; 
    }
    else if (cp>sp){
        l=cp-sp;
        cout<<"profit:"<< p; 
    }
    else // if (cp==sp)
    {
        cout<<"neither profit nor loss";
    }
}
