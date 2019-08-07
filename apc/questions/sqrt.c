#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);

  int l=0,r=n,mid;
  while(l<=r){
    mid=(l+r)/2;
    if(mid*mid == n){
      printf("%d",mid);
      break;
    }
    else if (mid*mid > n){
      r=mid-1;
    }
    else{
      l=mid+1;
    }
  }
  printf("%d",r);
}
