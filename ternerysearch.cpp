#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,80}

    int mid1,mid2,key=0,low=0,a;
    int len=arr.size();

    cout<<"Enter the key: ";
    cin>>key;

    while(low<=len)
    {

    mid1 = low + (len-low)/3;
    mid2 = len + (len-low)/3;

        if(arr[mid1]==key;)
        {
        return mid1;
        }
         else if(arr[mid2]==key;)
        {

            return mid2;

        }
         else if(key<a[mid1])
        {


            len= mid1-1;
        }
         else if(key>a[mid2])
        {
            low= mid2+1;
        }
         else if(key>mid1 && key<mid2)
        {
            low=mid1+1;
            len=mid2-1;
        }
        else{
            return -1;
        }
        cout<<"The answer is "<<a;
    }





}