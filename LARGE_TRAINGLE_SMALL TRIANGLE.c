<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) { triangle temp;
	float area,temp1,ar[n],p;int i,j;
    for(i=0;i<n;i++)
    {
        p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        area=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        ar[i]=area;
    } 
    for(j=1;j<n;j++)
    {
        for(i=0;i<n-j;i++)
        {
            if(ar[i]>ar[i+1])
            {
                    temp1=ar[i];
                    ar[i]=ar[i+1];
                    ar[i+1]=temp1;

                    temp=tr[i];
                    tr[i]=tr[i+1] ;
                    tr[i+1]=temp;
            }
        }
    }
    
}

=======
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) { triangle temp;
	float area,temp1,ar[n],p;int i,j;
    for(i=0;i<n;i++)
    {
        p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        area=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        ar[i]=area;
    } 
    for(j=1;j<n;j++)
    {
        for(i=0;i<n-j;i++)
        {
            if(ar[i]>ar[i+1])
            {
                    temp1=ar[i];
                    ar[i]=ar[i+1];
                    ar[i+1]=temp1;

                    temp=tr[i];
                    tr[i]=tr[i+1] ;
                    tr[i+1]=temp;
            }
        }
    }
    
}

>>>>>>> 1f64272e29a1e3f364531eb93344acd60ef9eccf
int main()