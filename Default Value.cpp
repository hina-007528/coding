#include<iostream>

using namespace std; 
 int product(int a,int b){
    return a*b;
}
float moneyReceived(int currentMoney,float factor=1.04)
// compalsory(crrent money),Default(factor);
{
    return currentMoney*factor;
}
int strlen(const char*p){};
int main(){
    int a,b;
    cout<<"Enter the value of a&b"<<endl;
    cin>>a>>b;
    cout<<"The product of a&b is"<<product(a,b)<<endl;
    int money=100000;
    cout<<"if you have"<<money<<"Rs in your bank account,you will recieve"<<moneyReceived(money)<<"Rs after one year"
    <<endl;
    cout<<"FOR VIP:if you have"<<money<<"Rs in your bank account,you will recieve"<<moneyReceived(money,1.1)<<"Rs after one year"
    <<endl;
     return 0;
}