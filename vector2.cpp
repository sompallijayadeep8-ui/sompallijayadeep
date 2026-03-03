#include<iostream>
using namespace std;
#include<vector>

int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
   vector<int>jay1(n),jay2(n),result(n);
    for(int i=0;i<n;i++){
        cout<<"enter first addition"<<endl;
        cin>>jay1[i];
    }
    for(int i=0;i<n;i++){
        cout<<"enter second addition:"<<endl;
        cin>>jay2[i];
    }
    for(int i=0;i<n;i++){
        result[i]=jay1[i]+jay2[i];
    }

   for(int i=0;i<=n;i++){
    cout<<"result:"<<result[i]<<endl;

}
}