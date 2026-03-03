#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n-1;i++)
        cin>>arr[i];
     int  totalsum=n*(n+1)/2;
     int subtotal=0;
     for(int i=0;i<n-1;i++)
        subtotal+=arr[i];
     
        cout<<"the missing number is:"<<totalsum-subtotal;
    

    
}