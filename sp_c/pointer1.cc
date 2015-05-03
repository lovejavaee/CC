#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *p1, *p2, t;
    cout<<"input two interger values pls:";
    cin>>a>>b;
    p1 = &a;    p2 = &b;
    if (*p1 < *p2) {
        t = *p1; *p1 = *p2; *p2 = t;
    }
    cout<<"the output is :"<<a<<b<<endl;
    return 0;
}