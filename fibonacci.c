//
// Created by Oğuzhan uğur Sarısakaloğlu on 24.03.2024.
//
#include <stdio.h>

/*
 * Fibonacci numbers are a sequence of numbers in which each number is the sum of the two preceding ones,
 * usually starting with 0 and 1. That is, the sequence starts 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, and so on.
 * The sequence bears the name of Leonardo of Pisa, known as Fibonacci, who introduced this sequence
 * to Western mathematics in his 1202 book "Liber Abaci,"
 * although the sequence had been previously described in Indian mathematics (Sanskrit poetry).
*/

// Fibonacci with Dynamic Programming
int fibonacciDynamic(int n) {
    // Dynamic Programming has the advantage of storing the results of previous computations,
    // thus avoiding the recomputation of those results. This significantly reduces the time complexity.

    // Creating an array of size 'n+2' because we're also going to use the 0th element.
    int f[n + 2];// Memory usage is a disadvantage, as it requires space proportional to 'n'.
    int i;

    // Assigning starting values
    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++) {
        // Calculating the next element by adding the previous two
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}

// Fibonacci with Iterative Approach
int fibonacciIterative(int n) {
    // The iterative approach is space-efficient, using only two variables,
    // but it can still be slower for large 'n' compared to the dynamic programming approach.
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// Fibonacci with Dynamic Programming
int fibonacciRecursive(int n) {
    // The recursive approach is elegant and simple but highly inefficient for large 'n'
    // due to the exponential time complexity and repeated calculations.
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursive(n-2) + fibonacciRecursive(n-1);
}

int run_fibonacci() {
    int n;
    printf("Enter the number of elements in the Fibonacci sequence: "); //  (0 <= n <= 30)
    scanf("%d", &n);

    printf("Fibonacci with Dynamic Programming: %d\n", fibonacciDynamic(n));
    printf("Fibonacci with Iterative Approach: %d\n", fibonacciIterative(n));
    printf("Fibonacci with Recursive Way: %d\n", fibonacciRecursive(n));

    return 0;
}