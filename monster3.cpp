#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"**DIVISERS OF NUMBER**"<<endl;
    cout<<"enter a number:";
    cin>>n;
    int count=0,i;
for(i=1;i*i<=n;i++){
  if(i*i==n){
    cout<<i<<" ";
    count++;
}  
  else{
    cout<<i<<" "<<n/i<<" ";
    count+=2;
  }
}
    
cout<<"\nthe divisers of a number:"<<count;


}