#include <iostream>
using namespace std;

// Function prototypes
void header();
void firstmatrix(int A[][3]);
void secondmatrix(int B[][3]);
void add_matrices(int A[][3], int B[][3], int C[][3]);
void subtract_matrices(int A[][3], int B[][3], int C[][3]);
void multiply_matrices(int A[][3], int B[][3], int C[][3]);
void scalar_multiply(int scalar, int A[][3], int C[][3]);
bool is_identity(int A[][3]);
void transpose(int A[][3], int C[][3]);
bool is_diagonal(int A[][3]);
bool is_symmetric(int A[][3]);
void print_matrix(int A[][3]);

int main()
{
    system("cls");
    header();
    int matrix1[3][3], matrix2[3][3], result[3][3];
    string operation;

    // Get operation from user
    cout << "Enter matrix operation: ";
    cin >> operation;

    // Perform matrix operation
    if (operation == "+")
    {
        system("cls");
        header();
        firstmatrix(matrix1);
        secondmatrix(matrix2);
        add_matrices(matrix1, matrix2, result);
    }
    else if (operation == "-")
    {
        system("cls");
        header();
        firstmatrix(matrix1);
        secondmatrix(matrix2);
        subtract_matrices(matrix1, matrix2, result);
    }
    else if (operation == "*")
    {
        system("cls");
        header();
        firstmatrix(matrix1);
        secondmatrix(matrix2);
        multiply_matrices(matrix1, matrix2, result);
    }
    else if (operation == "scalar")
    {
        system("cls");
        header();
        firstmatrix(matrix1);
        int scalar;
        cout << "Enter Scaler Number:";
        cin >> scalar;
        scalar_multiply(scalar, matrix1, result);
    }
    else if (operation == "transpose")
    {
        system("cls");
        header();
        firstmatrix(matrix1);
        transpose(matrix1, result);
    }
    else if (operation == "identity")
    {
        system("cls");
        header();
        firstmatrix(matrix1);
        if (is_identity(matrix1))
        {
            cout << "Identity Matrix!";
            exit(0);
        };
    }
    else if (operation == "diagonal")
    {
        system("cls");
        header();
        firstmatrix(matrix1);
        if (is_diagonal(matrix1))
        {
            cout << "Diagonal Matrix!";
            exit(0);
        };
    }
    else if (operation == "symmetric")
    {
        system("cls");
        header();
        firstmatrix(matrix1);
        if (is_symmetric(matrix1))
        {
            cout << "Symmetric Matrix!";
            exit(0);
        };
    }
    else
    {
        cout << "Invalid operation" << endl;
    }

    // Print result
    cout << "Result:" << endl;
    print_matrix(result);

    return 0;
}
void header()
{
    cout << endl;
    cout << " __ __  ___  ___  ___  _  __  _   ___  ___  _    ___  _ _  _    ___  ___  ___  ___  " << endl;
    cout << "|  |  || . ||_ _|| . || | | ||   |  _>| . || |  |  _>| | || |  | . ||_ _|| . || . | " << endl;
    cout << "|     ||   | | | |   /| |  | |   | <__|   || |_ | <__| ' || |_ |   | | | | | ||   / " << endl;
    cout << "|_|_|_||_|_| |_| |_|_||_||_/|_|  |___/|_|_||___|`___/`___'|___||_|_| |_| `___'|_|_| " << endl;
    cout << endl;
    cout << endl;
}
void firstmatrix(int A[][3])
{
    cout << "Enter values for matrix 1:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
}

void secondmatrix(int B[][3])
{
    cout << "Enter values for matrix 2:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }
}

void add_matrices(int A[][3], int B[][3], int C[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
void subtract_matrices(int A[][3], int B[][3], int C[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}
void multiply_matrices(int A[][3], int B[][3], int C[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void scalar_multiply(int scalar, int A[][3], int C[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = scalar * A[i][j];
        }
    }
}

bool is_identity(int A[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j && A[i][j] != 1)
            {
                return false;
            }
            else if (i != j && A[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

void transpose(int A[][3], int C[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[j][i];
        }
    }
}

bool is_diagonal(int A[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i != j && A[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

bool is_symmetric(int A[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] != A[j][i])
            {
                return false;
            }
        }
    }
    return true;
}

void print_matrix(int A[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}