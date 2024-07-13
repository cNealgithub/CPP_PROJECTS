//this code is intended to demonstarate the concwpt of function overloading by usinh volume multiple times as function name
#include <iostream>
using namespace std;
//returns volume of cube
int volume(int a){
return (a*a*a);
}   
//returns volume of cylinder
int volume(float r,float h){
    return(3.14 * r * r *h);
} 
//returns volume of rectangle
int volume(int l,int b,int h){
    return(l * b * h);
}              
int main()
{
    cout<<"the volume of cube with sides 4 ="<<volume(4)<<endl;
    cout<<"the volume of cylinder with radius 2.3 and height 5 ="<<volume(2.3,5)<<endl;
    cout<<"the volume of rectangle with length 4,breadth 8,height 5 ="<<volume(4,8,5);
    return 0;
}
