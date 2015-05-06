#include <stdio.h>
int main()
{
    char c = 'A';
    switch (c) {
        case 65:
            printf("%d\n",1);
            break;
        case 'C':
            printf("%d\n",2);
        default:
            break;
    }
    char b = 123;
    printf("%d\n",b);
    
    unsigned long long a = 6545745774345346353LL;
    printf("%lld\n",a);
}