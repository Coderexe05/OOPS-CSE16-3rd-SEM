#include<iostream>
using namespace std;
class ATM
{
private:
int pin;
float balance;
public:
ATM()
{
    pin=1234;
    balance=1000000;
}
void checkbalance(){
    cout<<"Current Balance ="<<balance<<endl;
}
void depositmoney(){
    float amount;
    cout<<"Enter amount to deposit: ";
    cin>>amount;
    balance=balance+amount;
    cout<<"Money deposited successfully"<<endl;
}
void withdrawmoney(){
    float amount;
    cout<<"Enter amount to withdraw";
    cin>>amount;
    if(amount<=balance){
        balance=balance-amount;
        cout<<"Please Collect your Money"<<endl;
    }
    else{
        cout<<"Insufficient balance";
    }
}
void changepin(){
    int oldpin, newpin;
    cout<<"Enter old pin: ";
    cin>>oldpin
}
}
int main(){
    
    return 0;
}