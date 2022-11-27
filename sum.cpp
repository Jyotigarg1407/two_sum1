#include <iostream>
using namespace std;
int main()
{
    int  n;
    cout<<"enter size"<<endl;
    cin>>n;
    
    int a[n];
    cout<<"enter element"<<endl;
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    int target;
    cout<<"target=";
    
    cin>>target;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[i]+a[j]==target) {
                cout<<"["<<i+1<<","<<j+1<<"]";
                cout<<endl;
            }
        }
    }
    return 0;
}
