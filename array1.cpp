#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int>jay={1,4,3,5};
    int start=0;
    int end=jay.size()-1;
    while(start<end){
        swap(jay[start], jay[end]);
        start++;
        end--;

    }
    cout<<"the reverse of numbers"<<endl;
    for(int i=0;i<jay.size();i++){
        cout<<jay[i]<<" ";

    }
    return 0;


    
}