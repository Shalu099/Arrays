#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={3,5,4,2,1};
    int ans=INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]<ans)
        ans=arr[i];
    }
    cout<<ans;
    return 0;
}