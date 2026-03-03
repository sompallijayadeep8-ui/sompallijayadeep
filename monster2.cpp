#include<iostream>
using namespace std;

int main(){

int n;
cout<<"THE PRIME NUMBERS PROGRAM"<<endl;
cout<<"ENTER A NUMBER :";
cin>>n;
if(n<=2){
  cout<<"it not prime";
  return 0;

}
int i;
bool isprim=true;
for(i=2;i*i<=n;i++){
  if(n%i==0)
{
    isprim=false;
    break;
}
}
if(isprim==true)
  cout<<"prime";
  else
  cout<<"not prime";


return 0;



}