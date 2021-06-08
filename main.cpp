#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool IsLogginIn ()
{
    string username, password, un, pw; //comparison strings

    cout << "Enter username: "; cin >> username; //prompts user for username and password.
    cout << "Enter password: "; cin >> password;

    ifstream read("data\\" + username + ".txt"); //ifstream to read from files
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password) //if statement comparing un and pw to user input from prompt
    {
        return true; //user logged in
    }
    else // this executes when user inputs incorrect password
    {
        return false; //user not logged in
    }
}
