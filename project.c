#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LAPTOPS 41

#define MAX_HEADPHONES 120

#define MAX_SMARTPHONES 50
// Hardcoded username and password
#define USERNAME "siddhant"

#define PASSWORD "siddhant@123"

// Strctures for headphones
struct headphones
{

    char name[100];

    int price;

    char specs[300];
};

// structers for mobile phones
struct smartphone
{

    char name[500];

    int price;

    char specs[500];
};

// function for headphones

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

        {"Creative SXFI Air", 13999, "Wireless, Holographic Audio, High-Quality Design"}

    };

    // a switch case to showcase the catalog
    printf("1.");
}
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

        {"Huawei Mate 60 Pro", 129999, "Kirin 9000S, 6.82\" OLED, 256GB"}};
};

// Structure for laptops
struct laptops
{

    char name[500];

    int priceINR;

    char specs[500];
};

void laptops()
{

    printf("\n");

    printf("###############################################################################\n");

    printf("#                                                                             #\n");

    printf("#                         Welcome to the World of Laptops                     #\n");

    printf("#                                                                             #\n");

    printf("###############################################################################\n\n");

    struct laptops laptopCatalog[MAX_LAPTOPS] = {

        // laptop names price and specifications
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
