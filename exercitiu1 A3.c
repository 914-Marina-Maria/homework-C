#include <stdio.h>
#include <string.h>

///Write a program that reverses a string (array of char) entered by the user.
void reverse(char *v)
{
    int len,i;
    char *begin,*end,c;
    len=strlen(v);
    begin=v;
    end=v+len-1;
    for(i=0;i<len/2;i++)
    {
        c=*end;
        *end=*begin;
        *begin=c;
        begin++;end--;
    }
}
int main()
{   char v[31];
    fgets(v,sizeof(v),stdin);
    reverse(v);
    printf("Reverse of entered string is \"%s\".\n", v);
    return 0;
}
