#include <bits/stdc++.h>
using namespace std;

void binarysearch(int arr[],int l,int r,int k){
    if(r>=l){
        int mid= (l+ r )/2;

        if(arr[mid]==k){
            cout<<"YES"<<" at"<<mid;
        }
        else if (arr[mid]>k){
            binarysearch(arr,l,mid-1,k);
        }
        else if(arr[mid]<k){
            binarysearch(arr,mid+1,r,k);
        }
        else
        {
            cout<<"NOT present";
        }
    }
    else{
        cout<<"NOT present";
    }


}

int main() {
    cout<<"enter any number n"<<endl;
    int n;
    cin>>n;
    cout<<"enter the sorted array of size n"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"element to find"<<endl;
    int k;
    cin>>k;
    binarysearch(arr,0,n-1,k);
    return 0;
}
