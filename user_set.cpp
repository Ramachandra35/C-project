#include <iostream>
#include <set>
#include <string>
using namespace std;
class UserManager
{
private:
    set<string> usernames;

public:
    void addUser(const string &username)
    {
        if (usernames.find(username) != usernames.end())
        {
            cout << "❌ Username already taken! Try another.\n";
        }
        else
        {
            usernames.insert(username);
            cout << "✅ Username '" << username << "' added successfully!\n";
        }
    }

    void removeUser(const string &username)
    {
        if (usernames.erase(username))
        {
            cout << "✅ Username '" << username << "' removed successfully!\n";
        }
        else
        {
            cout << "❌ Username not found!\n";
        }
    }

    void displayUsers()
    {
        if (usernames.empty())
        {
            cout << "📂 No registered users.\n";
        }
        else
        {
            cout << "📜 Registered Usernames:\n";
            for (const string &user : usernames)
            {
                cout << " - " << user << "\n";
            }
        }
    }
};

int main()
{
    UserManager manager;
    int choice;
    string username;

    while (true)
    {
        cout << "\n=== People Management System ===\n";
        cout << "1. Register Your Name\n2. Remove a Name\n3. Display all the names\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter name to register: ";
            cin >> username;
            manager.addUser(username);
            break;
        case 2:
            cout << "Enter the name to remove: ";
            cin >> username;
            manager.removeUser(username);
            break;
        case 3:
            manager.displayUsers();
            break;
        case 4:
            cout << "🚀 Exiting program. Goodbye!\n";
            return 0;
        default:
            cout << "❌ Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
