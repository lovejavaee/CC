#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

void factorial(){

    int num=0;
    unsigned result=1;
    cout<<"Please input a positive number: "<<endl;
    cin>>num;
    cout<<num;
    if (num>=0&&num<=12){
        while (num>=1)
            result*=num--;

        cout<<"! is "<<result<<endl;}
    else
        cout<<" is out of range."<<endl;
}

int main () {
    factorial();
    return 0;
}
