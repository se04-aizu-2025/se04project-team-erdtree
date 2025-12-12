#include <stdio.h>
#include <stdlib.h>
void print(int a[], int N);
void swap(int* a, int* b);

int main(){
  // declare variable                                                                                           
  int N, x, flag, cnt = 0;
  // input array size and declare array                                                                         
  scanf("%d", &N);
  int* array = (int*)malloc(N * sizeof(int));

  // input array                                                                                                
  for(int i = 0 ; i < N ; i++){
    scanf("%d", &x);
    array[i] = x;
  }


  // bubble sort                                                                                                
  flag = 1;
  while(flag){
    flag = 0;
    for(int j = N - 1 ; j >= 1 ; j--){
      if(array[j] < array[j - 1]){
        swap(&array[j],&array[j - 1]);
        cnt++;
        flag = 1;
      }
    }
  }

  print(array, N);
  printf("%d\n", cnt);
}

void print(int a[], int N){
    for(int i = 0 ; i < N ; i++){
      if(i == 0){
        printf("%d", a[i]);
      }else{
        printf(" %d", a[i]);
      }
    }
    printf("\n");
}
 void swap(int* a, int* b){
   int tmp;
   tmp = *a;
   *a = *b;
   *b = tmp;
 }





