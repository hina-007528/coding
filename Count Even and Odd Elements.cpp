#include<iostream>
using namespace std;

void countEvenOdd(int arr[],int n,
int&even_count,int&odd_count){
    even_count=0;
    odd_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count++;
        }else{
            odd_count++;
        }
    }
}
int main(){
    int n;
    cout<<"Enter no of  elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even_count,odd_count;countEvenOdd(arr,n,even_count,odd_count);
    cout<<"Number of even elements:"<<even_count<<endl;
     cout<<"Number of odd elements:"<<odd_count<<endl;
    return 0;
}