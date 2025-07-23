
#include<bits/stdc++.h>
using namespace std;

int Fibo(int n){

if(n==0||n==1){
    return n;
}

else{

return Fibo(n-1)+Fibo(n-2);

}
}

int main(){

int n;
cout<<"Input Number : ";

cin>>n;
cout<<endl<<"Fibonacci Series : ";

for(int i=0;i<=n;i++){
    cout<<Fibo(i)<<" ";
}
return 0;
}
