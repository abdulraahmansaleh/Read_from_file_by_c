#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[5]= {};
    FILE *pointer;
    pointer = freopen("task4.txt","a+",stdin);
    fgets(arr,5,stdin);
    int sum=(arr[0]-'0')+(arr[2]-'0');
    fprintf(pointer,"\nsum = %d",sum);
    fclose(pointer);
    return 0;
}
