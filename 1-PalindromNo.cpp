//leet code *****
#include<stdio.h>
bool isPalindrome(int);
int main()
{   
    int s;
    scanf("%d",&s);
    printf("%d",isPalindrome(s));
    return 0; 
}   
bool isPalindrome(int x){
    int n1,b;
    double sum=0;
    n1=x;
    while(x!=0&&x>=0)
    {
        b=x%10;
        x=x/10;
        sum=sum*10+b;
    }
    if(sum==n1)
    {
        return true;
    }
    else{
        return false;
    }
}    
    

