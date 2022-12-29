#include <iostream>
using namespace std;

int main()
{
    string p;
    cout<<"Message: ";
    cin>>p;
    char c[p.length()];
    for(int i = 0 ; i < p.length() ; i++)
    {
        c[i] = (int(p[i])+3);
    }
    cout<<"The encrypted message is :";
    for(int i = 0 ; i < p.length() ; i++)
    {
        cout<<c[i];
    }
    cout<<"\nThe decrypted message is :";
    for(int i = 0 ; i < p.length() ; i++)
    {
        p[i] = (int(c[i])-3);
    }
    for(int i = 0 ; i < p.length() ; i++)
    {
        cout<<p[i];
    }
    return 0;
}
