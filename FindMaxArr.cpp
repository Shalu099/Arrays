#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int arr[5]={3,4,5,2,1};
    //cout<<sizeof(arr)/sizeof(arr[0]);
    
    int ans=INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]>ans)
        ans=arr[i];
    }
    cout<<ans;
    
    return 0;
}
