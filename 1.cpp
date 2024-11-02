#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        int count[101] = {0};
        int flag = 0;
        for(int j = 0; j <n; j++){
            int len;
            cin>>len;
            count[len]++;
        }
        for(int j = 0; j < 100; j++){
            if(count[j] >= 3){
                cout<<"yes"<<endl;
                cout<<j * 3<<endl;
                flag = 1;
                break;
            }
        }
        if(flag){
            break;
        }
        cout<<"no"<<endl;
    }
}