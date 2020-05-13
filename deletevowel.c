#include<stdio.h>
#include<string.h>
int main()
{
    char s[200],b[100];
    printf("Enter the input string");
    scanf("%s",s);
    
    int i=0,j=0;
    while(s[i]!='\0')
    {
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            i++;
        }
        else{
            b[j]=s[i];
            j++;
            i++;
        }
    }
    b[j]='\0';
    printf("The output string is %s",b);
	
	
	
	return 0;
}
