#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"GCD AND LCM PROGRAMMING PROJECT"<<endl;
  cout<<"enter values of a and b:";
  cin>>a;
  cin>>b;
  int x=a,y=b;
  while(y!=0){
    int reminder=x%y;
    x=y;
    y=reminder;
  }
  int gcd=x;
  int lcm=(a*b)/gcd;
  cout<<"the gcd is:"<<gcd<<endl;
  cout<<"the lcm is:"<<lcm<<endl;



return 0;

}