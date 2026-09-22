#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    int rollnumber;
    string name;
    void getData(){
        cin>>rollnumber>>name;
    }
    void display(){
        cout<<rollnumber<<" "<<name<<endl;
    }
};

int main(){
    student s[3];
    cout<<"Enter Details";
    for(int i=0; i<3; i++){
        s[i].getData();
    }
    return 0;
}