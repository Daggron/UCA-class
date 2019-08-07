#include<stdio.h>
int main(){
  int n;
  printf("Enter the elements in the array");
  scanf("\n%d",&n);
  int *a = (int *)malloc(n * sizeof(int));
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  for(int i=0;i<n;i++){
    if(a[abs(a[i])]>=0){
      a[abs(a[i])]=-a[abs(a[i])];
    }
    else{
      printf("%d",abs(a[i]));
    }
  }

}
