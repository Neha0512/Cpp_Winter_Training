#include<iostream>
using namespace std;
int main()
{
    int n,k,num;
    cin>> n>> k>> num;
    int arr[n];

    for(int i=0; i<n;i++)
    {
        cin>> arr[i];
    }
    int siz= sizeof(arr)/sizeof(int);
    for(int i=k;i<siz;i++)
    {
        arr[k+1]=arr[k];
    }
    arr[k]= num;
    for(int i=0; i<n;i++)
    {
        cout<< arr[i];
    }


}

