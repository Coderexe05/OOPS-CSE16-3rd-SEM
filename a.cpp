#include<iostream>
#include<cstdarg>
using namespace std;

int sum(int count,...){
va_list arg;
va_start(arg, count);
int result  = 0;
for(int i = 0; i <count; i++){
result += va_arg(arg, int);
}
return result;
}
int main(){
cout<<sum(3,10,20,30);
return 0;
}