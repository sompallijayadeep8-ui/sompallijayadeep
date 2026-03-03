#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int  n;
    cout<<"it is factroul program"<<endl;
    cout<<"enter a number :";
    cin>>n;
   int  num=n,temp=n,sum=0;
    while(temp>0){
   int digit = temp%10;
   int fact =1,i;
   for(i=1;i<=digit;i++){
      fact = fact*i;
   }
   sum+=fact;
   temp/=10;
    }
     cout<<"factrol:"<<sum;







}