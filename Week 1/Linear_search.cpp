#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int key;
        int arr[n];
        int i=0;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        cin >> key;
        bool flag=false;
        for(i=0;i<n;i++){
            if(key==arr[i]){
                flag=true;
                break;
            }
        }
        if(!flag)
            cout<<"Not Present    "<<n+1;
        else cout<<"Present    "<<i+1;

    }
    return 0;
}
