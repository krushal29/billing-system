#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

char name[1000], email[100], password[21], password1[21], login_email[100], login_password[21];
unsigned long long int number;
int form_sub;
float sum = 0.0, SGST, CGST;

FILE *file;
FILE *file1;

struct Product
{
    char name[100];
    float price;
    int quantity;
};

void Registration();
int Password_setup();
void Submission();
int login();

int main()
{
    struct Product selectedProducts[100];
    struct Product selectedProducts1[100];
    struct Product selectedProducts2[100];
    int productCount = 0;
    int roll_no, thing, st, number1, thing_select, bill, i;

    // goto shop;
    printf("****This shop will be shopping application****\n");

    //   Registration
    file = fopen("Registration.txt", "a");

    Registration();
    //   Password setup
    Password_setup();
    fclose(file);
    system("cls");

    //  Submission or cancellation
    printf("\n \n\t \t*****verify your detail*****\n \n");
    Submission();

    // login
    printf("\n\n\t****you can login****\n \n");
    login();
    system("cls");
    // adding shop
    for (i = 0; i < 100; i++)
    {
        printf("This product in shop\n1)grocery\n2)Dairy&beverages\n3)pooja Needs\n4)personal Care\n5)Cleaning  Tools\n6)List out of Selected Products\n");
        scanf("%d", &thing);

        switch (thing)
        {
        case 1:
            for (int i = 0; i < 10; i++)
            {
                printf("0)Fortune Refined Sunflower Oil Tin:15 Litres(prize:-1620)\n");
                printf("1)Madhur pure & Hygienic Sugar:5 kgs(prize:-245)\n");
                printf("2)Saffola Gold Oil:1 Litre(prize:-152)\n");
                printf("3)Tur dal Latur:1kg(prize:-195)\n");
                printf("4)Premia Badam(Almonds):500gmas(prize:-415)\n");
                printf("5)Patanjali Cow Ghee:1Litre(prize:-665)\n");
                scanf("%d", &thing_select);

                if (thing_select == 0)
                {
                    strcpy(selectedProducts[productCount].name, "Fortune Refined Sunflower Oil Tin:15 Litres");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 1620.0;
                    selectedProducts1[productCount].price = 1620.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 1)
                {
                    strcpy(selectedProducts[productCount].name, "Madhur pure & Hygienic Sugar:5 kgs");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 245.0;
                    selectedProducts1[productCount].price = 245.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 2)
                {
                    strcpy(selectedProducts[productCount].name, "Saffola Gold Oil:1 Litre");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 152.0;
                    selectedProducts1[productCount].price = 152.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 3)
                {
                    strcpy(selectedProducts[productCount].name, "Tur dal Latur:1kg");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 195.0;
                    selectedProducts1[productCount].price = 195.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 4)
                {
                    strcpy(selectedProducts[productCount].name, "Premia Badam(Almonds):500gmas");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 415.0;
                    selectedProducts1[productCount].price = 415.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 5)
                {
                    strcpy(selectedProducts[productCount].name, "Patanjali Cow Ghee:1Litre");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 665.0;
                    selectedProducts1[productCount].price = 665.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                printf("you can:-1)exist,2)continue\n");
                scanf("%d", &st);
                if (st == 1)
                {
                    system("cls");
                    break;
                }
                system("cls");
            }
            break;
        case 2:
            for (i = 0; i < 10; i++)
            {
                printf("0)Wagh Bakri Primium Leaf Tea Pouch:1kg(prize:-486)\n");
                printf("1)Brooke Bond Red Label Tea:1kg(prize:-390)\n");
                printf("2)Taj tea:500gms(prize:-375)\n");
                printf("3)Amul Butter:500gms(prize:-265)\n");
                printf("4)Thums Up Bottle:8*250ml(prize:-130)\n");
                printf("5)Tata Tea Agni:1.5kgs(prize:-260)\n");
                scanf("%d", &thing_select);
                if (thing_select == 0)
                {
                    strcpy(selectedProducts[productCount].name, "Wagh Bakri Primium Leaf Tea Pouch:1kg");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 486.0;
                    selectedProducts1[productCount].price = 486.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 1)
                {
                    strcpy(selectedProducts[productCount].name, "Brooke Bond Red Label Tea:1kg");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 390.0;
                    selectedProducts1[productCount].price = 390.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 2)
                {
                    strcpy(selectedProducts[productCount].name, "Taj tea:500gms");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 375.0;
                    selectedProducts1[productCount].price = 375.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 3)
                {
                    strcpy(selectedProducts[productCount].name, "Amul Butter:500gms");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 265.0;
                    selectedProducts1[productCount].price = 265.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 4)
                {
                    strcpy(selectedProducts[productCount].name, "Thums Up Bottle:8*250ml");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 130.0;
                    selectedProducts1[productCount].price = 130.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 5)
                {
                    strcpy(selectedProducts[productCount].name, "Tata Tea Agni:1.5kgs");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 260.0;
                    selectedProducts1[productCount].price = 260.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }

                printf("you can:-1)exist,2)continue\n");
                scanf("%d", &st);
                if (st == 1)
                {
                    system("cls");
                    break;
                }

                system("cls");
            }
            break;
        case 3:
            for (i = 0; i < 10; i++)
            {
                printf("0)Mangalam Pure Camphor:250gms(prize:-350)\n");
                printf("1)Cycle All In 1 Pure Agarbathi:191 Units(prize:-99)\n");
                printf("2)Mangaldeep Mogra Puja Agarbattis:108 Units(prize:-38)\n");
                printf("3)Hem Soham But Mogra Agarbathi:250gms(prize:-74)\n");
                printf("4)Navin Sambrani:10 unit(prize:-10)\n");
                printf("5)Parnami Mogra Agarbatti:100gms(prize:-25)\n");
                scanf("%d", &thing_select);
                if (thing_select == 0)
                {
                    strcpy(selectedProducts[productCount].name, "Mangalam Pure Camphor:250gms");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 350.0;
                    selectedProducts1[productCount].price = 350.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 1)
                {
                    strcpy(selectedProducts[productCount].name, "Cycle All In 1 Pure Agarbathi:191 Units");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 99.0;
                    selectedProducts1[productCount].price = 99.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 2)
                {
                    strcpy(selectedProducts[productCount].name, "Mangaldeep Mogra Puja Agarbattis:108 Units");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 38.0;
                    selectedProducts1[productCount].price = 38.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 3)
                {
                    strcpy(selectedProducts[productCount].name, "Hem Soham But Mogra Agarbathi:250gms");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 74.0;
                    selectedProducts1[productCount].price = 74.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 4)
                {
                    strcpy(selectedProducts[productCount].name, "Navin Sambrani:10 unit");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 10.0;
                    selectedProducts1[productCount].price = 10.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 5)
                {
                    strcpy(selectedProducts[productCount].name, "Parnami Mogra Agarbatti:100gms");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 25.0;
                    selectedProducts1[productCount].price = 25.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                printf("you can:-1)exist,2)continue\n");
                scanf("%d", &st);
                if (st == 1)
                {
                    system("cls");
                    break;
                }
                system("cls");
            }
            break;
        case 4:
            for (i = 0; i < 10; i++)
            {
                printf("0)Hand Aid Skin Care Liquid Handwash:750ml(prize:-68)\n");
                printf("1)Znadu Pancharishta Degestive Tonic:450ml(prize:-130)\n");
                printf("2)Vaseline Intensive Care Body Lotion:400ml(prize:-225)\n");
                printf("3)Dettol Original Liquid Handwash Pump:-200ml(prize:-92)\n");
                printf("4)Dettol Skincare Soap:4*125gms(prize:-308)\n");
                printf("5)Lifebuoy Soap Germ Guard+:4*125gms(prize:-120)\n");
                scanf("%d", &thing_select);
                if (thing_select == 0)
                {
                    strcpy(selectedProducts[productCount].name, "Hand Aid Skin Care Liquid Handwash:750ml");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 68.0;
                    selectedProducts1[productCount].price = 68.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 1)
                {
                    strcpy(selectedProducts[productCount].name, "Znadu Pancharishta Degestive Tonic:450ml");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 130.0;
                    selectedProducts1[productCount].price = 130.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 2)
                {
                    strcpy(selectedProducts[productCount].name, "Vaseline Intensive Care Body Lotion:400ml");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 225.0;
                    selectedProducts1[productCount].price = 225.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 3)
                {
                    strcpy(selectedProducts[productCount].name, "Dettol Original Liquid Handwash Pump:-200ml");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 92.0;
                    selectedProducts1[productCount].price = 92.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 4)
                {
                    strcpy(selectedProducts[productCount].name, "Dettol Skincare Soap:4*125gms");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 308.0;
                    selectedProducts1[productCount].price = 308.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 5)
                {
                    strcpy(selectedProducts[productCount].name, "Lifebuoy Soap Germ Guard+:4*125gms");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 120.0;
                    selectedProducts1[productCount].price = 120.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                printf("you can:-1)exist,2)continue\n");
                scanf("%d", &st);
                if (st == 1)
                {
                    system("cls");
                    break;
                }
                system("cls");
            }
            break;
        case 5:
            for (i = 0; i < 10; i++)
            {
                printf("0)Gala Chandra Kharata Broom:1Unit(prize:-99)\n");
                printf("1)Gala Swash Stain Steel Scouer:1Unit(prize:-20)\n");
                printf("2)Scotch Brite Silver Spark Scrub Pads:6Unit(prize:-59)\n");
                printf("3)Scotch Brite Sponge Wipes-17.5cm*15cm:4Wipes(prize:-159)\n");
                printf("4)Scotch Brite Floor Cleaning Cloth Pocha-48*53cm:2Unit(prize:-135)\n");
                printf("5)Gala Double Lip Bathroom Wiper:1Unit(prize:-189)\n");
                scanf("%d", &thing_select);
                if (thing_select == 0)
                {
                    strcpy(selectedProducts[productCount].name, "Gala Chandra Kharata Broom:1Unit");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 99.0;
                    selectedProducts1[productCount].price = 99.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 1)
                {
                    strcpy(selectedProducts[productCount].name, "Gala Swash Stain Steel Scouer:1Unit");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 20.0;
                    selectedProducts1[productCount].price = 20.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 2)
                {
                    strcpy(selectedProducts[productCount].name, "Scotch Brite Silver Spark Scrub Pads:6Unit");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 59.0;
                    selectedProducts1[productCount].price = 59.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 3)
                {
                    strcpy(selectedProducts[productCount].name, "Scotch Brite Sponge Wipes-17.5cm*15cm:4Wipes");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 159.0;
                    selectedProducts1[productCount].price = 159.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 4)
                {
                    strcpy(selectedProducts[productCount].name, "Scotch Brite Floor Cleaning Cloth Pocha-48*53cm:2Unit");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 135.0;
                    selectedProducts1[productCount].price = 135.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                if (thing_select == 5)
                {
                    strcpy(selectedProducts[productCount].name, "Gala Double Lip Bathroom Wiper:1Unit");
                    printf("Enter a quantity:");
                    scanf("%d", &selectedProducts2[productCount].quantity);
                    selectedProducts[productCount].price = 189.0;
                    selectedProducts1[productCount].price = 189.0 * selectedProducts2[productCount].quantity;
                    productCount++;
                }
                printf("you can:-1)exist,2)continue\n");
                scanf("%d", &st);
                if (st == 1)
                {
                    system("cls");
                    break;
                }
                system("cls");
            }
            break;
        case 6:
            goto c;
        default:
            printf("Sorry!This product is not available.");
        }
    }

c:
    system("cls");
    printf("\n\n\t****Selected Products****\n");
    for (i = 0; i < productCount; i++)
    {
        printf("%s(prize: %.2f)(Lastprice:  %0.2f)\n", selectedProducts[i].name, selectedProducts[i].price, selectedProducts1[i].price);
        sum = sum + selectedProducts1[i].price;
    }
    printf("Total product is :%d\n", productCount);
    printf("You Need to bill \n1)Yes 2)No");
    scanf("%d", &bill);
    switch (bill)
    {
    case 1:
        printf("\n\n\t****bill generator****\n");
        file1 = fopen("bill.txt", "a");
        fprintf(file1, "This is your bill:-\n");
        for (i = 0; i < productCount; i++)
        {
            printf("%d| %s \t \t \t|prize: %.2f|quantity: %d|Lastprice: %0.2f|\n", i + 1, selectedProducts[i].name, selectedProducts[i].price, selectedProducts2[i].quantity, selectedProducts1[i].price);
            fprintf(file1, "%d| %s \t \t \t|prize: %.2f|quantity: %d|Lastprice: %0.2f|\n", i + 1, selectedProducts[i].name, selectedProducts[i].price, selectedProducts2[i].quantity, selectedProducts1[i].price);
        }
        printf("total price is :%f\n", sum);
        fprintf(file1, "total price is:-%f\n", sum);
        SGST = (sum * 0.08);
        CGST = (sum * 0.08);
        printf("SGST:-%f\n", SGST);
        fprintf(file1, "SGST:-%f\n", SGST);
        printf("CGST:-%f\n", CGST);
        fprintf(file1, "CGST:-%f\n", CGST);
        printf("Total bill with GST:-%.2f", sum + SGST + CGST);
        fclose(file1);
        break;

    default:
        break;
    }

    return 0;
}

// Registration Function
void Registration()
{

    printf("Enter your full name:-");
    scanf("%[^\n]s", name);
    fprintf(file, "Enter your full name:-%s\n", name);
    printf("Enter a your email:-");
    scanf("%s", &email);
    fprintf(file, "Enter a your email:-%s\n", email);
    printf("Enter your mobile number:-");
    scanf("%llu", &number);
    fprintf(file, "Enter your mobile number:-%llu\n", number);
}

// Password_setup Function
int Password_setup()
{
    printf("Enter a password(minmum (18-20) char):-");
    int i = 0;
    while (1)
    {
        password[i] = getch(); // Get a character without displaying it
        if (password[i] == 13)
        {                       // Enter key pressed
            password[i] = '\0'; // Null-terminate the string
            break;
        }
        else if (password[i] == 8 && i > 0)
        { // Enter key backspace
            i--;
            printf("\b \b"); //\b \b meaning last char erase
        }
        else
        {
            printf("*");
            i++;
        }
    }

    fprintf(file, "Enter your password:-%s\n", password);
    printf("\nEnter a confirm password(minmum (18-20) char):-");
    i = 0;
    while (1)
    {
        password1[i] = getch(); // Get a character without displaying it
        if (password1[i] == 13)
        {                        // Enter key pressed
            password1[i] = '\0'; // Null-terminate the string
            break;
        }
        else if (password1[i] == 8 && i > 0) // Enter key backspace
        {
            i--;
            printf("\b \b"); //\b \b meaning last char erase
        }
        else
        {
            printf("*");
            i++;
        }
    }

    if (strcmp(password, password1) == 0)
    {
        return 0;
    }
    else
    {
        printf("\npassword does same so that you need to apply same password\n");
        Password_setup();
    }
}

void Submission()
{
    printf("show your Full name:-%s\n", name);
    printf("show a your email:-%s\n", email);
    printf("show a your mobile number:-%llu\n", number);
    printf("show your password:-%s\n", password);
    //  Submission or cancellation
    printf("1)submit ,2) cancel\n");
    scanf("%d", &form_sub);
    switch (form_sub)
    {
    case 1:
        printf("your account submit sucessfull!");
        break;
    case 2:
        printf("your account cancel.please try again!\n");
        Submission();
    }
}

int login()
{
    printf("Enter your email id:-");
    scanf("%s", &login_email);
    printf("Enter your password:-");
    int i = 0;
    while (1)
    {
        login_password[i] = getch();
        if (login_password[i] == 13)
        {
            login_password[i] = '\0';
            break;
        }
        else if (login_password[i] == 8 && i > 0) // Enter key backspace
        {
            i--;
            printf("\b \b"); //\b \b meaning last char erase
        }
        else
        {
            printf("*");
            i++;
        }
    }
    if (strcmp(email, login_email) == 0 && strcmp(login_password, password) == 0)
    {
        printf("You have successfully logged in to the shopping center.\n");
        return 0;
    }
    else
    {
        printf("Incorrect email or password. Please try again.\n");
        login();
    }
}