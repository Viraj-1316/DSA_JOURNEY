#include<iostream>
#include<limits.h>
int MaximumNoInArray(int arr[],int size){
    int MaxAns = INT_MIN;
    for (int i=0 ; i<n ; i++){
        if(arr[i]>MaxAns){
            MaxAns = arr[i];
        }
        return MaxAns;
    }
}
int main(){
    int arr[] = {23,33,89,52,12,56};
    int size = arr.size();
    MaximumNoInArray(arr,size);
    cout<<"the maximum no. in arry is: "<<MaxAns<<endl;
}