#include<iostream>
using namespace std;

template<class T>
int binarysearch(const T*,int,const T& x);

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<binarysearch(a,10,7);
    system("pause");
}

template<class T>
int binarysearch(const T* arr,int size,const T& x)
{
    int min=0,max=size-1,mid;
    while (min<=max)
    {
        mid=(min+max)/2;
        if(x==arr[mid]) return mid;
        if(x<arr[mid]) max=mid-1;
        else min=mid+1;
    }
    return -2;
    
}