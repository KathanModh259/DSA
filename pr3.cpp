#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,80};

    int mid1,mid2,key,low=0,a,f=0;
    int len=7;
    cout<<"Enter the key: ";
    cin>>key;

    while(low<=len)
    {

    mid1 = low + (len-low)/3;
    mid2 = len + (len-low)/3;

        if(arr[mid1]==key)
        {
       a=mid1;
       f++;
       break;
        }
         if(arr[mid2]==key)
        {

             a=mid2;
             f++;
             break;

        }
        if(key<arr[mid1])
        {
        len= mid1-1;

        }
          if(key>arr[mid2])
        {
            low= mid2+1;
        }
          if(key>arr[mid1] && key<arr[mid2])
        {
            low=mid1+1;
            len=mid2-1;
        }


    }
    if(f==0)
    {
        cout<<"Value is not present";

    }
    else
    {
        cout<<"The index is"<<a;
    }

}


