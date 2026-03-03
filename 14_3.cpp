#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter a number"<<endl;
  cin>>n;
if(n<=1){
    cout<<n;
    return 0;
}
  int num1=0,num2=1,current=0;
  for(int i=2;i<=n;i++){
    current=num1+num2;
    num1=num2;
    num2=current;
  }
  cout<<"the fibbsicon series are:"<<num2<<endl; 






}