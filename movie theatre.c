/**************************************
 *  movie theatre
 * ***********************************/

#include <stdio.h>
#include <string.h> // for strcmp() function
#include <stdlib.h>

//  line break
void lineBreake()
{
    printf("\n");
}

// 2 line break
void lineBreake2()
{
    printf("\n\n");
}

// function for print 40 space
void space40()
{
    printf("%*s", 40, "");
}

// function for 40 symbol print
void symbo40(char symbol)
{
    printf("%*s", 30, ""); // space 30 then start symbol print
    for (int a = 1; a <= 40; a++)
    {
        printf("%c", symbol);
    }
    printf("\n");
}



// heading
void heading(char headingText[50])
{
    symbo40('*');
    space40();
    printf("%s\n", headingText);
    symbo40('*');
    lineBreake2();
}

// Normal formating text
void normalText(char text[150])
{
    space40();
    printf("%s\n", text);
}

// function for user Input a single number
int scanfIntNumber()
{
    int x;
    space40();
    scanf("%d", &x);
    space40();
    printf("You choose: %d", x);
    lineBreake2();
    return x;
}

/*===============================
add a new movie
================================*/
#define MAX_MOVIES 100
struct Movie
{
    char title[50];
    char genre[20];
    int duration;
};
struct Movie theaterMovies[MAX_MOVIES];
int numMovies = 0;

void addMovie()
{
    getchar();
    struct Movie newMovie;

    space40();
    printf("Enter the title of movie: ");
    fgets(newMovie.title, sizeof(newMovie.title), stdin);

    space40();
    printf("Enter the genre of the movie: ");
    fgets(newMovie.genre, sizeof(newMovie.genre), stdin);

    space40();
    printf("Enter the duration of the movie (in minutes): ");
    scanf("%d", &newMovie.duration);

    getchar(); // Clear the newline character from the input buffer

    theaterMovies[numMovies] = newMovie;
    numMovies++;

    normalText("Movie added successfully!\n");
}

/*===============================
add a new movie end
================================*/

/*===============================
show all movie
================================*/
void displayMovies()
{
    if (numMovies)
    {
        for (int i = 0; i < numMovies; i++)
        {
            space40();
            printf("Movie: %d\n", i + 1);
            space40();
            printf("Name: %s", theaterMovies[i].title);
            space40();
            printf("Genre: %s", theaterMovies[i].genre);
            space40();
            printf("Duration: %d minutes\n", theaterMovies[i].duration);
            printf("\n");
        }
    }
    else
    {
        normalText("No Movie Found!");
        lineBreake2();
    }
}
/*===============================
show all movie end
================================*/

/*===============================
delete a movie start
================================*/
void deleteMovie()
{
    getchar();
    int i, movieIndex;
    char searchTitle[50];

    space40();
    printf("Enter the title of the movie to delete: ");
    fgets(searchTitle, sizeof(searchTitle), stdin);

    for (i = 0; i < numMovies; i++)
    {
        if (strcmp(theaterMovies[i].title, searchTitle) == 0)
        {
            movieIndex = i;
            break;
        }
    }

    if (i == numMovies)
    {
        normalText("Movie not found.\n");
        return;
    }

    for (i = movieIndex; i < numMovies - 1; i++) // for delete match title movie
    {
        theaterMovies[i] = theaterMovies[i + 1];
    }

    numMovies--;

    normalText("Movie deleted successfully!");
    lineBreake2();
}
/*===============================
delete a movie end
================================*/

// Admin can edit those option
int adminOption(int choose)
{
    normalText("Choose A Option");
    symbo40('*');
    normalText("1. Add Movie");
    normalText("2. Display All Movies");
    normalText("3. Delete Movie");
    normalText("4. Exit");
    lineBreake2();
    int optionSelect = scanfIntNumber();
    switch (optionSelect)
    {
    case 1:
        normalText("Add Movie");
        symbo40('=');
        addMovie();
        return choose = 1;
        break;
    case 2:
        normalText("2. Display All Movies");
        symbo40('=');
        displayMovies();
        return choose = 1;
        break;
    case 3:
        normalText("3. Delete Movie");
        symbo40('=');
        deleteMovie();
        return choose = 1;
        /*********************************************/
        break;
    case 4:
        normalText("Exit Programme");
        return choose = 0;
        break;

    default:
        normalText("Invalid choice. Please try again.");
        return choose = 1;
        break;
    }
}

/*===============================
New Admin Create
================================*/
#define MAX_ADMINS 100

struct Admin
{
    char userEmail[50];
    char password[50];
};

struct Admin theaterAdmins[MAX_ADMINS];
int numAdmins = 0;

struct Admin addAdmin()
{
    getchar();
    struct Admin newAdmin;

    space40();
    printf("Enter the useremail for the new admin: ");
    fgets(newAdmin.userEmail, sizeof(newAdmin.userEmail), stdin);

    space40();
    printf("Enter the password for the new admin: ");
    fgets(newAdmin.password, sizeof(newAdmin.password), stdin);

    theaterAdmins[numAdmins] = newAdmin;
    numAdmins++;
    normalText("New admin added successfully!");
    return newAdmin;
}
/*===============================
New Admin Create
================================*/

/*****************************************************************************************
User MODE CODE WRITTEN BY RAHAT
*****************************************************************************************/
int n, s;
int mainmenu()

{

    lineBreake2();
    normalText("Main Menu");
    normalText("1.Ticket price");
    normalText("2.watch Show Time");
    normalText("3.Buy a Ticket");
    normalText("4.Buy food");
    normalText("5.Exit Programme");
    lineBreake2();
    space40();
    printf("Enter your Choice : ");
    scanf("%d", &n);
    if (n == 1)
    {
        // ticket price
        normalText("Titanic = 300Tk");
        normalText("KGF    = 280Tk");
        normalText("Pathan = 100Tk");
        return mainmenu();
    }
    else if (n == 2)
    {
        // show Time
        normalText("10:30 - 12:30");
        normalText("2:30 - 4:30");
        normalText("7:30 - 9:30");
        return mainmenu();
    }
    else if (n == 3)
    {
        // Buy a ticket
        normalText("For movies sned money to given the number");
        normalText("For no 1 movie = 017********");
        normalText("For no 2 movie = 016********");
        normalText("For no 3 movie = 015********");
        lineBreake2();
        symbo40('+');
        normalText("If you send money completely,we will send you a");
        normalText("confirmation messsage with seat number");
        lineBreake();
        normalText("THANK YOU");
        symbo40('+');
        lineBreake2();
        return 0;
    }
    else if (n == 4)
    {
        normalText("1.Pop corn");
        normalText("2.coke");
        normalText("3.peanut");
        normalText("call:018********");
        return mainmenu();
    }
    else if(n == 5)
    {
        lineBreake2();
        symbo40('-');
        normalText("Eixt Programme");
        symbo40('-');
        lineBreake2();
        return 0;
    }
    else
    {
        lineBreake2();
        normalText("---Wrong choice---");
        return mainmenu();
    }

    getchar();
}

void password()
{
    // heading();

    char pass1[10] = {"paradox"};
    char pass2[10];
    space40();
    printf("Enter password : ");
    scanf("%s", pass2);
    if (strcmp(pass1, pass2) == 0)
    {
        lineBreake2();
        normalText("Matched");
        lineBreake2();
        normalText("press any key");
    }
    else
    {
        lineBreake2();
        normalText("wrong password");
        lineBreake2();
        password();
    }

    getchar();
    mainmenu();
}
/*****************************************************************************************
User MODE CODE WRITTEN BY RAHAT
*****************************************************************************************/

int main()
{
    heading("Project Movie Theater");
    normalText("Choose a option 1 or 2:");
    symbo40('*');
    normalText("1. Admin Mode");
    normalText("2. Customer Mode");
    lineBreake2();

    int adminOrUser = scanfIntNumber(); // 1 => Admin Mode, 2 => User Mode
    int j = 0;
    switch (adminOrUser)
    {
    case 1:
        do
        {
            normalText("Admin Mode: ");
            symbo40('=');
            normalText("1. New admin create");
            normalText("2. I have a account");
            lineBreake2();

            // check admin account
            int accountOption = scanfIntNumber(); // 1 => Login, 2 => Create
            int i = 1;                            // while loop condition test

            switch (accountOption)
            {
            case 1:
                normalText("New admin create");
                struct Admin newAdmin = addAdmin();
                space40();
                printf("User email: %s ", newAdmin.userEmail);
                printf("User pass:%s", newAdmin.password);
                lineBreake2();
                break;

            case 2:
                do
                {
                    // printf("User email: %s  User pass:%s", newAdmin.userEmail, newAdmin.password);
                    // User Email
                    space40();
                    printf("Enter Your Email: ");
                    char userEmail[100], priviousEmail[100] = "hm123";
                    scanf("%s", userEmail);

                    // User password
                    space40();
                    printf("Enter Your Password: ");
                    char userPassword[100], priviousPassword[100] = "123";
                    scanf("%s", userPassword);

                    // check email and password
                    int emailCom = strcmp(userEmail, priviousEmail);
                    int passCom = strcmp(userPassword, priviousPassword);
                    if (emailCom == 0 && passCom == 0)
                    {
                        lineBreake();
                        symbo40('~');
                        normalText("Login Successfull!!!");
                        symbo40('~');
                        lineBreake2();
                        // normal code write here *****

                        int adminChoose = 1;
                        do
                        {
                            adminChoose = adminOption(adminChoose);

                        } while (adminChoose == 1);

                        // normal code write here *****
                        lineBreake2();

                        i = 0;
                        j = 0;
                    }
                    else
                    {
                        lineBreake();
                        symbo40('~');
                        lineBreake2();

                        // normal code write here
                        normalText("Email or password is wrong!!");
                        normalText("1. Again Try");
                        normalText("2. Previous menu");
                        lineBreake2();

                        int tryOrMainmenu = scanfIntNumber();
                        if (tryOrMainmenu == 2)
                        {
                            normalText("Previous Menu");
                            j = 1;
                            i = 0;
                        }
                        // normal code write here

                        lineBreake2();
                        symbo40('~');
                        lineBreake2();
                    }
                } while (i == 1); // first loop end

                break;

            default:
                break;
            }

        } while (j == 1); // second loop end
        break;

    case 2:
        normalText("2. Customer Mode");
        symbo40('=');
        lineBreake2();
        /* ********************
                code For Customer Mode
        ******************** */
        password();
        /* ********************
                code For Customer Mode
        ******************** */
        break;

    default:
        printf("wrong");
        break;
    }
    return 0;
}
