#include<iostream>
using namespace std;

class sort{
    public : int n,a[25],i,j,temp;
            
    
    void bubble_sort(){
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
     }
    }
}t;

int main(){
    int i;
    cout<<"\nEnter the number of elements: ";
    cin>>t.n;
    cout<<"\nEnter "<<t.n<<" elements: ";
    for(i=0;i<t.n;i++)
     cin>>t.a[i];
    t.bubble_sort();
    cout<<"\nSorted array is: ";
    for(i=0;i<t.n;i++)
     cout<<t.a[i]<<" ";
    
}