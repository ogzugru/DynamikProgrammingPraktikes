//
// Created by Oğuzhan uğur Sarısakaloğlu on 24.03.2024.
//
#include <stdio.h>
#include <string.h>

void run_fibonacci();
void run_pattern_count();

void call_fibonacci() {
    printf("Fibonacci function called.\n");
    run_fibonacci();
    // The rest of your Fibonacci function goes here.
}

void call_pattern_count() {
    printf("Pattern Count function called.\n");
    run_pattern_count();
    // The rest of your Pattern Count function goes here.
}

int main() {
    char functionName[100];

    printf("Enter the name of the function you want to run (f fibonacci or p pattern_count): ");
    scanf("%s", functionName);

    if (strcmp(functionName, "f") == 0) {
        call_fibonacci();
    } else if (strcmp(functionName, "p") == 0) {
        call_pattern_count();
    } else {
        printf("Undefined function name: %s\n", functionName);
    }

    return 0;
}
