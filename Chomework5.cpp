#include <iostream>
using namespace std;
int main()
{
    //task1 
    int choice;
    cout << "Enter shape : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                if (i == j || i < j) {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 2:
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                if (i == j || i > j) {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 3:
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                int N = 10;
                if ((j > i && i + j < N - 1) || i == j || i + j == N - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 4:
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                int N = 10;
                if ((j < i && i + j > N - 1) || i == j || i + j == N - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 5:
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                int N = 10;
                if (((j > i && i + j < N - 1) || (j < i && i + j > N - 1)) || i == j || i + j == N - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 6:
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                int N = 10;
                if (((j < i && i + j < N - 1) || (j > i && i + j > N - 1)) || i == j || i + j == N - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 7:
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                int N = 10;
                if ((j < i && i + j < N - 1) || i == j || i + j == N - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 8:
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                int N = 10;
                if ((j > i && i + j > N - 1) || i == j || i + j == N - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 9:
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                int N = 10;
                if (i + j < N - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    case 10:
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                int N = 10;
                if (i + j > N - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
     
    default:
        break;
        
    }
    //Task3
        int rows, columns, cell;

        cout << "Enter the number of rows : ";
        cin >> rows;
        cout << "Enter the number of columns : ";
        cin >> columns;
        cout << "Enter the size of cell : ";
        cin >> cell;


        for (int i = 0; i < rows * cell; i++) {
            for (int j = 0; j < columns * cell; j++) {
                if ((i / cell + j / cell) % 2 == 0) {

                    for (int k = 0; k < cell; k++) {
                        cout << "*";
                    }
                }
                else {

                    for (int k = 0; k < cell; k++) {
                        cout << "-";
                    }
                }
            }
            cout << endl;
        }
}
