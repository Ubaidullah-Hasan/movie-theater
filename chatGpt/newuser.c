#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user
{
    char name[50];
    char email[50];
    char password[20];
};

int main()
{
    struct user u;
    FILE *fp;
    char filename[] = "users.txt";

    printf("Welcome to the movie theater system!\n");
    printf("Please enter your name: ");
    scanf("%s", u.name);
    printf("Please enter your email: ");
    scanf("%s", u.email);
    printf("Please enter a password: ");
    scanf("%s", u.password);

    fp = fopen(filename, "a+");
    if (fp == NULL)
    {
        printf("Error: Could not open file.\n");
        exit(1);
    }

    fprintf(fp, "%s,%s,%s\n", u.name, u.email, u.password);
    fclose(fp);

    printf("User created successfully!\n");

    return 0;
}
