// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct adress{
    int houseno;
    int block;
    char city[100];
    char state[100];
};
void printAdd(struct adress add);
int main() {
    // Write C code here
    struct adress adds[2];
    printf("Enter the address of the person1 : ");
    scanf("%d", &adds[0].houseno);
    scanf("%d", &adds[0].block);
    scanf("%s", &adds[0].city);
    scanf("%s", &adds[0].state);
     printf("Enter the address of the person 2 : ");
    scanf("%d", &adds[1].houseno);
    scanf("%d", &adds[1].block);
    scanf("%s", &adds[1].city);
    scanf("%s", &adds[1].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    



    

    return 0;
}
void printAdd(struct  adress add){
    printf("Address of all : = %d, %d, %s, %s", add.houseno, add.block, add.city, add.state);
}