#include <stdio.h>
#include<string.h>
int main()
{
    char a[30],i;
    scanf("%s",&a);
    for(i=strlen(a)-1;i>=0;i--) printf("%c",a[i]);
    return 0;
}
