#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number:";
cin>>n;
int count=0,orginal=n;
while(n>0){
    count++;
    n=n/10;  
}
 n=orginal;
 int sum=0;
while(n>0){
    int digit=n%10;
    int power=1;
    for(int i=1;i<=count;i++){
        power*=digit;
    }
    sum+=power;
    n=n/10;
}
if(sum==orginal){
    cout<<"amstrong";
}
else{
    cout<<"it s not";
}


}