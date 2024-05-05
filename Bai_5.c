#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool palindrome_check(char s[]);

int main()
{
    char s[100];
    printf("Nhap chuoi: ");
    fgets(s, 100, stdin);
     // Removing the newline character if it exists
    if (s[strlen(s) - 1] == '\n') {
        s[strlen(s) - 1] = '\0';
    }
    if(palindrome_check(s) == 1){
        printf("La chuoi palindrome");
    }else{
        printf("Khong la chuoi palindrome");
    }
}

bool palindrome_check(char s[])
{
    int low = 0;
    int high = strlen(s) - 1;
    while(low < high){
        if(s[low] != s[high]){
            return 0;
        }
        low++; //increase the index
        high--; //decrease the index
    }
    return 1;
}
