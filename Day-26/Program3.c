#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Welcome to the Quiz Application\n\n");

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\n2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\n3. How many bits are there in a byte?\n");
    printf("1. 4\n2. 8\n3. 16\n4. 32\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}