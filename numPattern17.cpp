#include<iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; i++)
    {
        int ans = 1,k=i;
        for (int j = 1; j <= 5; j++)
        {
            if (j>=i)
            {
                cout<<ans;
                ans++;
            }
            else
            {
                cout<<k;
                k--;
            }
        }
        cout<<endl;
    }
    
    return 0;
}