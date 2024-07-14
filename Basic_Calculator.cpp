
//will use goto statements for quitting from any operation
#include <iostream>
using namespace std;
                   
int main()
{
    int op,a,b;
    cout<<"\t CALCULATOR"<<endl;
    //using numbers to get the operation type by user
    cout<<"press 1 for Addition"<<endl;
    cout<<"press 2 for substraction"<<endl;
    cout<<"press 3 for Multiplication"<<endl;
    cout<<"press 4 for Division"<<endl;
    cout<<"Press 5 to quit"<<endl;
    start:
    cout<<"enter your choice as per the above mentioned references for operations : ";
    cin>>op;
    if(op == 1){
        cout<<"\tADDITION"<<endl;
        cout<<" Enter the first number : ";
        cin>>a;
        cout<<" Enter the second number : ";
        cin>>b;
        cout<<"\tThe addition is :"<<a+b<<endl;
        goto start;
    }
    else if(op == 2){
         cout<<"\tSUBSTRACTION"<<endl;
        cout<<" Enter the first number : ";
        cin>>a;
        cout<<" Enter the second number : ";
        cin>>b;
        cout<<"\tThe substraction is :"<<a-b<<endl;
        goto start;
    }
    else if(op == 3){
         cout<<"\tMULTIPLICATION"<<endl;
        cout<<" Enter the first number : ";
        cin>>a;
        cout<<" Enter the second number : ";
        cin>>b;
        cout<<"\tThe multipliction is :"<<a*b<<endl;
        goto start;
    }
    else if(op == 4){
         cout<<"\tDIVISION"<<endl;
         cout<<"enter the larger number first"<<endl;
        cout<<" Enter the first number : ";
        cin>>a;
        cout<<" Enter the second number : ";
        cin>>b;
        cout<<"\tThe dividion is :"<<a/b<<endl;
        goto start;
    }
    else if(op == 5){
        cout<<"\t Quitting the program";
        goto end;
    }
    else{
    cout<<"\t\tNVALID_INPUT---ERROR"<<endl;
    cout<<"please enter a valid number for choice of operation";
    goto start;
    }
    end:
    return 0;
}
