/*                                   This code is written by Muhammad Mudassir and
                                     this code is about train management system                                         */
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string>
using namespace std;
//---------------- Starting of Function Prototypes!!------------------------
void header();
string mainMenu();
string loginMenu();
void clearScreen();
void signUp();
void addUser(string name, string pass, string role);
char adminMenu();
char customerMenu();
void addCustomer();
void subheader();
int routes(int route);
int bookticket(int route);
int promocode(int result);
string feedback();
string msg();
void announcement(bool announcements);
void viewAnnouncement(string announce);
void viewCustomer();
void addtrain();
void viewtrain();
void viewschedule();
void services();
void adddrivers();
void viewdrivers();
void contactdrivers();
//------------ Ending of Function Prototypes!!----------------------------------

// Starting of Data Structures!!
const int MAX_RECORDS = 20;
string usernameA[MAX_RECORDS];
string passwordsA[MAX_RECORDS];
string rolesA[MAX_RECORDS];
int userCount = 0;
int count = 0;
string loginusername = " ";
const int TOTAL_USER = 10;
int count_user = 0;
const int TOTAL_CUSTOMER = 5;
int count_customer = 0;
string customer_name[TOTAL_CUSTOMER];
const int TOTAL_TRAINS = 5;
int count_trains = 0;
string train[TOTAL_TRAINS];
string time[TOTAL_TRAINS];
int count_drivers = 0;
string driver[500];
double numberofdrivers[500];
float numberA[TOTAL_CUSTOMER];
int routeA[TOTAL_TRAINS];
int count_service = 0;
string service[TOTAL_TRAINS];
int route;
int promo[4];
int result = 0;
bool announcements = false;
string announce;
string name;
int number[11];
// ---------------------------Ending of Data Structures!!--------------------------------------

// -------------------------- Starting of main ------------------------------------------------
main()
{                                     // Starting of main implementation!!
    addUser("admin", "123", "ADMIN"); //------------DEFAULT VALUE SET----------
    string w = "";
    while (true)
    {
        string op = mainMenu();
        clearScreen();
        if (op == "1")
        {
            while (true)
            {
                w = loginMenu();
                if (w == "ADMIN")
                {
                    system("cls");
                    char adminoption = ' ';
                    while (true)
                    {
                        adminoption = adminMenu();
                        if (adminoption == '1')
                        {
                            // View Passengers
                            system("cls");
                            header();
                            viewCustomer();
                            char option;
                            cout << "Enter 1 to go back to menu..";
                            cin >> option;
                            system("cls");
                            adminMenu();
                        }
                        else if (adminoption == '2')
                        {
                            // Add train
                            system("cls");
                            header();
                            addtrain();
                            char option;
                            cout << "Enter 1 to go back to menu..";
                            cin >> option;
                            system("cls");
                            adminMenu();
                        }
                        else if (adminoption == '3')
                        {
                            // View train
                            system("cls");
                            header();
                            viewtrain();
                            char option;
                            cout << "Enter 1 to go back to menu..";
                            cin >> option;
                            system("cls");
                            adminMenu();
                        }
                        else if (adminoption == '4')
                        {
                            // View schedule
                            system("cls");
                            header();
                            viewschedule();
                            char option;
                            cout << "Enter 1 to go back to menu..";
                            cin >> option;
                            system("cls");
                            adminMenu();
                        }
                        else if (adminoption == '5')
                        {
                            // Announcement
                            system("cls");
                            header();
                            announcement(announcements);
                            char option;
                            cout << "Enter 1 to go back to menu..";
                            cin >> option;
                            system("cls");
                            adminMenu();
                        }
                        else if (adminoption == '6')
                        {
                            // Train Services
                            system("cls");
                            header();
                            services();
                            char option;
                            cout << "Enter 1 to go back to menu..";
                            cin >> option;
                            system("cls");
                            adminMenu();
                        }
                        else if (adminoption == '7')
                        {
                            // Add Drivers
                            system("cls");
                            header();
                            adddrivers();
                            char option;
                            cout << "Enter 1 to go back to menu..";
                            cin >> option;
                            system("cls");
                            adminMenu();
                        }
                        else if (adminoption == '8')
                        {
                            // View Drivers
                            system("cls");
                            header();
                            viewdrivers();
                            char option;
                            cout << "Enter 1 to go back to menu..";
                            cin >> option;
                            system("cls");
                            adminMenu();
                        }
                        else if (adminoption == '9')
                        {
                            // Contact Drivers
                            system("cls");
                            header();
                            contactdrivers();
                            char option;
                            cout << "Enter 1 to go back to menu..";
                            cin >> option;
                            system("cls");
                            adminMenu();
                        }
                        else if (adminoption == '0')
                        {
                            // Log Out
                            break;
                        }
                    }
                }
                else if (w == "CUSTOMER")
                {
                    system("cls");
                    char customeroption = ' ';
                    while (true)
                    {
                        customeroption = customerMenu();
                        if (customeroption == '1')
                        {
                            // Add Information
                            system("cls");
                            header();
                            addCustomer();
                            char option;
                            cout << "Enter 1 to go back to menu..";
                            cin >> option;
                            system("cls");
                            customerMenu();
                        }
                        else if (customeroption == '2')
                        {
                            // Book ticket
                            system("cls");
                            header();
                            int result = bookticket(route);
                            cout << "The price of your ticket(s) is: " << result << endl;
                            cout << "Your ticket has been successfully booked!!" << endl;
                            int option;
                            cout << "Enter 1 to go to main menu..";
                            cin >> option;
                            system("cls");
                            customerMenu();
                        }
                        else if (customeroption == '3')
                        {
                            // Cancel Ticket
                            system("cls");
                            header();
                            int option;
                            cout << "Enter 1 to go to main menu..";
                            cin >> option;
                            customerMenu();
                        }
                        else if (customeroption == '4')
                        {
                            // Enter promocode
                            system("cls");
                            header();
                            int discount = promocode(result);
                            cout << "Your new ticket price: " << discount << endl;
                            int option;
                            cout << "Enter 1 to go to main menu..";
                            cin >> option;
                            system("cls");
                            customerMenu();
                        }
                        else if (customeroption == '5')
                        {
                            // Feedback
                            system("cls");
                            header();
                            string s = feedback();
                            cout << s;
                            int option;
                            cout << "Enter 1 to go to main menu..";
                            cin >> option;
                            system("cls");
                            customerMenu();
                        }
                        else if (customeroption == '6')
                        {
                            // DM to Admin
                            system("cls");
                            header();
                            string m = msg();
                            cout << m;
                            int option;
                            cout << "Enter 1 to go to main menu..";
                            cin >> option;
                            system("cls");
                            customerMenu();
                        }
                        else if (customeroption == '7')
                        {
                            // View Anouncements
                            system("cls");
                            header();
                            viewAnnouncement(announce);
                            int option;
                            cout << "Enter 1 to go to main menu..";
                            cin >> option;
                            system("cls");
                            customerMenu();
                        }
                        else if (customeroption == '8')
                        {
                            // Logout
                            break;
                        }
                        else
                        {
                            cout << "You entered invalid option!! ";
                        }
                    }
                }
                break;
            }
        }
        else if (op == "2")
        {
            signUp();
        }
        else if (op == "3")
        {
            break;
        }
    } // end of while
}
// Ending of main!!

// ---------------------------Ending of main --------------------------------------------------

// Starting of function definition!!
void header()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "      **************************************    " << endl;
    cout << "      ***   RAILWAY MANAGEMENT SYSTEM    ***    " << endl;
    cout << "      **************************************    " << endl;
    cout << endl;
    cout << endl;
}
string mainMenu()
{
    system("cls");
    string op = " ";
    header();
    cout << "1. Sign In" << endl;
    cout << "2. Sign Up" << endl;
    cout << "3. Exit" << endl;
    cout << "choose one option : ";
    cin >> op;
    return op;
}
void signUp()
{
    string tempRoll = " ";
    string tempName = " ";
    string tempRole = " ";
    header();
    cout << " Main menu << Sign Up ";
    cout << "Enter user name : ";
    cin >> tempName;
    cout << "Enter Password : ";
    cin >> tempRoll;
    cout << "Enter Role : ";
    cin >> tempRole;
    addUser(tempName, tempRoll, tempRole);
}
bool find(string userName)
{
    for (int i = 0; i < userCount; i++)
    {
        if (userName == usernameA[i])
        {
            return true;
        }
    }
    return false;
}
void clearScreen()
{ //____clear screen_____
    cout << "Press any key to continue " << endl;
    getch();
    system("CLS");
}
string loginMenu()
{ //________Get user credentials and check whether user is present in
    string tempRoll = " ";
    string tempName = " ";
    header();
    cout << "Enter user name : ";
    cin >> tempName;
    cout << "Enter Password : ";
    cin >> tempRoll;
    for (int x = 0; x < MAX_RECORDS; x++)
    {
        if (usernameA[x] == tempName && passwordsA[x] == tempRoll)
        {
            loginusername = tempName;
            return rolesA[x];
        }
    }
    loginusername = " ";
    string temp = "EXIT";
    return temp;
}
void addUser(string name, string pass, string role)
{ // -----------Add user, only admin can add----------
    if (userCount < MAX_RECORDS)
    {
        if (find(name))
        {
            cout << "User already exists." << endl;
        }
        else if (role != "ADMIN" && role != "CUSTOMER")
        {
            cout << "You Cannot add this charecter" << endl;
        }
        else
        {
            usernameA[userCount] = name;
            passwordsA[userCount] = pass;
            rolesA[userCount] = role;
            userCount++;
        }
    }
    else
    {
        cout << "No more space to add user." << endl;
    }
}
char adminMenu()
{
    header();
    cout << "Main Menu >> SignIn ";
    cout << " <<<<<<<<<<<<<<<WELCOME_ADMIN>>>>>>>>>>>>>>>" << endl;
    cout << "   *****************************************" << endl;
    cout << " ||      CHOOSE YOUR OPERATION     ||     " << endl;
    cout << "  ||--------------------------------------||" << endl;
    cout << "  ||      [1] VIEW PASSENGERS             ||  " << endl;
    cout << "  ||      [2] ADD TRAIN                   ||" << endl;
    cout << "  ||      [3] VIEW TRAIN                  ||" << endl;
    cout << "  ||      [4] VIEW SCHEDULE               ||" << endl;
    cout << "  ||      [5] ANNOUNCEMENT                || " << endl;
    cout << "  ||      [6] TRAIN SERVICES              ||" << endl;
    cout << "  ||      [7] ADD DRIVERS                 ||" << endl;
    cout << "  ||      [8] VIEW DRIVERS                ||" << endl;
    cout << "  ||      [9] CONTACT DRIVERS             ||" << endl;
    cout << "  ||      [0] LOG OUT                     ||" << endl;
    cout << "*********************************************" << endl;
    char option;
    cout << "Enter your option: ";
    cin >> option;
    system("cls");
    return option;
}
char customerMenu()
{
    header();
    cout << " Main menu >> SignIn "<<endl;
    cout << " <<<<<<<<<<WELCOME USERS>>>>>>>>>>" << endl;
    cout << "                 MENU             " << endl;
    cout << "            [1] ADD INFORMATION   " << endl;
    cout << "            [2] BOOK TICKET       " << endl;
    cout << "            [3] CANCEL TICKET     " << endl;
    cout << "            [4] ENTER PROMOCODE   " << endl;
    cout << "            [5] FEEDBACK          " << endl;
    cout << "            [6] DM TO ADMIN       " << endl;
    cout << "            [7] VIEW ANNOUNCEMENT " << endl;
    cout << "            [8] EXIT              " << endl;
    cout << "**********************************" << endl;
    char option;
    cout << "        ENTER YOUR CHOICE:...";
    cin >> option;
    system("cls");
    return option;
}
void addCustomer()
{
    cout << "Enter your name: ";
    cin >> customer_name[count_customer];
    cout << "Enter Your phone number: ";
    cin >> numberA[count_customer];
    count_customer++;
}
void viewCustomer()
{
    for (int i = 0; i < count_customer; i++)
    {
        cout << customer_name[i] << "\t" << numberA[i] << endl;
    }
}
void subheader()
{
    cout << "****Enter one of the following rotes****" << endl;
    cout << "****************************************" << endl;
    cout << "1-Lahore To Karachi................" << endl;
    cout << "2-Karachi To Lahore................" << endl;
    cout << "3-Sialkot To Lahore................" << endl;
    cout << "4-Kashmir To Karachi..............." << endl;
    cout << "5-Peshawar To Sargodha............." << endl;
    cout << "****************************************" << endl;
}
int routes(int route)
{
    routeA[count_customer] = route;
    count_customer = count_customer + 1;
}
int bookticket(int route)
{
    subheader();
    cout << "Enter route which you want: ";
    cin >> route;
    int quantity;
    cout << "Enter quantity of tickets: ";
    cin >> quantity;
    if (route == 1)
    {
        result = quantity * 1000;
    }
    else if (route == 2)
    {
        result = quantity * 900;
    }
    else if (route == 3)
    {
        result = quantity * 800;
    }
    else if (route == 4)
    {
        result = quantity * 700;
    }
    else if (route == 5)
    {
        result = quantity * 600;
    }
    else
    {
        system("cls");
        cout << "No route find: " << endl;
    }
    if (route == 1 || route == 2 || route == 3 || route == 4 || route == 5)
    {
        return result;
    }
    else
    {
        bookticket(route);
    }
}
int promocode(int result)
{
    int discount, result1;
    cout << "Enter promo code: ";
    for (int i = 0; i < 4; i++)
    {
        cin >> promo[i];
    }
    if (promo[0] == 1 && promo[1] == 2 && promo[2] == 3 && promo[3] == 4)
    {
        result1 = result * 0.1;
        discount = result - result1;
        cout << "Conguratulations! You get discount for your promo code!! " << endl;
        return discount;
    }
    else
    {
        cout << "No promo code exist: " << endl;
        return result;
    }
}
string feedback()
{
    bool found = false;
    string feed[10];
    cout << "Enter Feedback(within 10 words): ";
    for (int i = 0; i < 2; i++)
    {
        getline(cin, feed[i]);
    }
    int i;
    for (i = 0; i < 2; i++)
    {
        feed[i];
        found = true;
    }
    if (found == true)
    {
        return feed[i];
    }
}
string msg()
{
    bool found = false;
    string message[10];
    cout << "Enter Message To ADMIN(within 10 words): ";
    for (int i = 0; i < 2; i++)
    {
        getline(cin, message[i]);
    }
    int i;
    for (i = 0; i < 2; i++)
    {
        message[i];
        found = true;
    }
    if (found == true)
    {
        return message[i];
    }
}
void announcement(bool announcements)
{
    char ann;
    cout << "Press 2 for announcements: ";
    cin >> ann;
    string announce;
    if (ann == '2')
    {
        announcements = true;
        cout << "Announcements begin: ";
        cin >> announce;
    }
    viewAnnouncement(announce);
}
void viewAnnouncement(string announce)
{
    cout << " " << announce;
}
void addtrain()
{
    cout << "*********ADD TRAIN*************" << endl;
    cout << "Add train!!: ";
    cin >> train[count_trains];
    cout << "Enter time: ";
    cin >> time[count_trains];
    count_trains++;
}
void viewtrain()
{
    for (int i = 0; i < count_trains; i++)
    {
        cout << train[i] << endl;
    }
}
void viewschedule()
{
    cout << "Train "
         << "\t"
         << "Time " << endl;
    for (int i = 0; i < count_trains; i++)
    {
        cout << train[i] << "\t" << time[i] << endl;
    }
}
void services()
{
    for (int i = 0; i < count_trains; i++)
    {
        cout << "Trains "
             << "\t" << endl;
        cout << train[i] << endl;
    }
    cout << "Enter conditon of trains: ";
    cin >> service[count_service];
    if (service[count_service] == "new")
    {
        cout << "No service required!!" << endl;
    }
    else
    {
        cout << "Service is required!!" << endl;
    }
    count_service++;
}
void adddrivers()
{
    cout << "Enter name of driver: ";
    cin >> driver[count_drivers];
    cout << "Enter number of driver: ";
    cin >> numberofdrivers[count_drivers];
    count_drivers++;
}
void viewdrivers()
{
    cout << " Drivers " << endl;
    for (int i = 0; i < count_drivers; i++)
    {
        cout << " " << driver[i] << endl;
    }
}
void contactdrivers()
{
    cout << " Drivers "
         << "\t"
         << " Numbers " << endl;
    for (int i = 0; i < count_drivers; i++)
    {
        cout << driver[i] << "\t" << numberofdrivers[i] << endl;
    }
}
// ------------------------------------Ending of function definition!!------------------------

//-------------------------------------Program Ends-------------------------------------------