#performs circular convolution of (x,h), stores in y

#include <stdio.h>
#define L1 6 #define length of x
#define L2 4 #define length of y
int x[L1] = {1,2,3,4,5,6};
int h[L2] = {1,2,3,4,0,0};
int y[L1} = {0,0,0,0,0,0};
int i,j,k=0,temp1,temp2;
      
      
void lsarr();
      
main(){
  for(i=1;i<L1/2;i++)
  { temp1 = h[i];
    temp2 = h[L1-i];
    h[i] = temp2;
    h[L1-i] = temp1;
  }
  for (i=0;i<L1;i++)
      y[0]+=x[i]*h[i];
  printf("%d\n", y[0]);
  
  for(k=0;k<L1;k++)
  { lsarr();
    for(i=0;i<L1;i++)
    {
      y[k]+=x[i]*h[i];
    }
  }
  for (i=1;i<L1;i++)
    printf("%d\n", y[i]);
  return 0;
}
void lsarr()
      { 
        temp1 = h[L1-1];
        for(i=L1-1;i>=0;i--)
          h[i] = h[i-1];
       h[0] = temp1;
      }
