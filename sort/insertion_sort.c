#include <stdio.h>
#include <stdlib.h>
int print(int a[], int N);

int main(){
  // declare variable                                                                                           
  int N, x, key;
  // input array size and declare array                                                                         
  scanf("%d", &N);
  int* array = (int*)malloc(N * sizeof(int));

  // input array                                                                                                
  for(int i = 0 ; i < N ; i++){
    scanf("%d", &x);
    array[i] = x;
  }
  //print first state                                                                                           
  for(int i = 0 ; i < N ; i++){
    if(i == 0){
      printf("%d", array[i]);
    }else{
      printf(" %d", array[i]);
    }
  }

  // insection sort                                                                                             
  for(int i = 1 ; i < N ; i++){
    key = array[i];
    int j = i - 1;
    while((j >= 0 ) && (array[j] > key) ){
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = key;
    // print step                                                                                               
    print(array,N);
  }

}

int print(int a[], int N){
  printf("\n");
    for(int i = 0 ; i < N ; i++){
      if(i == 0){
        printf("%d", a[i]);
      }else{
        printf(" %d", a[i]);
      }
    }
}



