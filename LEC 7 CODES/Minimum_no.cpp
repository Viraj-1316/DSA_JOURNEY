#include<iostream>
#include<limits.h>
using namespace std;
void MINIMUM_NUMBER(int arr[],int size){
    int MinAns = INT_MAX;
    for(int i=0 ; i<size; i++){
        MinAns=min(arr[i],MinAns);
    }
    cout<< "the min no. is :"<<MinAns<<endl;

}
int main(){
    int arr[5] = {20,5,6,5,2};
    int size = 5;
    MINIMUM_NUMBER(arr,size);
}