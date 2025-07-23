#include<bits/stdc++.h>
using namespace std;

int fiboMemo(int n,vector<int>memo){

if(n<=1){
    return n;
}

if(memo[n]!=-1){
    return memo[n];
}

memo[n]=fiboMemo(n-1,memo)+fiboMemo(n-2,memo);

return memo[n];

}

int fibonacci(int n){

vector<int>memo(n+1,-1);

return fiboMemo(n,memo);
}

int main(){

int n;
cout<<"Enter Number: ";
cin>>n;
cout<<"Fibonacci Series : ";

for(int i=0;i<=n;i++){
    cout<<fibonacci(i)<<" ";
}


return 0;
}
