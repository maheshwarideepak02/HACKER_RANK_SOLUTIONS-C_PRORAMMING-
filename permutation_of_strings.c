#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{ int i,j,largi=-1;
//largest i
    for(i=0;i<n-1;i++)
    {
        if(strcmp(s[i],s[i+1]) < 0)
        {
            largi=i;
        }
    }
    if(largi==-1){return 0;}
    //larhestj
    int largj=0;
    for(j=n-1;j>largi;j--) 
    {
        if(strcmp(s[largi],s[j]) < 0)
        {
            largj=j;
               char  *temp;
            temp=s[largi];
            s[largi]=s[largj];
            s[largj]=temp;
            break;
            
        }
        
    }
   for(i=largi+1,j=n-1;i<=j;i++,j--)
    {   char *temp;
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    } 
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}