#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
if(n%2==0){
  cout<<"even\n";
}
else{
    cout<<"odd\n";
}
if(n>0){
 cout<<"postive\n";

}
else if(n<0){

    cout<<"negtive\n";
}
else{
    cout<<"zero\n";
}
int temp=abs(n);
int sum=0,rev=0,count=0;
while(temp>0){
 int digit=temp%10;
 sum+=digit;
 temp=temp/10;
 rev=rev*10+digit;
 count+1;
}
cout<<"the sum of two numbers:"<<sum<<endl;
cout<<"revers of a number:"<<rev;







}