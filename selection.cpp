#include<iostream>
using namespace std;
#define MAX 10
void selection_sort(int a[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        j=i-1;
        t=a[i];
        while(j>=0&&a[j]>t)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
}   
int main()
{
    int a[MAX];
    int n,t,i,j,k,l,f=0;
    cout<<"enter the no of test cases"<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"enter the no of elements in the array"<<endl;
        cin>>n;
        f=0;
        cout<<"enter the elements"<<endl;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        selection_sort(a,n);
        cout<<"array after sorting:";
        for(j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
        }
    }
    return 0;
}
