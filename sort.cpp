#include<iostream>
using namespace std;
int main(){
    int arr[6]={0,0,2,0,1,1};
    int size=6;
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            cnt0++;
        }
        else if(arr[i]==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
int j=0;
    while(cnt0--){
arr[j]=0;
j++;
    }
    while(cnt1--){
        arr[j]=1;
        j++;
    }
    while(cnt2--){
        arr[j]=2;
        j++;
    }
    // for(int j=0;j<size;j++){
    //     cout<<arr[j];
    // }
}
