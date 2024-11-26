#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LAPTOPS 41

// Hardcoded username and password
#define USERNAME "siddhant"

#define PASSWORD "siddhant@123"

// Structure for laptops
struct laptops
{
 
    char name[500];
 
    int priceINR;
 
    char specs[500];
};

void laptops()
{

    printf("                           WELCOME TO THE WORLD OF LAPTOPS\n");

    struct laptops laptopCatalog[MAX_LAPTOPS] = {

        {"Lenovo ThinkPad X1 Carbon", 96000, "Intel i7, 16GB RAM, 512GB SSD, 14\" Full HD Display"},

        {"Dell XPS 13", 104000, "Intel i7, 16GB RAM, 512GB SSD, 13.3\" Full HD Display"},

        {"Apple MacBook Pro 16\" (2021)", 192000, "Apple M1 Pro, 16GB RAM, 512GB SSD, 16\" Retina Display"},

        {"HP Spectre x360", 120000, "Intel i7, 16GB RAM, 512GB SSD, 13.3\" 4K Touchscreen"},

        {"Asus ROG Zephyrus G14", 136000, "AMD Ryzen 9, 32GB RAM, 1TB SSD, 14\" Full HD Display"},


        {"Acer Predator Helios 300", 128000, "Intel i7, 16GB RAM, 512GB SSD, 15.6\" Full HD 144Hz Display"},

        {"Microsoft Surface Laptop 4", 120000, "Intel i7, 16GB RAM, 512GB SSD, 13.5\" PixelSense Display"},


        {"Lenovo Legion 5", 104000, "AMD Ryzen 7, 16GB RAM, 512GB SSD, 15.6\" Full HD Display"},

        {"Dell Inspiron 15 5000", 64000, "Intel i5, 8GB RAM, 512GB SSD, 15.6\" Full HD Display"},

        {"HP Envy 13", 80000, "Intel i5, 8GB RAM, 256GB SSD, 13.3\" Full HD Display"},

        {"MSI GE66 Raider", 176000, "Intel i9, 32GB RAM, 1TB SSD, 15.6\" 4K Display"},

        {"Apple MacBook Air (M1, 2020)", 79920, "Apple M1, 8GB RAM, 256GB SSD, 13.3\" Retina Display"},

        {"Samsung Galaxy Book Pro", 96000, "Intel i7, 16GB RAM, 512GB SSD, 13.3\" AMOLED Display"},

        {"Razer Blade 15", 160000, "Intel i7, 16GB RAM, 512GB SSD, 15.6\" 144Hz Full HD Display"},

        {"Asus ZenBook 14", 88000, "Intel i5, 8GB RAM, 512GB SSD, 14\" Full HD Display"},

        {"HP Omen 15", 128000, "Intel i7, 16GB RAM, 512GB SSD, 15.6\" 144Hz Full HD Display"},

        {"Gigabyte AORUS 15G", 152000, "Intel i7, 16GB RAM, 1TB SSD, 15.6\" Full HD 240Hz Display"},

        {"Alienware m15 R6", 176000, "Intel i7, 16GB RAM, 512GB SSD, 15.6\" 165Hz Full HD Display"},

        {"Lenovo Yoga C940", 104000, "Intel i7, 16GB RAM, 512GB SSD, 14\" 4K Touchscreen"},

        {"Acer Swift 3", 56000, "AMD Ryzen 5, 8GB RAM, 256GB SSD, 14\" Full HD Display"},

        {"Lenovo ThinkPad X1 Yoga (2021)", 145000, "Intel i7, 16GB RAM, 512GB SSD, 14\" 4K Touchscreen"},

        {"Dell Alienware X17", 220000, "Intel i9, 32GB RAM, 1TB SSD, 17.3\" Full HD 360Hz Display"},

        {"Apple MacBook Pro 14\" (2021)", 174000, "Apple M1 Pro, 16GB RAM, 512GB SSD, 14\" Retina Display"},

        {"HP Pavilion x360", 90000, "Intel i7, 16GB RAM, 512GB SSD, 14\" Full HD Touchscreen"},

        {"Asus TUF Gaming A15", 114000, "AMD Ryzen 7, 16GB RAM, 512GB SSD, 15.6\" Full HD 144Hz Display"},

        {"MSI Stealth 15M", 140000, "Intel i7, 16GB RAM, 512GB SSD, 15.6\" Full HD 144Hz Display"},


        {"Razer Blade Stealth 13", 140000, "Intel i7, 16GB RAM, 512GB SSD, 13.3\" Full HD 120Hz Display"},


        {"Microsoft Surface Laptop Studio", 178000, "Intel i7, 32GB RAM, 1TB SSD, 14.4\" PixelSense Flow Display"},


        {"HP Elite Dragonfly", 210000, "Intel i7, 16GB RAM, 512GB SSD, 13.3\" Full HD Touchscreen"},

        {"Gigabyte Aero 15 OLED", 190000, "Intel i7, 16GB RAM, 1TB SSD, 15.6\" 4K OLED Display"},

        {"Acer ConceptD 7", 200000, "Intel i9, 32GB RAM, 1TB SSD, 15.6\" 4K IPS Display"},

        {"Lenovo Legion 7i", 160000, "Intel i7, 16GB RAM, 1TB SSD, 15.6\" Full HD 240Hz Display"},

        {"Dell Inspiron 14 5000", 75000, "Intel i5, 8GB RAM, 512GB SSD, 14\" Full HD Display"},

        {"Samsung Galaxy Book 3 Pro", 130000, "Intel i7, 16GB RAM, 512GB SSD, 15.6\" Full HD AMOLED Display"},

        {"HP Omen 16", 140000, "Intel i7, 16GB RAM, 512GB SSD, 16.1\" Full HD 165Hz Display"},

        {"Asus Vivobook Pro 15", 115000, "AMD Ryzen 7, 16GB RAM, 512GB SSD, 15.6\" Full HD Display"},

        {"Microsoft Surface Laptop Go", 65000, "Intel i5, 8GB RAM, 256GB SSD, 12.4\" PixelSense Display"},

        {"Acer Aspire 7", 70000, "AMD Ryzen 5, 8GB RAM, 512GB SSD, 15.6\" Full HD Display"},

        {"HP Spectre x360 14", 145000, "Intel i7, 16GB RAM, 512GB SSD, 13.5\" 3K2K OLED Touchscreen"},

        {"Lenovo IdeaPad Gaming 3", 85000, "AMD Ryzen 5, 8GB RAM, 512GB SSD, 15.6\" Full HD 120Hz Display"},

        {"Asus ZenBook 15", 125000, "Intel i7, 16GB RAM, 512GB SSD, 15.6\" Full HD OLED Display"}

    };


    printf("1. LAPTOP CATALOG\n");

    printf("2. Changed my mind .....show me mobiles\n");

    printf("3. Changed my mind....show me headphones\n");

    int choice;


    scanf("%d", &choice);

    switch (choice)

    {

    case 1:

        // Displaying the laptop catalog

        printf("Laptop Catalog:\n\n");

        for (int i = 0; i < MAX_LAPTOPS; i++)

        {

            printf("Laptop %d: %s\n", i + 1, laptopCatalog[i].name);


            printf("Price: ₹%d\n", laptopCatalog[i].priceINR);

            printf("Specifications: %s\n\n", laptopCatalog[i].specs);

        }

        break;

    default:

        break;

    }

}


int main()

{

    // Top border

    printf("#####################################\n");

    // Upper decorative part
    printf("#        *************************    #\n");
    printf("#        *                       *    #\n");
    printf("#        *                       *    #\n");
    printf("#        *                       *    #\n");

    // Line above the text
    printf("#        *                       *    #\n");

    // Middle part with the text "Sparkix"
    printf("#        *        $parkiX        *    #\n");

    // Line below the text
    printf("#        *                       *    #\n");

    // Lower decorative part
    printf("#        *                       *    #\n");
    printf("#        *                       *    #\n");
    printf("#        *                       *    #\n");
    printf("#        *************************    #\n");

    // Bottom border
    printf("#####################################\n");


    char inputUsername[50];

    char inputPassword[50];

    int n;



    printf("1. LOGIN WITH USERNAME\n");

    printf("2. LOGIN WITH OTP\n");

    printf("Choose an option: ");

    scanf("%d", &n);

    getchar();


    if (n == 1)

    {

        // Prompt the user for the username

        printf("Enter username: ");

        fgets(inputUsername, 50, stdin);

        inputUsername[strcspn(inputUsername, "\n")] = '\0'; // Remove newline character


        // Prompt the user for the password

        printf("Enter password: ");

        fgets(inputPassword, 50, stdin);

        inputPassword[strcspn(inputPassword, "\n")] = '\0'; // Remove newline character


        // Check if the input matches the hardcoded username and password
        if (strcmp(inputUsername, USERNAME) == 0 && strcmp(inputPassword, PASSWORD) == 0)
        {
            printf("Login successful!\n");
            // Printing the name of the ecommerce company
            printf("                                              Welcome to Sparkix\n");
            // Printing the tagline for ecommerce company
            printf("                                          A Quick Click Stop To Shop\n");
            printf("                        *********************END SEMESTER CARNIVAL************************\n");
            printf("           DISCOUNTS ON LENOVO LAPTOPS ARE HEAVY IF YOUR IF YOUR ATTENDANCE IS LOW...GRAB THE DEAL BEFORE GETTING DEBARRED\n");

            int i = 0;
            while (i != 4)
            {
                printf("1. LAPTOPS\n");
                printf("2. MOBILE PHONES\n");
                printf("3. HEADPHONES\n");
                printf("4. I AM FEELING SLEEPY....LEMME EXIT\n");
                scanf("%d", &i);

                switch (i)
                {
                case 1:
                    laptops();
                    break;
                case 2:
                    // Add mobile phones logic here
                    break;
                case 3:
                    // Add headphones logic here
                    break;
                case 4:
                    printf("Exiting...\n");
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
                }
            }
        }
        else
        {
            printf("Invalid username or password.\n");
        }
    }
    else if (n == 2)
    {
        int otp, userOTP;

        // Seed the random number generator
        srand(time(0));

        // Generate a 6-digit OTP
        otp = rand() % 1000000;
        printf("Your OTP is: %06d\n", otp); // Pads OTP with leading zeros if needed

        // Prompt user to enter the OTP
        printf("Enter the 6 digit OTP: ");
        scanf("%d", &userOTP);

        // Verify the OTP
        if (userOTP == otp)
        {
            printf("OTP verified successfully!\n");
            // Printing the name of the ecommerce company
            printf("                                              Welcome to Sparkix\n");
            // Printing the tagline for ecommerce company
            printf("                                          A Quick Click Stop To Shop\n");
            printf("                        *********************END SEMESTER CARNIVAL************************\n");
            printf("           DISCOUNTS ON LENOVO LAPTOPS ARE HEAVY IF YOUR IF YOUR ATTENDANCE IS LOW...GRAB THE DEAL BEFORE GETTING DEBARRED\n");

            int i = 0;
            while (i != 4)
            {
                printf("1. LAPTOPS\n");
                printf("2. MOBILE PHONES\n");
                printf("3. HEADPHONES\n");
                printf("4. I AM FEELING SLEEPY....LEMME EXIT\n");
                scanf("%d", &i);

                switch (i)
                {
                case 1:
                    laptops();
                    break;
                case 2:
                    // Add mobile phones logic here
                    break;
                case 3:
                    // Add headphones logic here
                    break;
                case 4:
                    printf("Exiting...\n");
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
                }
            }
        }
        else
        {
            printf("Invalid OTP. Please try again.\n");
        }
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}
