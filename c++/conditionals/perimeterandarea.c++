#include<iostream>
using namespace std;
int main(){
    float l , b , area, perimeter;
    cout<<"enter the length of rectangle";
    cin>> l;
    cout<<"enter the breadth of rectangle";
    cin>> b;
    area=l*b;
    perimeter= 2*(l+b);
    if(area>perimeter){
        cout<<"area is greater than perimeter";
    }
    else if (area<perimeter)
    {
       cout <<"area is smaller than perimeter";
    }
    else{
        cout<<"area is neither greater nor smaller than perimeter";
    }
}