#include<iostream>
#include<bitset>
using namespace std;

int main(){
    bitset <10> b(200);
    cout<<b<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    b[0] = 1;
    cout<<b;
    cout<<endl;
    b.set();
    cout<<b<<endl;
    return 0;
}