#include<bits/stdc++.h>
#include <vector>
using namespace std;

void minheapify(int arr[],int ,int);
void minheap (int arr1[],int start,int end){
    for(int i=(end)/2;i>=start;i--){
        minheapify(arr1,i,end);
    }
}
void minheapify(int arr2[],int f,int size){
    int min=f,l=f*2,r=f*2+1,t;
    if(l<=size && arr2[l]<arr2[min]) { min=l;}
    if(r<=size && arr2[r]<arr2[min]) {min=r;}
    if(f!=min){
        t=arr2[f];
        arr2[f]=arr2[min];
        arr2[min]=t;
        minheapify(arr2,min,size);
    }
}
void Maxheapify(int arr4[],int f1,int size1);
void Maxheap (int arr3[],int start1,int end1){
    for(int i=(end1)/2;i>=start1;i--){
        Maxheapify(arr3,i,end1);
    }
}
void Maxheapify(int arr4[],int f1,int size1){
    int Max=f1,l=f1*2,r=f1*2+1,t;
    if(l<=size1 && arr4[l]>arr4[Max]) { Max=l;}
    if(r<=size1 && arr4[r]>arr4[Max]) {Max=r;}
    if(f1!=Max){
        t=arr4[f1];
        arr4[f1]=arr4[Max];
        arr4[Max]=t;
        Maxheapify(arr4,Max,size1);
    }
}
void level_ordered(int arr[] ,int size){
          int flag=true;
          int i=2,k,m=1,count=0;
          cout<<"Level ordered travrsal of array is : "<<endl;
          while(flag){
              cout<<"Level --> "<<count<<" : ";
              for(k=m;k<i && k<size;k++){
                cout<<arr[k]<<" ";
              }
              cout<<endl;
              m=k;
              count++;
              if(i>size) flag=false;
              i=i+pow(2,count);
              
          }
}
void deleteRoot(int arr[], int& n)
{
    cout<<"Here minimum element(root) is : "<<arr[1]<<endl;
	int lastElement = arr[n];
	arr[1] = lastElement;
	n = n - 1;
	minheapify(arr, 1,n);
}
void deleteRoot1(int arr[], int& n)
{
    cout<<"Here maximum element(root) is : "<<arr[1]<<endl;
	int lastElement = arr[n];
	arr[1] = lastElement;
	n = n - 1;
	Maxheapify(arr, 1,n);
}
int main(){
    int n;
    cout<<"Enter the size of min heap"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"Enter the elements in array which you want Minheapify : "<<endl;
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
        // arr1[i]=arr[i];
    }
    cout<<endl;
    minheap(arr,1,n+1);
    cout<<"Min_Heap is : "<<endl;
    for(int i=1;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    deleteRoot(arr,(n));
    cout<<"Array after delation of minimum (root) element is : "<<endl;
    for(int i=1;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int brr[n+1];
    for(int i=1;i<n+1;i++){
        brr[i]=arr[i];
    }
    level_ordered(brr,n+1);


    cout<<"********MAX HEAP*********"<<endl;
    // int n1;
    // cout<<"Enter the size of max heap"<<endl;
    // cin>>n1;
    // int arr1[n1+1];
    // cout<<"Enter the elements in array which you want Minheapify : "<<endl;
    // for(int i=1;i<n1+1;i++){
    //     cin>>arr1[i];
    //     // arr1[i]=arr[i];
    // }
    Maxheap(arr,1,n);
    cout<<"Max_Heap is : "<<endl;
    for(int i=1;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    deleteRoot1(arr,(n));
    cout<<"Array after delation of maximum (root) element is : "<<endl;
    for(int i=1;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int brr1[n];
    for(int i=1;i<n+1;i++){
        brr1[i]=arr[i];
    }
    level_ordered(brr1,n+1);
    return 0;
}