#include<iostream>
using namespace std;

void decimalToBinary(int n){
    int binary[32];
    int i=0;
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    cout<<"Binary equivalent:";
    for(int j=i-1;j>=0;j--)
    cout<<binary[j];
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter a decimal number:";
    cin>>n;
decimalToBinary(n);
return 0;
}