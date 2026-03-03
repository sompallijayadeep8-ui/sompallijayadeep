#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number "<<endl;
cin>>n;
int sum=0,num=0,boom=n;
 while(n>0){
 int digit=n%10;
 sum+=digit;
 num=num*10+digit;
 n=n/10;
 


 }

cout<<"sum of numbers:"<<sum<<endl;
 cout<<"reverse of a number:"<<num;
  
 if(boom==num){
    cout<<"\nstrong number";
 }
 else{
    cout<<"\nweak number";
 }
 if(boom<=1){
    cout<<"it is not prime";
    return 0;
 }
 int i;
 bool prime=true;
 for(i=2;i*i<=boom;i++){
    if(boom%i==0){
        prime=false;
        break;
    }

 }
 if(prime){
    cout<<"\nprime";
 }
 else{
    cout<<"\nnot prime";
 }
if(boom == num&&prime){
    cout<<"\nsuper number";
}
else if(boom==num){
    cout<<"\nonly palndrome";
}
else if(boom==prime){
    cout<<"\nonly prime";

}
else{
    cout<<"\nnormal num";
}


}