//Checking the validity of username and password
#include<iostream>
using namespace std;

int main() {
    string username, password;
    int attempts = 5;

    cout << "Enter the username: ";
    cin >> username;

    while (attempts > 0) {
        cout << "\nEnter the password:\n";
        cout << "Please make sure:\n";
        cout << "1. The first letter of the password should be in capital letters.\n";
        cout << "2. The password should contain special characters like '@' or '_'.\n";
        cin >> password;

        // Check first letter is uppercase
        bool firstCapital = isupper(password[0]);

        // Check for special character
        bool hasSpecial = false;
        for (char ch : password) {
            if (ch == '@' || ch == '_') {
                hasSpecial = true;
                break;
            }
        }

        if (firstCapital && hasSpecial) {
            cout << "Welcome!";
            break;
        } else {
            attempts--;
            if (attempts > 0)
              cout << "Incorrect format. You have " << attempts << " tries left.\n";
            else
                cout << "System locked. You have exceeded the limit for today. Try again after 24 hours.";
        }
    }

    return 0;
}
