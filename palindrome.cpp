#include <iostream>
using namespace std;
    int palindrome(int a){
        int rev = 0;
        while(a != 0){
        int r = a % 10;
         rev=rev*10+r;
        a=a/10;
        }
        return rev;
    }               
int main()
{
    int n;
    cout<<"enter a two digit or three digit number :";
    cin>>n;
    cout<<"\n the revrsed number is "<<palindrome(n)<<endl;
    if(palindrome(n) == n){
        cout<<"the numer is a palindrome number";
    }
    return 0;
}