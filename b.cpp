#include<iostream>
#include<cstdarg>
using namespace std;

int max(int size,...){
va_list arg;
va_start(arg, size);
int result  = 0;
for(int i = 0; i <size; i++){
result += va_arg(arg, int);
}
return result;
}
int main(){
cout<<max(12,10);
return 0;
}