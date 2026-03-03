#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    // count digits
    int count=0,temp=n;
    while( temp>0){
      temp= temp/10;
      count++;
    }
    cout<<"total numbers are:"<<count<<endl;
    //rev
    int rev=0;
    while(n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    cout<<"rev of these numbers :"<<rev;
    //prime numbers
    if(rev<=1){
        cout<<"it not prime";
        return 0;
    }
    bool prime=true;
    int i;
    for(i=2;i*i<=rev;i++){
        if(rev%i==0){
            prime=false;
            break;
        }
        
    }
    if(prime){
        cout<<"\nprime"<<endl;
    }
    else{
        cout<<"\nnot prime"<<endl;
    }







}