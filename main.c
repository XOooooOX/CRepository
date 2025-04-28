#include <stdio.h>
#define SIZE 100

int linearSearch(const int array[],int key,size_t size);

int main() {
    int a[SIZE] = {0};

    for(size_t x = 0; x < SIZE; ++x){
        a[x] = 2 * x;
    }

    printf("Enter integer search key:");

    int searchKey = 0;

    scanf("%d",&searchKey);

    int subscript = linearSearch(a,searchKey,SIZE);

    if(subscript != -1){
        printf("Found value at subscript %d\n",subscript);
    } else{
        puts("value not found");
    }
    return 0;
}


int linearSearch(const int array[],int key,size_t size){
    for (size_t i = 0; i < size; ++i) {
        if(array[i] == key){
            return i;
        }
    }

    return -1;
}