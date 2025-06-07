#include "PPPheaders.h"

int main() {
    string first_name, friend_name;
    int age;
    cout << "Enter the name of the person you want to write to: ";
    cin >> first_name;
    cout << "Enter the name of another friend: ";
    cin >> friend_name;
    cout << "Enter the age of the recipient: ";
    cin >> age;

    cout << "\n\nDear " << first_name << ",\n\n";
    cout << "How are you? I am fine. I miss you.\n";
    cout << "Have you seen " << friend_name << " lately?\n";

    if(age <= 0 || age >= 110) {
        simple_error("you're kidding!");
    }

    cout << "I hear you just had your birthday and you are " << age << " years old.\n";

    if(age < 12) {
        cout << "Next year you will be " << (age+1) << ".\n";
    } else if(age == 17) {
        cout << "Next year you will be able to vote.\n";
    } else if(age > 70) {
        cout << "Are you retired?\n";
    }

    cout << "\nYours sincerely.\n\n\n";
    cout << "Jason\n";
    
}
