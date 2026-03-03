#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
int mrand{};
size_t count{6};
int max{6};
int min{1};
cout<<"the maximum randum number:"<<RAND_MAX<<endl;
srand(time(nullptr));

for(size_t i{1};i<=count;i++){
mrand=rand()%(max-min+1)+min;
cout<<mrand<<endl;
}

}