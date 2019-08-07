#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int *arr = (int *) malloc(n * sizeof(int));
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i] );
  }
  int j=1;
  for(int i=0;i<n-1;i++){
    if(arr[i]!=arr[i+1]){
      arr[j]=arr[i+1];
      j++;
    }
  }

  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
}
