/*
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

// Semaphores to control access to positive and negative factorial calculations
sem_t semaphore_positive, semaphore_negative;

// Function to calculate positive factorial
void *calculate_positive_factorial(void *arg) {
    int n = *((int *)arg);
    sem_wait(&semaphore_positive);

    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    printf("Factorial of %d is: %d\n", n, result);

    sem_post(&semaphore_positive);
    pthread_exit(NULL);
}

// Function to calculate negative factorial
void *calculate_negative_factorial(void *arg) {
    int n = *((int *)arg);
    sem_wait(&semaphore_negative);

    if (n < 0) {
        printf("Cannot calculate factorial for negative numbers.\n");
    }

    sem_post(&semaphore_negative);
    pthread_exit(NULL);
}

int main() {
    // Initialize the semaphores
    sem_init(&semaphore_positive, 0, 1);
    sem_init(&semaphore_negative, 0, 1);

    pthread_t thread_positive, thread_negative;
    int positive_num = 5;
    int negative_num = -4;

    // Create threads for positive and negative factorial calculation
    pthread_create(&thread_positive, NULL, calculate_positive_factorial, (void *)&positive_num);
    pthread_create(&thread_negative, NULL, calculate_negative_factorial, (void *)&negative_num);

    // Wait for threads to complete
    pthread_join(thread_positive, NULL);
    pthread_join(thread_negative, NULL);

    // Destroy the semaphores
    sem_destroy(&semaphore_positive);
    sem_destroy(&semaphore_negative);

    return 0;
}
*/
#include<stdio.h>

int main(){
    int n[5]={3,5,65,76,6,5};
    printf("%d",n[8]);
}
\
// linked list
//stack
//queue
//binary tree
// infix a+b = 2+ 3 = 5

// prefix +ab +23  = 2+3 = 5
//postfix ab+ 23+ = 2+ 3= 5

PUSH :- HIGH AMOUNT OF  STACK OVERFLOW 
AND 
POP :- HIGH AMOUNT OF POP  STACK UNDERFLOW OR STACK IS EMPTY
DATA BREACH :- HIGH PROFILE PE