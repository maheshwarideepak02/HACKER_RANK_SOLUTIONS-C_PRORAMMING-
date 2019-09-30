#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) 
{
    int total=0;
    va_list args;
    va_start(args, count);
    for(int i=0;i<count;i++)
    {
        total=total+va_arg(args, int);
    }
    va_end(args);
    return total;

}
int min(int count,...) 
{
    va_list args;
    int min=MIN_ELEMENT;
    
    va_start(args,count);
    for(int i=0;i<count;i++)
    {
        if((va_arg(args,int)<=min))
        {
            min=va_arg(args,int);
        }
    }
    va_end(args);
    return min;

}

int max(int count,...) 
{
    va_list args;
    int max=MAX_ELEMENT;
    
    va_start(args,count);
    for(int i=0;i<count;i++)
    {
        if((va_arg(args,int)>=max))
        {
            max=va_arg(args,int);
        }
    }
    va_end(args);
    return max;

}



int test_implementations_by_sending_three_elements() {