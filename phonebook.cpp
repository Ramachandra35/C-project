#include <iostream>
#include <list>
#include <string>

using namespace std;

struct Contact
{
    string name;
    string phoneNumber;
};

void addContact(list<Contact> &phonebook)
{
    Contact newContact;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, newContact.name);
    cout << "Enter phone number: ";
    getline(cin, newContact.phoneNumber);
    phonebook.push_back(newContact);
    cout << "Contact added successfully!" << endl;
}

void removeContact(list<Contact> &phonebook)
{
    string name;
    cout << "Enter name of contact to remove: ";
    cin.ignore();
    getline(cin, name);
    for (auto it = phonebook.begin(); it != phonebook.end(); ++it)
    {
        if (it->name == name)
        {
            phonebook.erase(it);
            cout << "Contact removed successfully!" << endl;
            return;
        }
    }
    cout << "Contact not found!" << endl;
}

void searchContact(const list<Contact> &phonebook)
{
    string name;
    cout << "Enter name of contact to search: ";
    cin.ignore();
    getline(cin, name);
    for (const auto &contact : phonebook)
    {
        if (contact.name == name)
        {
            cout << "Contact found!" << endl;
            cout << "Name: " << contact.name << endl;
            cout << "Phone Number: " << contact.phoneNumber << endl;
            return;
        }
    }
    cout << "Contact not found!" << endl;
}

void displayContacts(const list<Contact> &phonebook)
{
    if (phonebook.empty())
    {
        cout << "Phonebook is empty!" << endl;
        return;
    }
    cout << "Contacts:" << endl;
    for (const auto &contact : phonebook)
    {
        cout << "Name: " << contact.name << endl;
        cout << "Phone Number: " << contact.phoneNumber << endl;
        cout << endl;
    }
}

int main()
{
    list<Contact> phonebook;
    int choice;
    do
    {
        cout << "Phonebook Menu:" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Remove Contact" << endl;
        cout << "3. Search Contact" << endl;
        cout << "4. Display Contacts" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addContact(phonebook);
            break;
        case 2:
            removeContact(phonebook);
            break;
        case 3:
            searchContact(phonebook);
            break;
        case 4:
            displayContacts(phonebook);
            break;
        case 5:
            cout << "Exiting phonebook..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}
