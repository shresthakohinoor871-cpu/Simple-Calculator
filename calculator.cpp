#include<iostream>
using namespace std;
int main(){
    double num1, num2;
    char op;

    //ask the user to enter first number
    cout << "Enter first number: ";
    cin>>num1;

    //ask the user to enter an operator
    cout<<"Enter an operator(+,-,*,/): ";
    cin>>op;

    //ask the user to enter second number
    cout<<"Enter second number: ";
    cin>>num2;

    //perform the calculation
    switch(op){
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout<<"Result = "<< num1 -num2;
            break;

        case '*':
            cout<<"Result = "<< num1 * num2;
            break;

        case '/':
            if(num2!=0.0){
                cout<<"Result = "<< num1 / num2;}
            else{
                cout<<"Division by zero situation!";
            }
            break;

        default:
        cout<<"Invalid operator!";
    }
    cout <<endl;
    return 0;
}