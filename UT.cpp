#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0,x=0,t=1;
    cin>>n;
    int a[n];
    int result[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(i=0;i<n;i++)
    {
        x=a[i];
        if(x==0)
            result[i]=1;
        
        else
        {
            for(j=1;j<=x;j++)
            {
                if(j%2!=0)
                {
                    t=t*2;
                }
                else
                {
                    t=t+1;
                }
            }
            result[i]=t;
            t=1;
        }    
    }
    for(i=0;i<n;i++)
    cout<<result[i]<<endl;    
}
