
#include<bits/stdc++.h>
using namespace std;

void CoinsChange(vector<int>v, int size, int amount) {
    vector<int> arr;
    int coins = 0;

    for(int i = size - 1; i >= 0; i--) {
        if(amount >= v[i]) {

            int temp = amount / v[i];
            amount -= v[i] * temp;

            for(int j = 0; j < temp; j++)
                arr.push_back(v[i]);

            coins += temp;
        }
    }

    cout << "Use Coins : ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl << "Total Coins : " << coins << endl;
}

int main()
{
    int n;
    vector<int>v;
    cout<<"Size of array : ";
    cin>>n;

    cout<<"Input Coins : ";
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        v.push_back(value);
    }

    int amount;
    cout<<"Input Amount : ";
    cin>>amount;
    sort(v.begin(),v.end());

    CoinsChange(v,n,amount);
    return 0;
}
