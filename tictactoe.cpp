#include <iostream>
#include <cstdlib>
#include <Windows.h>

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[H"; // Clears screen and moves cursor to home position
}

int in(char c, char *tab)
{
    int t = 0;
    for (int i = 0; i < 5; i++)
    {
        if (tab[i] == c)
        {
            t++;
        }
    }
    if (t == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int win(char *tab)
{
    int test=0;
    if (in('0', tab))
    {
        if (in('1', tab))
        {
            if (in('2', tab))
            {
                test=1;
            }
        }
        else if (in('4', tab))
        {
            if (in('8', tab))
            {
                test=1;
            }
        }
        else if (in('3', tab))
        {
            if (in('6', tab))
            {
                test=1;
            }
        }
    }
    else if (in('1', tab))
    {
        if (in('4', tab))
        {
            if (in('7', tab))
            {
                test=1;
            }
        }
    }
    else if (in('2', tab))
    {
        if (in('5', tab))
        {
            if (in('8', tab))
            {
                test=1;
            }
        }
    }
    else if (in('3', tab))
    {
        if (in('4', tab))
        {
            if (in('5', tab))
            {
                test=1;
            }
        }
    }
    else if (in('6', tab))
    {
        if (in('7', tab))
        {
            if (in('8', tab))
            {
                test=1;
            }
        }
    }
    else if (in('2', tab))
    {
        if (in('4', tab))
        {
            if (in('6', tab))
            {
                test=1;
            }
        }
    }else{test=0;}
    return test;
    
}

int main()
{
    char c;
    char tictac[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};
    char tab_x[5] = {' ', ' ', ' ', ' ', ' '}, tab_o[5] = {' ', ' ', ' ', ' ', ' '};

    clearScreen();

    cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "player x play :";
    cin >> c;
   

    switch (c)
    {
    case '0':
        tictac[0] = 'X';
        break;
    case '1':
        tictac[1] = 'X';
        break;
    case '2':
        tictac[2] = 'X';
        break;
    case '3':
        tictac[3] = 'X';
        break;
    case '4':
        tictac[4] = 'X';
        break;
    case '5':
        tictac[5] = 'X';
        break;
    case '6':
        tictac[6] = 'X';
        break;
    case '7':
        tictac[7] = 'X';
        break;
    case '8':
        tictac[8] = 'X';
        break;
    default:
        break;
    }
    tab_x[0] = c;

    clearScreen(); // 1 player x

    cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "player o play :";
    cin >> c;
    while (in(c, tab_o) || in(c, tab_x))
    {
        cout << "player o play :";
        cin >> c;
    }

    switch (c)
    {
    case '0':
        tictac[0] = 'O';
        break;
    case '1':
        tictac[1] = 'O';
        break;
    case '2':
        tictac[2] = 'O';
        break;
    case '3':
        tictac[3] = 'O';
        break;
    case '4':
        tictac[4] = 'O';
        break;
    case '5':
        tictac[5] = 'O';
        break;
    case '6':
        tictac[6] = 'O';
        break;
    case '7':
        tictac[7] = 'O';
        break;
    case '8':
        tictac[8] = 'O';
        break;
    default:
        break;
    }
    tab_o[0] = c;
    clearScreen(); // 1 player o

    cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "player o play :";
    cin >> c;
    while (in(c, tab_o) || in(c, tab_x))
    {
        cout << "player x play :";
        cin >> c;
    }
    switch (c)
    {
    case '0':
        tictac[0] = 'X';
        break;
    case '1':
        tictac[1] = 'X';
        break;
    case '2':
        tictac[2] = 'X';
        break;
    case '3':
        tictac[3] = 'X';
        break;
    case '4':
        tictac[4] = 'X';
        break;
    case '5':
        tictac[5] = 'X';
        break;
    case '6':
        tictac[6] = 'X';
        break;
    case '7':
        tictac[7] = 'X';
        break;
    case '8':
        tictac[8] = 'X';
        break;
    default:
        break;
    }

    tab_x[1] = c;
    clearScreen(); // 2 player x

    cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "player o play :";
    cin >> c;
    while (in(c, tab_o) || in(c, tab_x))
    {
        cout << "player o play :";
        cin >> c;
    }

    switch (c)
    {
    case '0':
        tictac[0] = 'O';
        break;
    case '1':
        tictac[1] = 'O';
        break;
    case '2':
        tictac[2] = 'O';
        break;
    case '3':
        tictac[3] = 'O';
        break;
    case '4':
        tictac[4] = 'O';
        break;
    case '5':
        tictac[5] = 'O';
        break;
    case '6':
        tictac[6] = 'O';
        break;
    case '7':
        tictac[7] = 'O';
        break;
    case '8':
        tictac[8] = 'O';
        break;
    default:
        break;
    }
    tab_o[1] = c;
    clearScreen(); // 2 player o

    cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "player o play :";
    cin >> c;
    while (in(c, tab_o) || in(c, tab_x))
    {
        cout << "player x play :";
        cin >> c;
    }
    switch (c)
    {
    case '0':
        tictac[0] = 'X';
        break;
    case '1':
        tictac[1] = 'X';
        break;
    case '2':
        tictac[2] = 'X';
        break;
    case '3':
        tictac[3] = 'X';
        break;
    case '4':
        tictac[4] = 'X';
        break;
    case '5':
        tictac[5] = 'X';
        break;
    case '6':
        tictac[6] = 'X';
        break;
    case '7':
        tictac[7] = 'X';
        break;
    case '8':
        tictac[8] = 'X';
        break;
    default:
        break;
    }

    tab_x[2] = c;
    if (win(tab_x))
    {
        clearScreen();

        cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
        

        cout << "player X win ....";
        return 1;
    }
    clearScreen(); // 3 player x

    cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "player o play :";
    cin >> c;
    while (in(c, tab_o) || in(c, tab_x))
    {
        cout << "player o play :";
        cin >> c;
    }

    switch (c)
    {
    case '0':
        tictac[0] = 'O';
        break;
    case '1':
        tictac[1] = 'O';
        break;
    case '2':
        tictac[2] = 'O';
        break;
    case '3':
        tictac[3] = 'O';
        break;
    case '4':
        tictac[4] = 'O';
        break;
    case '5':
        tictac[5] = 'O';
        break;
    case '6':
        tictac[6] = 'O';
        break;
    case '7':
        tictac[7] = 'O';
        break;
    case '8':
        tictac[8] = 'O';
        break;
    default:
        break;
    }
    tab_o[2] = c;
    if (win(tab_o))
    {
        clearScreen();

        cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
        cout << "player O win ....";
        return 1;
    }
    clearScreen(); // 3 player o

    cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "player o play :";
    cin >> c;
    while (in(c, tab_o) || in(c, tab_x))
    {
        cout << "player x play :";
        cin >> c;
    }
    switch (c)
    {
    case '0':
        tictac[0] = 'X';
        break;
    case '1':
        tictac[1] = 'X';
        break;
    case '2':
        tictac[2] = 'X';
        break;
    case '3':
        tictac[3] = 'X';
        break;
    case '4':
        tictac[4] = 'X';
        break;
    case '5':
        tictac[5] = 'X';
        break;
    case '6':
        tictac[6] = 'X';
        break;
    case '7':
        tictac[7] = 'X';
        break;
    case '8':
        tictac[8] = 'X';
        break;
    default:
        break;
    }

    tab_x[3] = c;
    if (win(tab_x))
    {
        clearScreen();

        cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
        cout << "player X win ....";
        return 1;
    }
    clearScreen(); // 4 player x

    cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "player o play :";
    cin >> c;
    while (in(c, tab_o) || in(c, tab_x))
    {
        cout << "player o play :";
        cin >> c;
    }

    switch (c)
    {
    case '0':
        tictac[0] = 'O';
        break;
    case '1':
        tictac[1] = 'O';
        break;
    case '2':
        tictac[2] = 'O';
        break;
    case '3':
        tictac[3] = 'O';
        break;
    case '4':
        tictac[4] = 'O';
        break;
    case '5':
        tictac[5] = 'O';
        break;
    case '6':
        tictac[6] = 'O';
        break;
    case '7':
        tictac[7] = 'O';
        break;
    case '8':
        tictac[8] = 'O';
        break;
    default:
        break;
    }
    tab_o[3] = c;
    if (win(tab_o))
    {
        clearScreen();

        cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
        cout << "player O win ....";
        return 1;
    }
    clearScreen(); // 4 player o

    cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "player o play :";
    cin >> c;
    while (in(c, tab_o) || in(c, tab_x))
    {
        cout << "player x play :";
        cin >> c;
    }
    switch (c)
    {
    case '0':
        tictac[0] = 'X';
        break;
    case '1':
        tictac[1] = 'X';
        break;
    case '2':
        tictac[2] = 'X';
        break;
    case '3':
        tictac[3] = 'X';
        break;
    case '4':
        tictac[4] = 'X';
        break;
    case '5':
        tictac[5] = 'X';
        break;
    case '6':
        tictac[6] = 'X';
        break;
    case '7':
        tictac[7] = 'X';
        break;
    case '8':
        tictac[8] = 'X';
        break;
    default:
        break;
    }

    tab_x[4] = c;
    if (win(tab_x))
    {
        clearScreen();

        cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;
        cout << "player X win ....";
        return 1;
    }
    // 5 player x

    clearScreen();

        cout << "   TicTacToe Game" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[0] << " |" << " " << tictac[1] << " |" << " " << tictac[2] << " " << endl;
    cout << "___|___|___" << endl;

    cout << "   |   |   " << endl;
    cout << " " << tictac[3] << " |" << " " << tictac[4] << " |" << " " << tictac[5] << " " << endl;
    cout << "___|___|___" << endl;
    cout << "   |   |   " << endl;
    cout << " " << tictac[6] << " |" << " " << tictac[7] << " |" << " " << tictac[8] << " " << endl;
    cout << "   |   |   " << endl;

    cout << "\n DRAW .....";

    return 0;
}