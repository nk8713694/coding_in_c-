#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
    int x=89,y=108;
   // cin>>x>>y;
    int num = x^y;
    cout<<"base xor is "<<num<<endl;
    int msb=0;
    while(num!=0) {
        num=num>>1;
        cout<<"num in while loop"<<num<<endl;
        msb++;
    }
    cout<<"msb is"<<msb<<endl;
    int result = 1;
    while(msb--) {
        result=result<<1;
        cout<<"result is"<<result<<endl;
    }
   // cout<<result-1;

    return 0;
}
