#include <stdio.h>

struct card {
    const char *face;
    const char *suit;
};


int main(){
    struct card myCard = {"King", "Hearts"};
    struct card *cardPtr = &myCard;

    char name[10];
    strcpy(name, cardPtr->suit);  // کپی کردن مقدار 'suit' به آرایه 'name'

    printf("Card suit: %s\n", name);  // چاپ کردن آرایه 'name'

    FILE *cfPtr = NULL;

     if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
         puts("File could not be opened");
         }
     else {
        puts("Enter the account, name, and balance.");
        puts("Enter EOF to end input.");
        printf("%s", "? ");

        int account = 0; // account number
        char name[30] = ""; // account name
        double balance = 0.0; // account balance

        scanf("%d%29s%lf", &account, name, &balance);


        while (!feof(stdin)) {
             fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
             printf("%s", "? ");
             scanf("%d%29s%lf", &account, name, &balance);
             }

         fclose(cfPtr); // fclose closes file
    return 3;
}

