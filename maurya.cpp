#include<iostream>
#include<vector>
using namespace std;

int main(){
     int a;
    cin>>a;
    vector<int>v(a);
    for(int i=0; i<a; i++){
        cin>>v[i];
    }
    vector<int>z;
    z.push_back(v[0]);
    for(int i=1; i<a; i++){
        z.push_back(z[i-1]+v[i]);
    }
    for(int i:z){
        cout<<i<<" ";
    }
    return 0;
}