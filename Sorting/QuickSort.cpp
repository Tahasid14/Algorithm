
[2:29 pm, 23/07/2025] Mohammod Tahasid Alam: #include <iostream>
using namespace std;
void merge(int a[], int beg, int mid, int end)
{
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int LeftArray[n1], RightArray[n2];

    for (int i = 0; i < n1; i++){
    LeftArray[i] = a[beg + i];
    }
    for (int j = 0; j < n2; j++) {
    RightArray[j] = a[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = beg;

    while (i < n1 && j < n2)
    {
        if(LeftArray[i] <= RightArray[j])
        {
            a[k] = LeftArray[i];
            i++;
        }
        else
        {
            a[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        a[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j<n2)
    {
        a[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int beg, int end)
{
    int mid;
    if (beg < end)
    {
         mid = (beg + end) / 2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        merge(a, beg, mid, end);
    }
}
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout<<a[i]<<" ";
}

int main()
{
    int a[] = { 11, 30, 24, 7, 31, 16, 39, 41 };
    int n = sizeof(a) / sizeof(a[0]);
    cout<<"Before sorting array elements are - \n";
    printArray(a, n);
    mergeSort(a, 0, n - 1);
    cout<<"\nAfter sorting array elements are - \n";
    printArray(a, n);
    return 0;
}
[2:31 pm, 23/07/2025] Mohammod Tahasid Alam: #include<bits/stdc++.h>
using namespace std;
void qiuck_Sort(int arr[],int first,int last);
int partition(int arr[],int low,int high){
int pivot=arr[high];
int i=low;
for(int j=low;j<high;j++){
    if(pivot>=arr[j]){
      swap(arr[i],arr[j]);
      i++;
    }
}
swap(arr[i],arr[high]);
return i;
}
void quick_Sort(int arr[],int first,int last){
if(first<last){
    int n=partition(arr,first,last);
   quick_Sort(arr,first,n-1);
    quick_Sort(arr,n+1,last);
}
}
void print(int arr[],int n){
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}
int main(){
int t;
cin>>t;
int arr[t];
for(int i=0;i<t;i++)
{
  cin>>arr[i];
}
int n=sizeof(arr)/sizeof(arr[0]);
quick_Sort(arr,0,n-1);
print(arr,n);
    return 0;
}
