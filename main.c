#include <stdio.h>
#include <ctype.h>
#define SIZE 100

#ifndef SORT_H
#define SORT_H
void swap(int *element1Ptr, int *element2Ptr);
void bubbleSort(int * const array, size_t size);
#endif

void  reverse(int *first,int *second);
int linearSearch(const int array[],int key,size_t size);
void convertToUppercase(char *sptr);
void foo(char string[]);
void  foo2(char **string[]);

typedef struct {
    char name[50];
    int age;
} Person;

int main() {

    int first = 5;
    int second1 = 8;

    reverse(&first,&second1);

    size_t size = sizeof (first);

    Person p = {"bob",20};

    char string[] = "hi ali";

    char  *second = "li";
    foo2(&second);
    printf("before upper %s\n",string);
    foo(string);
    foo2(&string);
    convertToUppercase(string);
    printf("after upper %s\n",string);

    printf("%d\n",p.age);

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

void  reverse(int *first,int *second){
    int temp = *first;
    *first = *second;
    *second =temp;
}

void  foo(char string[]){
    string = "ali";
    string = "reza";
}

void  foo2(char **string[]){
    string = "ali";
}
void convertToUppercase(char *sptr){
    while (*sptr != NULL){
        *sptr = toupper(*sptr);
        ++sptr;
    }
}