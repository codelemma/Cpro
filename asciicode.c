#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int count;
    char s[1024];
    printf("Enter the string");
    scanf("%s",s);
    char cmp[]={'0','1','2','3','4','5','6','7','8','9'};
    for(int i=0;i<10;i++)
    {
        count=0;
        for(int j=0;j<strlen(s);j++)
        {
            if(s[j]==cmp[i])
            {
                 count++;
            }
        }
        printf("%d ",count);
    }
    return 0;
}