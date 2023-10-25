/* name - Deepak
   rollno - 523110009
   group 1st 
   code-Binary Search*/

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int size, int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main (){
    int size;
    cout<<"Enter size of array:\n";
    cin>>size;
    int a[size],i;
    cout<<"Enter elements in array:\n";
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter element you want to search:";
    int key;
    cin>>key;
    cout<<binarySearch(a,size,key);

}