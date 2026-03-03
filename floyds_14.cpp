#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"FLOYDS TRYANGLE"<<endl;
  cout<<"ENTER A NUMBER"<<endl;
  cin>>n;
  int i,j,num=1;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        cout<<num<<" ";
        num++;
    }
    cout<<endl;
  }


 return 0;
}