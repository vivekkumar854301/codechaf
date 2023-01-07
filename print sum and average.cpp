//: Write java code to print n terms of the following series and also print the sum and average of the series.115, 112, 108, 103 . . .
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the n ";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"enter the number ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"sum of number is "<<sum<<endl;
    int average =sum/2;
    cout<<"average of the series is "<<average<<endl;
    
    
}