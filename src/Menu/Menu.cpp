#include "Menu.h"

Menu::Menu() {};

Menu::~Menu() {};

void Menu::pressAnyKeyToContinue()
{
    cout << "Press any key to continue...";
    cout.flush(); // Ensure the message is displayed before waiting for input
#ifdef _WIN32
    system("pause");
#else
    system("read -n 1 -s -p \"\"; echo");
#endif
}

void Menu::displayMenu()
{
    cout << endl;
    cout << "~~~~~Menu~~~~~" << endl;
    cout << "c - View character info" << endl;
    cout << "i - View inventory" << endl;
    cout << "a - Add item" << endl;
    cout << "d - Drop item" << endl;
    cout << "q - Quit game" << endl;
    cout << "Action: ";
};

bool Menu::handleMenuInput(char *choice, shared_ptr<Player> player)
{
    try
    {
        cin >> *choice;
        cout << endl;
    }
    catch (const exception &e)
    {
        cerr << e.what() << '\n';
    }
    switch (*choice)
    {
    case 'c':
    case 'C':
        /* code */
        break;

    case 'i':
    case 'I':
        player->showInventory();
        break;

    case 'a':
    case 'A':
        /* code */
        break;

    case 'd':
    case 'D':
        /* code */
        break;

    case 'q':
    case 'Q':
        cout << endl;
        cout << "Goodbye" << endl;
        return false;

    default:
        cout << endl;
        cout << "invalid input" << endl;
        break;
    }
    return true;
};