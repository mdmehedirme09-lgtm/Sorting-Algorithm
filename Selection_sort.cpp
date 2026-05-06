#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                swap(arr[j],arr[smallest]);
            }
        }
    }
}

int main(){
    vector<int>arr={1,2,3,12,35,4,6,78,98};
    selection_sort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
