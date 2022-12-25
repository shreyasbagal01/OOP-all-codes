#include<iostream>
using namespace std;
int main()
{
  int num1,num2;
  char op;
  cout<<"Enter the value for Num1,Num2 :-"<<endl;
  cin>>num1>>num2;
  cout<<"The Operator for '+','-','/','*' :-"<<endl;
  cin>>op;

  switch(op)
  {  
    case '+' :
             cout<<"Addition :-"<<num1+num2;
             break;
    case '-' :
             cout<<"Subtractin :-"<<num1-num2;
             break;
    case '*' :
             cout<<"Multiplication :-"<<num1*num2;
             break;
    case '/' :
             cout<<"Division :-"<<num1/num2;
             break;
    default :
            cout<<"The Operator not from this TRY AGAIN..."<<endl;
            break;
   }
return 0;
}
