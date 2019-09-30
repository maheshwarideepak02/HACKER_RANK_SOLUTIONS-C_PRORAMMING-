#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int ar[1000],n,sum=0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
       
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }   
    printf("%d",sum);
     
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

