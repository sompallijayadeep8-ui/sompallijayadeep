#include<iostream>
using namespace std;
int main(){
int n;
cout<<"THE PROGRAM IS REVERSE A NUMBER AND CHECK PALNDROME"<<endl;
cout<<"ENTER A NUMBER"<<endl;
cin>>n;
int temp=n,rev=0;
while(temp>0){
    int digit=temp%10;
    rev=rev*10+digit;
    temp/=10;
}
if(n==rev){
   cout<<rev<<": it is palndrome"<<endl; 
}
else{
    cout<<rev<<":it is not palndrome"<<endl;
}
}