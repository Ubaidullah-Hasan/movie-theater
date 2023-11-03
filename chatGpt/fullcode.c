#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct movie
{
    char title[50];
    char genre[20];
    int rating;
    int duration;
};

struct showtime
{
    char time[10];
    int seats_available;
    float price;
};

struct booking
{
    char name[50];
    char email[50];
    char movie_title[50];
    char showtime[10];
    int num_tickets;
    float total_price;
};

void print_movie(struct movie m)
{
    printf("%s (%s)\nRating: %d\nDuration: %d minutes\n", m.title, m.genre, m.rating, m.duration);
}

void print_showtimes(struct showtime s[], int num)
{
    printf("Available showtimes:\n");
    for (int i = 0; i < num; i++)
    {
        printf("%s (%d seats available) - $%.2f\n", s[i].time, s[i].seats_available, s[i].price);
    }
}

int main()
{
    struct movie m1 = {"The Matrix", "Action", 8, 136};
    struct movie m2 = {"The Godfather", "Crime", 9, 175};
    struct showtime s1[] = {{"10:00", 50, 10.50}, {"13:00", 30, 12.00}, {"16:00", 20, 13.50}};
    struct showtime s2[] = {{"11:00", 40, 11.00}, {"14:00", 25, 12.50}, {"17:00", 15, 14.00}};
    struct booking b;
    int choice;

    printf("Welcome to the movie theater booking system!\n\n");
    printf("Which movie would you like to book?\n");
    printf("1. %s\n2. %s\n", m1.title, m2.title);
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        print_movie(m1);
        print_showtimes(s1, 3);
        strcpy(b.movie_title, m1.title);
    }
    else if (choice == 2)
    {
        print_movie(m2);
        print_showtimes(s2, 3);
        strcpy(b.movie_title, m2.title);
    }
    else
    {
        printf("Invalid choice!\n");
        exit(0);
    }

    printf("\nPlease enter your name: ");
    scanf("%s", b.name);
    printf("Please enter your email: ");
    scanf("%s", b.email);
    printf("Please enter the showtime you want to book: ");
    scanf("%s", b.showtime);
    printf("Please enter the number of tickets you want to book: ");
    scanf("%d", &b.num_tickets);

    if (strcmp(b.showtime, s1[0].time) == 0)
    {
        s1[0].seats_available -= b.num_tickets;
        b.total_price = s1[0].price * b.num_tickets;
    }
    else if (strcmp(b.showtime, s1[1].time) == 0)
    {
        s1[1].seats_available -= b.num_tickets;
        b.total_price = s1[1].price * b.num_tickets;
    }
}