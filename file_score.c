#include <stdio.h>
#include <stdlib.h>

typedef struct student {
    char na[50];
    int score;
} St;

int main() {
    char ch;
    St S[100];
    int i, n, num;
    float sum = 0;
    FILE *f1;
    f1 = fopen("file.txt", "w");
    printf("Enter the number of students: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter the name and the score: \n");
        scanf("%s", S[i].na);
        scanf("%d", &S[i].score);
        fprintf(f1,"%s %d\n", S[i].na, S[i].score);
    }
    fclose(f1);
    f1 = fopen("file.txt", "r");
    while (fscanf(f1, "%s %d", S[i].na, &num) == 2) 
        sum += num;
    fclose(f1);
    printf("Average score: %f\n", sum / n);
    return 0;
}