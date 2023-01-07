//Write a method that will return the Nth largest number from a data of M numbers in the most efficient way using either selection or bubble sort.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the number "<<i<<" in a array = ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int min_ind=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        swap(arr[min_ind],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    cout<<"largest no in array is "<<arr[n-1];
    
}