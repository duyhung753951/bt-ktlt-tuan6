#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void takeName(char s[]);

int main()
{
    char s[100];
    printf("Nhap chuoi: ");
    fgets(s, 100, stdin);
    takeName(s);
}

void takeName(char s[])
{
    char v[10];
    int i, j = 0;
    int length = strlen(s) - 1;
    for(i = length; i > 0; length--){
        if(s[length] == ' '){
            break;
        }
        v[j] = s[length];
        j++;
    }
    printf("%s", strrev(v));
}
