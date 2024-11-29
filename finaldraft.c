#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Hardcoded username and password
#define USERNAME "siddhant"

#define PASSWORD "siddhant@123"

#define MAX_LAPTOPS 41

#define MAX_HEADPHONES 120

#define MAX_SMARTPHONES 50

#define CART_SIZE 100

#define MAX_CARD_DETAILS_LENGTH 100

#define FILE_NAME "card_details.txt"

// Structures for headphones

struct headphones

{

    char name[100];

    int price;

    char specs[300];
};

// Structures for smartphones

struct smartphone

{

    char name[500];

    int price;

    char specs[500];
};

// Structure for laptops

struct laptops

{

    char name[500];

    int priceINR;

    char specs[500];
};

// Structure for cart item

struct cart_item

{

    char name[500];

    int price;
};

// Global cart array

struct cart_item cart[CART_SIZE];

int cart_count = 0;

// Function to generate OTP

int generate_otp()

{

    srand(time(0)); // Seed the random number generator

    return rand() % 900000 + 100000; // Generates a 6-digit OTP
}
void generate1_otp(char *otp)
{

    srand(time(0));

    sprintf(otp, "%06d", rand() % 1000000); // OTP as a 6-digit number
}

// Function to handle Username and Password login

int username_password_login()

{

    char inputUsername[50], inputPassword[50];

    // Input username and password

    printf("Enter Username: ");

    scanf("%s", inputUsername);

    printf("Enter Password: ");

    scanf("%s", inputPassword);

    if (strcmp(inputUsername, USERNAME) == 0 && strcmp(inputPassword, PASSWORD) == 0)

    {

        printf("Username and password are correct!\n\n");

        return 1; // Successful login
    }

    else

    {

        printf("Invalid username or password. Please try again.\n");

        return 0; // Failed login
    }
}

// Function to handle OTP login

int otp_login()

{

    char inputUsername[50];

    int otp, userOtp;

    // Generate OTP and display

    otp = generate_otp();

    printf("Your OTP is: %d\n", otp);

    // Ask the user for the OTP

    printf("Enter OTP to login: ");

    scanf("%d", &userOtp);

    if (userOtp == otp)

    {

        printf("Login successful!\n\n");

        return 1; // Successful login
    }

    else

    {

        printf("Incorrect OTP. Login failed.\n");

        return 0; // Failed login
    }
}

void byebye()

{

    printf("\n");

    printf("*******************************************************************************\n");

    printf("*                          Thank You for Visiting!                           *\n");

    printf("*******************************************************************************\n\n");
}

// Function to add an item to the cart

void add_to_cart(char *name, int price)

{

    if (cart_count < CART_SIZE)

    {

        strcpy(cart[cart_count].name, name);

        cart[cart_count].price = price;

        cart_count++;

        printf("%s has been added to your cart.\n", name);
    }

    else

    {

        printf("Cart is full, can't add more items.\n");
    }
}

// Function to display the cart

void view_cart()

{
    if (cart_count == 0)

    {

        printf("Your cart is empty.\n");

        return;
    }

    printf("\nItems in your cart:\n");

    int total = 0;

    for (int i = 0; i < cart_count; i++)
    {

        printf("%d. %s - ₹%d\n", i + 1, cart[i].name, cart[i].price);

        total += cart[i].price;
    }

    printf("\nTotal: ₹%d\n", total);
}
// Function to store the card details in a file
void store_card_details(const char *card_number, const char *expiry_date, const char *cvv)
{

    FILE *file = fopen(FILE_NAME, "a"); // Open file in append mode

    if (file == NULL)

    {

        printf("Error opening file for storing card details.\n");

        return;
    }

    fprintf(file, "Card Number: %s\n", card_number);

    fprintf(file, "Expiry Date: %s\n", expiry_date);

    fprintf(file, "CVV: %s\n\n", cvv);

    fclose(file);
}
void checkout()
{

    view_cart();

    if (1)
    { // Assuming cart_count > 0 for this example. Replace with actual cart logic.

        char confirm;

        printf("\nDo you want to proceed with the checkout? (y/n): ");

        scanf(" %c", &confirm);

        if (confirm == 'y' || confirm == 'Y')
        {

            printf("\nSelect Payment Method:\n");

            printf("1. Debit/Credit Card\n");

            printf("2. Other methods (if applicable)\n");

            printf("Choose an option: ");

            int choice;

            scanf("%d", &choice);

            if (choice == 1)
            {

                char card_number[20], expiry_date[10], cvv[5], otp[7];

                // Get card details from the user

                printf("\nEnter your card number: ");

                scanf("%s", card_number);

                printf("Enter the expiry date (MM/YY): ");

                scanf("%s", expiry_date);

                printf("Enter the CVV: ");

                scanf("%s", cvv);

                // Generate and display OTP

                generate1_otp(otp);

                printf("\nAn OTP has been sent to your registered mobile number: %s\n", otp);

                printf("Please enter the OTP to proceed with payment: ");

                char entered_otp[7];

                scanf("%s", entered_otp);

                // Check if OTP matches

                if (strcmp(otp, entered_otp) == 0)
                {

                    // Store the card details in a file (optional)

                    store_card_details(card_number, expiry_date, cvv);

                    printf("\nThank you for your purchase! Your order will be processed.\n");

                    byebye();
                }
                else
                {

                    printf("\nInvalid OTP. Payment failed.\n");
                }
            }
            else
            {

                // Handle other payment methods if needed

                printf("Payment method not implemented yet.\n");
            }
        }
        else
        {

            printf("\nCheckout cancelled.\n");
        }
    }
}

// Function for headphones

void headphones()

{

    printf("WELCOME TO THE WORLD OF HEADPHONES\n\n");

    struct headphones headphoneCatalog[MAX_HEADPHONES] = {

        {"Sony WH-1000XM5", 29999, "Noise Cancelling, Wireless, 30-hour Battery Life"},

        {"Bose 700", 37999, "Noise Cancelling, Wireless, Voice Assistant Support"},

        {"Apple AirPods Max", 59999, "Active Noise Cancellation, Spatial Audio, High-Fidelity Sound"},

        {"JBL Live 660NC", 12999, "Noise Cancelling, Wireless, 50-hour Battery Life"},

        {"Sennheiser Momentum 4", 34999, "Noise Cancelling, Wireless, High-Resolution Audio"},

        {"HyperX Cloud Alpha Wireless", 15999, "Wireless, 300-hour Battery Life, DTS Headphone:X"},

        {"Beats Studio Pro", 24999, "Noise Cancelling, Wireless, Enhanced Audio Quality"},

        {"Razer Kraken V3 Pro", 19999, "Wireless, THX Spatial Audio, RGB Lighting"},

        {"Beyerdynamic DT 770 Pro", 14999, "Studio Quality, Wired, Over-Ear Design"},

        {"SteelSeries Arctis Nova Pro", 33999, "Wireless, Active Noise Cancelling, 360° Spatial Audio"},

        {"Audio-Technica ATH-M50xBT2", 18999, "Wireless, Studio Sound Quality, Built-in Mic"},

        {"Shure AONIC 50", 31999, "Noise Cancelling, Wireless, Studio Quality Audio"},

        {"Marshall Major IV", 10999, "Wireless, 80-hour Battery Life, Iconic Design"},

        {"Plantronics BackBeat Go 810", 7999, "Noise Cancelling, Wireless, Comfortable Fit"},

        {"AKG Y50BT", 8499, "Wireless, Balanced Audio, Portable Design"},

        {"Logitech G733 Lightspeed", 12999, "Wireless, RGB Lighting, Surround Sound"},

        {"Turtle Beach Stealth 700", 16999, "Wireless, Superhuman Hearing, 20-hour Battery"},

        {"Corsair Virtuoso RGB", 17999, "Wireless, High-Fidelity Audio, RGB Lighting"},

        {"Skullcandy Crusher Evo", 13999, "Wireless, Adjustable Bass, Long Battery Life"},

        {"Edifier W860NB", 10999, "Noise Cancelling, Wireless, Touch Controls"},

        {"OneOdio A70", 7999, "Wireless, Dual Device Connection, High-Resolution Audio"},

        {"Sony WF-1000XM4", 19999, "Noise Cancelling, Wireless Earbuds, 8-hour Battery"},

        {"Bose QuietComfort Earbuds II", 24999, "Noise Cancelling, Wireless Earbuds, High-Fidelity Audio"},

        {"JBL Quantum 800", 13999, "Wireless, DTS:X Audio, Gaming Headset"},

        {"Audeze Mobius", 29999, "Wired/Wireless, 3D Audio, High-Quality Build"},

        {"Grado SR80x", 9999, "Wired, Open-Back Design, High-Fidelity Sound"},

        {"Philips Fidelio X2HR", 19999, "Wired, Open-Back, Audiophile Grade"},

        {"Bang & Olufsen Beoplay HX", 49999, "Wireless, Noise Cancelling, Luxury Design"},

        {"Jabra Elite 85h", 22999, "Noise Cancelling, Wireless, Long Battery Life"},

        {"Harman Kardon Fly", 16999, "Noise Cancelling, Wireless, Elegant Design"},

        {"Sony WH-CH710N", 9999, "Noise Cancelling, Wireless, Lightweight"},

        {"Pioneer DJ HDJ-X10", 29999, "Wired, Professional DJ Headphones, Durable"},

        {"Cowin E7 Pro", 5999, "Noise Cancelling, Wireless, Comfortable Fit"},

        {"Sennheiser HD 560S", 18999, "Wired, Open-Back, Detailed Soundstage"},

        {"Audio-Technica ATH-ANC900BT", 15999, "Noise Cancelling, Wireless, Studio Quality"},

        {"Razer BlackShark V2 Pro", 14999, "Wireless, Gaming Headset, THX Spatial Audio"},

        {"Corsair HS80 RGB", 15999, "Wireless, Dolby Atmos, RGB Lighting"},

        {"Astro A50 Gen 4", 25999, "Wireless, Dolby Audio, Gaming Headset"},

        {"Logitech G Pro X", 12999, "Wired/Wireless, Gaming Headset, Detachable Mic"},

        {"Sony MDR-7506", 7999, "Wired, Studio Monitoring, Lightweight"},

        {"AKG K240 Studio", 5999, "Wired, Semi-Open, Studio Headphones"},

        {"Samson SR850", 3999, "Wired, Semi-Open, Budget Studio Headphones"},

        {"Bowers & Wilkins PX7", 29999, "Noise Cancelling, Wireless, Audiophile Quality"},

        {"House of Marley Exodus", 14999, "Wireless, Sustainable Materials, 30-hour Battery"},

        {"Avantree Aria Pro", 7999, "Noise Cancelling, Wireless, Detachable Mic"},

        {"JBL Tour One", 24999, "Noise Cancelling, Wireless, High-Fidelity Sound"},

        {"Monoprice Monolith M1060", 27999, "Wired, Planar Magnetic Drivers, Audiophile Quality"},

        {"Focal Listen Wireless", 27999, "Wireless, Studio Quality, Comfortable Design"},

        {"Philips SHP9500", 7499, "Wired, Open-Back, Budget Audiophile Headphones"},

        {"Sennheiser PXC 550-II", 21999, "Noise Cancelling, Wireless, Comfortable Fit"},

        {"JLab Studio Pro", 4999, "Wireless, Long Battery, Balanced Sound"},

        {"Beats Solo3", 17999, "Wireless, Apple W1 Chip, Fast Charging"},

        {"Samsung Galaxy Buds Pro", 15999, "Noise Cancelling, Wireless Earbuds, Waterproof"},

        {"Master & Dynamic MW65", 39999, "Noise Cancelling, Wireless, Luxury Materials"},

        {"Creative SXFI Air", 13999, "Wireless, Holographic Audio, High-Quality Design"}};

    // Display headphone catalog

    for (int i = 0; i < 55; i++)

    {

        printf("%d. %s - ₹%d\n", i + 1, headphoneCatalog[i].name, headphoneCatalog[i].price);
    }

    printf("\nEnter the number of the headphone you want to add to cart, or 0 to go back: ");

    int choice;

    scanf("%d", &choice);

    if (choice > 0 && choice <= 55)

    {
        add_to_cart(headphoneCatalog[choice - 1].name, headphoneCatalog[choice - 1].price);
    }
}

// Function for smartphones

void mobilephones()

{

    printf("WELCOME TO THE WORLD OF SMARTPHONES\n");

    struct smartphone smartphoneCatalog[MAX_SMARTPHONES] = {

        {"iPhone 14 Pro", 119999, "A16 Bionic, 6.1\" Super Retina XDR, 128GB"},

        {"Samsung Galaxy S23 Ultra", 124999, "Snapdragon 8 Gen 2, 6.8\" AMOLED, 256GB"},

        {"Google Pixel 8 Pro", 109999, "Google Tensor G3, 6.7\" OLED, 128GB"},

        {"OnePlus 11", 64999, "Snapdragon 8 Gen 2, 6.7\" AMOLED, 128GB"},

        {"Xiaomi 13 Pro", 79999, "Snapdragon 8 Gen 2, 6.73\" AMOLED, 256GB"},

        {"Oppo Find X6 Pro", 89999, "Snapdragon 8 Gen 2, 6.82\" AMOLED, 256GB"},

        {"Vivo X90 Pro", 75999, "Dimensity 9200, 6.78\" AMOLED, 256GB"},

        {"Sony Xperia 1 V", 109999, "Snapdragon 8 Gen 2, 6.5\" OLED, 128GB"},

        {"Asus ROG Phone 7", 84999, "Snapdragon 8 Gen 2, 6.78\" AMOLED, 256GB"},

        {"Nothing Phone (2)", 49999, "Snapdragon 8+ Gen 1, 6.7\" OLED, 128GB"},

        {"iPhone 13", 69999, "A15 Bionic, 6.1\" Super Retina XDR, 128GB"},

        {"Samsung Galaxy A54", 38999, "Exynos 1380, 6.4\" AMOLED, 128GB"},

        {"Google Pixel 7a", 43999, "Google Tensor G2, 6.1\" OLED, 128GB"},

        {"OnePlus Nord 3", 33999, "Dimensity 9000, 6.74\" AMOLED, 128GB"},

        {"Xiaomi Redmi Note 12 Pro+", 29999, "Dimensity 1080, 6.67\" AMOLED, 256GB"},

        {"Realme GT Neo 5", 39999, "Snapdragon 8+ Gen 1, 6.74\" AMOLED, 256GB"},

        {"Poco F5 Pro", 35999, "Snapdragon 7+ Gen 2, 6.67\" AMOLED, 128GB"},

        {"Vivo T2 Pro", 23999, "Dimensity 7200, 6.78\" AMOLED, 128GB"},

        {"Samsung Galaxy Z Flip 5", 99999, "Snapdragon 8 Gen 2, 6.7\" Foldable AMOLED, 128GB"},

        {"Motorola Edge 40", 32999, "Dimensity 8020, 6.55\" AMOLED, 128GB"},

        {"iPhone SE (2022)", 49999, "A15 Bionic, 4.7\" Retina HD, 64GB"},

        {"Samsung Galaxy M14", 13999, "Exynos 1330, 6.6\" PLS LCD, 128GB"},

        {"Google Pixel Fold", 179999, "Google Tensor G3, 7.6\" Foldable OLED, 256GB"},

        {"OnePlus 10T", 49999, "Snapdragon 8+ Gen 1, 6.7\" AMOLED, 128GB"},

        {"Xiaomi Pad 6", 26999, "Snapdragon 870, 11\" LCD, 128GB"},

        {"Realme Narzo 60", 17999, "Dimensity 6020, 6.6\" AMOLED, 128GB"},

        {"Poco X5 Pro", 21999, "Snapdragon 778G, 6.67\" AMOLED, 128GB"},

        {"Vivo Y100", 24999, "Dimensity 900, 6.38\" AMOLED, 128GB"},

        {"Samsung Galaxy A34", 32999, "Dimensity 1080, 6.6\" AMOLED, 128GB"},

        {"Motorola Razr 40 Ultra", 124999, "Snapdragon 8+ Gen 1, 6.9\" Foldable AMOLED, 256GB"},

        {"Sony Xperia 5 V", 94999, "Snapdragon 8 Gen 2, 6.1\" OLED, 128GB"},

        {"Asus Zenfone 10", 74999, "Snapdragon 8 Gen 2, 5.9\" AMOLED, 128GB"},

        {"Nothing Phone (1)", 32999, "Snapdragon 778G+, 6.55\" OLED, 128GB"},

        {"iQOO Neo 7", 28999, "Dimensity 8200, 6.78\" AMOLED, 128GB"},

        {"Samsung Galaxy F54", 29999, "Exynos 1380, 6.7\" AMOLED, 128GB"},

        {"Realme C55", 12999, "Helio G88, 6.72\" LCD, 128GB"},

        {"Poco C55", 10999, "Helio G85, 6.71\" LCD, 64GB"},

        {"Vivo V29", 42999, "Snapdragon 778G, 6.78\" AMOLED, 128GB"},

        {"Samsung Galaxy S23 FE", 59999, "Exynos 2200, 6.4\" AMOLED, 128GB"},

        {"Motorola G73", 18999, "Dimensity 930, 6.5\" LCD, 128GB"},

        {"Oppo Reno 10 Pro", 39999, "Dimensity 8200, 6.7\" AMOLED, 128GB"},

        {"Infinix Zero Ultra", 32999, "Dimensity 920, 6.8\" AMOLED, 256GB"},

        {"Tecno Phantom X2", 36999, "Dimensity 9000, 6.8\" AMOLED, 256GB"},

        {"Honor Magic Vs", 109999, "Snapdragon 8+ Gen 1, 7.9\" Foldable OLED, 256GB"},

        {"Realme 11 Pro+", 28999, "Dimensity 7050, 6.7\" AMOLED, 256GB"},

        {"Samsung Galaxy A14", 14999, "Exynos 850, 6.6\" PLS LCD, 64GB"},

        {"Nokia X30", 36999, "Snapdragon 695, 6.43\" AMOLED, 128GB"},

        {"Asus ROG Phone 6", 84999, "Snapdragon 8+ Gen 1, 6.78\" AMOLED, 256GB"},

        {"Huawei Mate 60 Pro", 129999, "Kirin 9000S, 6.82\" OLED, 256GB"}

    };

    // Display smartphone catalog

    for (int i = 0; i < 49; i++)

    {

        printf("%d. %s - %d\n", i + 1, smartphoneCatalog[i].name, smartphoneCatalog[i].price);
    }

    printf("\nEnter the number of the smartphone you want to add to cart, or 0 to go back: ");

    int choice;

    scanf("%d", &choice);

    if (choice > 0 && choice <= 49)

    {

        add_to_cart(smartphoneCatalog[choice - 1].name, smartphoneCatalog[choice - 1].price);
    }
}

// Function for laptops

void laptops()

{
    printf("WELCOME TO THE WORLD OF Laptops\n");

    struct laptops laptopCatalog[MAX_LAPTOPS] =
        {

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

            {"Asus ZenBook 15", 125000, "Intel i7, 16GB RAM, 512GB SSD, 15.6\" Full HD OLED Display"}};

    // Display laptop catalog

    for (int i = 0; i < 41; i++)

    {

        printf("%d. %s - %d\n", i + 1, laptopCatalog[i].name, laptopCatalog[i].priceINR);
    }

    printf("\nEnter the number of the laptop you want to add to cart, or 0 to go back: ");

    int choice;

    scanf("%d", &choice);

    if (choice > 0 && choice <= 41)

    {

        add_to_cart(laptopCatalog[choice - 1].name, laptopCatalog[choice - 1].priceINR);
    }
}

// Checkout Function

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

    int choice;

    int loginChoice;

    // Ask user to select login method

    printf("Select login method:\n");

    printf("1. Username and Password\n");

    printf("2. OTP\n");

    printf("Enter your choice: ");

    scanf("%d", &loginChoice);

    if (loginChoice == 1)

    {

        if (!username_password_login())

        {

            return 0; // Exit if login fails
        }
    }

    else if (loginChoice == 2)

    {

        if (!otp_login())

        {

            return 0; // Exit if OTP login fails
        }
    }

    else

    {

        printf("Invalid choice! Exiting...\n");

        return 0;
    }

    // Display menu after successful login

    while (1)

    {

        printf("\nWELCOME TO THE SHOPPING SYSTEM\n");

        printf("1. Headphones\n");

        printf("2. Smartphones\n");

        printf("3. Laptops\n");

        printf("4. View Cart\n");

        printf("5. Checkout\n");

        printf("6. Exit\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)

        {

        case 1:

            headphones();

            break;

        case 2:

            mobilephones();

            break;

        case 3:

            laptops();

            break;

        case 4:

            view_cart();

            break;

        case 5:

            checkout();

            break;

        case 6:

            exit(0);

        default:

            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
