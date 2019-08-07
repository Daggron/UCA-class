#include<stdio.h>
int main()
{
  int n,max=0;
  scanf("%d",&n);
  int *a = (int *) malloc(n * sizeof(int));
  int *b = (int *) malloc(n * sizeof(int));
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++){
    scanf("%d",&b[i] );
  }

  for(int i=0;i<n;i++){
    if(b[i]>max){
      max=b[i];
    }
  }

  int *arr = (int *) malloc((max+1) * sizeof(int));
  for(int i=0;i<n;i++){
    arr[a[i]]++;
    arr[b[i]+1]--;
  }

  int prev=0;
  int m=0;
  for(int i=0;i<max+1;i++){
    if(prev+arr[i]>m){
      m=m+arr[i];
    }
    prev = prev+arr[i];
  }

  printf("The maxmum elemet is %d ",m);
}
