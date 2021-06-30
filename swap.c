#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int arr[], int l, int n)
{
int max=arr[l];
int i;
for(i=l;i<=n;i++)
if(arr[i]>max)
max=arr[i];
int t=max;
max=arr[l];
l=t;
}
void ssort(int arr[], int l)
{
int i;
for(i=0;i<l-1;i++)
swap_max(arr,0,i);
}
