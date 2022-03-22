#include <stdio.h>
#include <stdlib.h>

//Tömb tartalmának kiírása
void tombkiir(int n[], int size){

    for(int i = 0; i<size; i++){
        if(i<size-1){
            printf("%d, ", n[i]);
        }else{
            printf("%d\n", n[i]);
        }
    }

}

//Tömb másolása
void copyArray(int arr[], int copy[], int size){
  for (int i = 0; i < size; ++i)
  {
    copy[i] = arr[i];
  }
}

int main(){

    int db;
    printf("Hány db számot szeretnél bevinni? ");
    scanf("%d", &db);
    printf("\n");

    int arr[db];
    int arr2[db];

    for(int i=0; i<=db-1; i++){
        printf("%d. szám: ", i+1);
        scanf("%d", &arr[i]);
        printf("\n");
    }

    copyArray(arr, arr2, db);

    for(int i=0; i<=db-1; i++){
        if(arr2[i]<0){
            arr2[i]=abs(arr2[i]);
        }
    }

    printf("A bevitt számok abszolútértékei: ");
    tombkiir(arr2, db);
    
    printf("A megadott számok: ");
    tombkiir(arr, db);

return 0;

}