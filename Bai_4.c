#include<stdio.h>
#include<string.h>

void rev_str(char s[], int n, int index);

int main()
{
    char s[100];
    printf("Nhap chuoi ban dau: ");
    fgets(s, 100, stdin);
    int n = strlen(s) - 1;
    rev_str(s, n, 0);
    printf("Chuoi sau khi dao nguoc la:%s", s);
}

void rev_str(char s[], int n, int index)
{
    char temp;
    if(index >= n){
        return;
    }
    temp = s[index];
    s[index] = s[n];
    s[n] = temp;
    rev_str(s, --n, ++index);
}
