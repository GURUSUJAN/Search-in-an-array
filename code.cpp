#include"iostream"
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ar[20];
    if(n<=20)
    {
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>=97 && ar[i]<=122)
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    }
    else
    {
        cout<<"Invalid array size"<<endl;
    }
}
