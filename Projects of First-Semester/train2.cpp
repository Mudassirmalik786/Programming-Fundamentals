/*                                   This code is written by Muhammad Mudassir and
                                     this code is about train management system                                         */

//-------------------------------------Libraries Include------------------------------

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string>
#include <string.h>

using namespace std;

// Ending of Libraries

//------------------------Function Prototypes----------------------------------------

void header();
int mainMenu();
void clearScreen();
void signUp();
string loginMenu();
bool foundCredentials(string userName, string password, string role);
bool isValidUsername(string userName);
void signUpArray(string userName, string password, string role);
void CrediantialsstoreInFile(string userName, string password, string role);
char adminMenu();
void viewCustomers();
void addtrain();
void readTrainFromFile();
void viewTrain();
void viewSchedule();
void announcement();
void viewAnnouncement();
void readDataFromFile();
void services();
void adddrivers();
void viewdrivers();
void readDriversFromFile();
void contactDrivers();
char customerMenu();
void addCustomer();
void subheader();
void bookticket();
void readTicketsFromFile();
void feedBack();
void viewfeedback();
void deleteTicket();
void dmToAdmin();
void promocode();

//------------------------Ending of Function Prototypes-------------------------------

// ------------------------Data Structures--------------------------------------------

string userNames[100];
string passwords[100];
string roles[100];
int userCount = 0;
int count_trains = 0;
string trains[100];
string times[100];
int count_service = 0;
string service[100];
int count_drivers = 0;
string driver[100];
string numberofdrivers[100];
int count_customer = 0;
string resultA[100];
string nameT[100];
string destinationT[100];
int num_ticketsT[100];
int total_costT[100];
int promoA[100];
int count_promo = 0;

// ------------------------Ending of Data Structures----------------------------------

// Starting of main function

main()
{
    signUpArray("mudassir", "123", "ADMIN");
    // readTicketsFromFile();
    readDataFromFile();
    readTrainFromFile();
    readDriversFromFile();
    string train, time;
    string option = "";
    int choice = 4, route;
    while (choice != 3)
    {
        choice = mainMenu();
        clearScreen();
        if (choice == 1)
        {
            signUp();
        }
        else if (choice == 2)
        {
            // while (true)
            //{
            option = loginMenu();
            if (option == "ADMIN" || option == "Admin" || option == "admin")
            {
                system("cls");
                char adminoption = ' ';
                while (adminoption != '0')
                {
                    adminoption = adminMenu();
                    if (adminoption == '1')
                    {
                        // View Passengers
                        system("cls");
                        header();
                        viewCustomers();
                    }
                    if (adminoption == '2')
                    {
                        // Add train
                        system("cls");
                        header();
                        addtrain();
                    }
                    if (adminoption == '3')
                    {
                        // View Trains
                        system("cls");
                        header();
                        viewTrain();
                    }
                    if (adminoption == '4')
                    {
                        // View Schedule
                        system("cls");
                        header();
                        viewSchedule();
                    }
                    if (adminoption == '5')
                    {
                        // Announcement by ADMIN
                        system("cls");
                        header();
                        announcement();
                    }
                    if (adminoption == '6')
                    {
                        // Service of Train
                        system("cls");
                        header();
                        services();
                    }
                    if (adminoption == '7')
                    {
                        // Add Drivers
                        system("cls");
                        header();
                        adddrivers();
                    }
                    if (adminoption == '8')
                    {
                        // View Drivers
                        system("cls");
                        header();
                        viewdrivers();
                    }
                    if (adminoption == '9')
                    {
                        // Contact Drivers
                        system("cls");
                        header();
                        contactDrivers();
                    }
                    if (adminoption == 'A')
                    {
                        // View Feedback
                        system("cls");
                        header();
                        viewfeedback();
                    }
                }
            }
            if (option == "CUSTOMER" || option == "Customer" || option == "customer")
            {
                system("cls");
                char customeroption = ' ';
                while (customeroption != '8')
                {
                    customeroption = customerMenu();
                    if (customeroption == '1')
                    {
                        // Add Information
                        system("cls");
                        header();
                        addCustomer();
                    }
                    if (customeroption == '2')
                    {
                        // Book Ticket
                        system("cls");
                        header();
                        bookticket();
                    }
                    if (customeroption == '3')
                    {
                        // Cancel Ticket
                        system("cls");
                        header();
                        deleteTicket();
                    }
                    if (customeroption == '4')
                    {
                        // Enter Promocode
                        system("cls");
                        header();
                        promocode();
                    }
                    if (customeroption == '5')
                    {
                        // FeedBack
                        system("cls");
                        header();
                        feedBack();
                    }
                    if (customeroption == '6')
                    {
                        // DM To ADMIN
                        system("cls");
                        header();
                        dmToAdmin();
                    }
                    if (customeroption == '7')
                    {
                        // View Announcements
                        system("cls");
                        header();
                        viewAnnouncement();
                    }
                }
            }
            //}
        }
        else
        {
            cout << "Not valid Entrance ";
        }
    }
}
// Ending of main function

//-------------------------------Starting of Function Definition--------------------------------

void header()
{
    cout << endl;
    cout << "  ___  ___  _  _    _ _ _  ___  _ _   __ __  ___  _ _  ___  ___   ___  __ __  ___  _ _  ___   ___  _ _  ___  ___  ___  __ __  " << endl;
    cout << " | . || . || || |  | | | || . || | | |  |  || . || | || . |/  _> | __>|  |  || __>| | ||_ _| / __>| | |/ __>|_ _|| __>|  |  | " << endl;
    cout << " |   /|   || || |_ | | | ||   ||   / |     ||   ||   ||   || <_/|| _> |     || _> |   | | |  |__ \\   /|__ | | | | _> |     | " << endl;
    cout << " |_|_||_|_||_||___||__/_/ |_|_| |_|  |_|_|_||_|_||_|_||_|_|`____/|___>|_|_|_||___>|_|_| |_|  <___/ |_| <___/ |_| |___>|_|_|_| " << endl;
    cout << endl;
    cout << endl;
}

int mainMenu()
{
    system("cls");
    int op = 0;
    header();
    cout << "1. Sign Up" << endl;
    cout << "2. Sign In" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter one option : ";
    cin >> op;
    return op;
}

void clearScreen()
{ //____clear screen_____
    cout << "Press any key to continue " << endl;
    getch();
    system("CLS");
}

void signUp()
{
    bool found;
    string userName;
    string password;
    string role;
    header();
    cout << "Enter your username: ";
    getline(cin >> ws, userName);
    cout << "Enter your password: ";
    cin >> password;
    cout << "Enter your role: ";
    cin >> role;
    found = isValidUsername(userName);
    if (found == true)
    {
        signUpArray(userName, password, role);
        CrediantialsstoreInFile(userName, password, role);
        cout << "You have Successfully Created your account!! " << endl;
    }
    else if (found == false)
    {
        cout << "Username already exists" << endl;
    }
    clearScreen();
}

bool foundCredentials(string userName, string password, string role)
{
    bool found = false;
    for (int idx = 0; idx < userCount; idx++)
    {
        if (userNames[idx] == userName && passwords[idx] == password && roles[idx] == role)
        {
            found = true;
            break;
        }
    }
    return found;
}

string loginMenu()
{
    bool found;
    string userName;
    string password;
    string role;
    header();
    cout << "Enter your username: ";
    cin >> userName;
    cout << "Enter your password: ";
    cin >> password;
    cout << "Enter your role: ";
    cin >> role;
    found = foundCredentials(userName, password, role);
    if (found == true)
    {
        cout << "Login Successful" << endl;
        return role;
    }
    else
    {
        cout << "Invalid Credentials" << endl;
    }
}

bool isValidUsername(string userName)
{
    bool flag = true;
    for (int i = 0; i < userCount; i++)
    {
        if (userNames[i] == userName)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

void signUpArray(string userName, string password, string role)
{
    userNames[userCount] = userName;
    passwords[userCount] = password;
    roles[userCount] = role;
    userCount++;
}

char adminMenu()
{
    header();
    cout << "Main Menu >> SignIn " << endl;
    cout << " <<<<<<<<<<<<<<<WELCOME_ADMIN>>>>>>>>>>>>>>>" << endl;
    cout << "   *****************************************" << endl;
    cout << "  ||      CHOOSE YOUR OPERATION           ||" << endl;
    cout << "  ||--------------------------------------||" << endl;
    cout << "  ||      [1] VIEW PASSENGERS             ||" << endl;
    cout << "  ||      [2] ADD TRAIN                   ||" << endl;
    cout << "  ||      [3] VIEW TRAIN                  ||" << endl;
    cout << "  ||      [4] VIEW SCHEDULE               ||" << endl;
    cout << "  ||      [5] ANNOUNCEMENT                ||" << endl;
    cout << "  ||      [6] TRAIN SERVICES              ||" << endl;
    cout << "  ||      [7] ADD DRIVERS                 ||" << endl;
    cout << "  ||      [8] VIEW DRIVERS                ||" << endl;
    cout << "  ||      [9] CONTACT DRIVERS             ||" << endl;
    cout << "  ||      [A] VIEW FEEDBACK               ||" << endl;
    cout << "  ||      [0] LOG OUT                     ||" << endl;
    cout << "********************************************" << endl;
    char option;
    cout << "Enter your option: ";
    cin >> option;
    system("cls");
    return option;
}

char customerMenu()
{
    header();
    cout << " Main menu >> SignIn " << endl;
    cout << " <<<<<<<<<< WELCOME USERS >>>>>>>>>>>>>" << endl;
    cout << " ||                MENU            || " << endl;
    cout << " ||        [1] ADD INFORMATION     || " << endl;
    cout << " ||        [2] BOOK TICKET         || " << endl;
    cout << " ||        [3] CANCEL TICKET       || " << endl;
    cout << " ||        [4] ENTER PROMOCODE     || " << endl;
    cout << " ||        [5] FEEDBACK            || " << endl;
    cout << " ||        [6] DM TO ADMIN         || " << endl;
    cout << " ||        [7] VIEW ANNOUNCEMENT   || " << endl;
    cout << " ||        [8] EXIT                || " << endl;
    cout << "**************************************" << endl;
    char option;
    cout << "        ENTER YOUR CHOICE:...";
    cin >> option;
    system("cls");
    return option;
}

void addCustomer()
{
    string name;
    cout << "Enter Your name: ";
    getline(cin >> ws, name);
    string number;
    cout << "Enter your phone number: ";
    cin >> number;
    clearScreen();
}

void viewCustomers()
{
    cout << "Usernames"
         << "\t\t"
         << "Passwords" << endl
         << endl;
    for (int idx = 0; idx < userCount; idx++)
    {
        cout << userNames[idx] << "\t\t" << passwords[idx] << endl;
    }
    clearScreen();
}

void addtrain()
{
    string train;
    string time;
    cout << "*********ADD TRAIN*************" << endl;
    cout << "Add train: ";
    getline(cin >> ws, train);
    cout << "Enter time: ";
    cin >> time;
    fstream file;
    file.open("trains.txt", ios::app);
    file << train << endl;
    file << time << endl;
    file.close();
    clearScreen();
}

void CrediantialsstoreInFile(string userName, string password, string role)
{
    fstream file;
    file.open("customers.txt", ios::app);
    file << userName << endl;
    file << password << endl;
    file << role << endl;
    file.close();
}

void readDataFromFile()
{
    string username;
    string password;
    string role;
    fstream file;
    file.open("customers.txt", ios::in);
    while (getline(file, username) && getline(file, password) && getline(file, role))
    {
        userNames[userCount] = username;
        passwords[userCount] = password;
        roles[userCount] = role;
        userCount++;
    }
    file.close();
}

void readTrainFromFile()
{
    string train, time;
    fstream file;
    file.open("trains.txt", ios::in);
    while (getline(file, train) && getline(file, time))
    {
        trains[count_trains] = train;
        times[count_trains] = time;
        count_trains++;
    }
    file.close();
}

void viewTrain()
{
    cout << "Trains" << endl;
    for (int i = 0; i < count_trains; i++)
    {
        cout << trains[i] << endl;
    }
    clearScreen();
}

void viewSchedule()
{
    cout << "Train "
         << "\t"
         << "Time " << endl;
    for (int i = 0; i < count_trains; i++)
    {
        cout << trains[i] << "\t" << times[i] << endl;
    }
    clearScreen();
}

void announcement()
{
    string announce;
    fstream file;
    cout << "Announcement: " << endl;
    getline(cin >> ws, announce);
    file.open("announcement.txt", ios::out);
    file << announce << endl;
    file.close();
    clearScreen();
}

void viewAnnouncement()
{
    fstream file;
    string line;
    file.open("announcement.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
        cout << line << endl;
    }
    file.close();
    clearScreen();
}

void services()
{
    for (int i = 0; i < count_trains; i++)
    {
        cout << "Trains "
             << "\t" << endl;
        cout << trains[i] << endl;
    }
    cout << "Enter conditon of trains: ";
    cin >> service[count_service];
    if (service[count_service] == "new" || service[count_service] == "New")
    {
        cout << "No service required!!" << endl;
    }
    else
    {
        cout << "Service is required!!" << endl;
    }
    count_service++;
    clearScreen();
}

void adddrivers()
{
    string drive;
    string noOfDriver;
    cout << "Enter name of driver: ";
    getline(cin >> ws, drive);
    cout << "Enter number of driver: ";
    cin >> noOfDriver;
    fstream file;
    file.open("drivers.txt", ios::app);
    file << drive << endl;
    file << noOfDriver << endl;
    file.close();
    clearScreen();
}

void readDriversFromFile()
{
    string drive;
    string noOfDriver;
    fstream file;
    file.open("drivers.txt", ios::in);
    while (getline(file, drive) && getline(file, noOfDriver))
    {
        driver[count_drivers] = drive;
        numberofdrivers[count_drivers] = noOfDriver;
        count_drivers++;
    }
    file.close();
}

void viewdrivers()
{
    cout << "Drivers" << endl;
    for (int i = 0; i < count_drivers; i++)
    {
        cout << driver[i] << endl;
    }
    clearScreen();
}

void contactDrivers()
{
    cout << " Drivers "
         << "\t\t"
         << " Numbers " << endl;
    for (int i = 0; i < count_drivers; i++)
    {
        cout << driver[i] << "\t\t" << numberofdrivers[i] << endl;
    }
    clearScreen();
}

void subheader()
{
    cout << "****Following are the available routes****" << endl;
    cout << "****************************************" << endl;
    cout << "1-Karachi to Lahore................" << endl;
    cout << "2-Sialkot to Lahore................" << endl;
    cout << "3-Kashmir to Karachi..............." << endl;
    cout << "4-Peshawar to Sargodha............." << endl;
    cout << "5-Narowal To Faisalabad............" << endl;
    cout << "****************************************" << endl;
}

void bookticket()
{
    subheader();
    string name, destination, id;
    int num_tickets = 1, total_cost = 1;
    cout << "Enter your name: ";
    getline(cin >> ws, name);
    cout << "Enter your destination(format: source to destination): ";
    getline(cin >> ws, destination);
    cout << "Enter the number of tickets: ";
    cin >> num_tickets;
    cout << "Enter your pin: ";
    cin >> id;
    cout << "Ticket booked successfully!" << endl;
    if (destination == "Karachi to Lahore")
    {
        total_cost = num_tickets * 1000;
    }
    else if (destination == "Sialkot to Lahore")
    {
        total_cost = num_tickets * 900;
    }
    else if (destination == "Kashmir to Karachi")
    {
        total_cost = num_tickets * 800;
    }
    else if (destination == "Peshawar to Sargodha")
    {
        total_cost = num_tickets * 700;
    }
    else if (destination == "Narowal to Faisalabad")
    {
        total_cost = num_tickets * 600;
    }
    else
    {
        system("cls");
        cout << "No route find: " << endl;
    }
    if (destination == "Karachi to Lahore" || destination == "Sialkot to Lahore" || destination == "Kashmir to Karachi" || destination == "Peshawar to Sargodha" || destination == "Narowal to Faisalabad")
    {
        fstream file;
        file.open("train_ticket.txt", ios::app);
        file << "Name: " << name << endl;
        file << "Destination: " << destination << endl;
        file << "Number of tickets: " << num_tickets << endl;
        file << "Total cost: " << total_cost << endl;
        file.close();
    }
    clearScreen();
}

/*void readTicketsFromFile()
{
    string name;
    string destination;
    int num_tickets;
    int total_cost;
    fstream file;
    file.open("train_ticket.txt", ios::in);
    while (!file.eof())
    {
        getline(file, name);
        getline(file, destination);
        file >> num_tickets;
        file >> total_cost;
        nameT[count_customer] = name;
        destinationT[count_customer] = destination;
        num_ticketsT[count_customer] = num_tickets;
        total_costT[count_customer] = total_cost;
        count_customer++;
    }
    file.close();
}
void viewTickets()
{
    cout << "*******BookTickets**********" << endl;
    cout << "Name "
         << "\t"
         << "Destination "
         << "\t\t"
         << "Number Of Tickets "
         << "\t"
         << "TotalCost " << endl;
    for (int i = 0; i < count_customer; i++)
    {
        cout << nameT[i] << "\t" << destinationT[i] << "\t" << num_ticketsT[i] << "\t" << total_costT[i] << endl;
    }
    clearScreen();
}*/

void feedBack()
{
    string feed;
    cout << "*********************************" << endl;
    cout << "          FeedBack               " << endl;
    cout << "*********************************" << endl;
    cout << endl;
    getline(cin >> ws, feed);
    fstream file;
    file.open("feedback.txt", ios::app);
    file << feed << endl;
    file.close();
    clearScreen();
}

void viewfeedback()
{
    string feed;
    cout << "*********************************" << endl;
    cout << "          FeedBack               " << endl;
    cout << "*********************************" << endl;
    cout << endl;
    fstream file;
    file.open("feedback.txt", ios::in);
    while (!file.eof())
    {
        file >> feed;
        cout << feed << " ";
    }
    file.close();
    cout << endl;
    clearScreen();
}

void deleteTicket()
{
    string id1;
    cout << "Enter your ID to delete: ";
    cin >> id1;
    ifstream inFile("train_ticket.txt");
    ofstream outFile("temp.txt");
    string line;
    bool found = false;
    while (getline(inFile, line))
    {
        size_t pos = line.find(',');
        if (pos != string::npos)
        {
            string id = line.substr(pos + 1, 6);
            if (id == id1)
            {
                found = true;
            }
            else
            {
                outFile << line << '\n';
            }
        }
    }
    inFile.close();
    outFile.close();
    if (found == true)
    {
        remove("train_ticket.txt");
        rename("temp.txt", "train_tocket.txt");
        cout << "Identity " << id1 << " has been deleted.\n";
    }
    else
    {
        remove("temp.txt");
        cout << "Identity " << id1 << " not found.\n";
    }
    clearScreen();
}

void dmToAdmin()
{
    string line;
    cout << "Enter what you want to tell to ADMIN: " << endl;
    getline(cin >> ws, line);
    clearScreen();
}

void promocode()
{
    int promo;
    cout << "Enter promocode(within 4 digit): ";
    cin >> promo;
    float total;
    if (promo == 1234)
    {
        promo = total_costT[count_promo] * 0.1;
        cout << "Congurations You get 10 percent discount!!" << endl;
    }
    else
    {
        cout << "No such promocode!! " << endl;
    }
    fstream file;
    file.open("train_ticket.txt", ios::app);
    file << "Price after promocode: " << total << endl;
    count_promo++;
    file.close();
    clearScreen();
}

// -----------------------------------Ending of function Definition------------------------