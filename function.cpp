#include "function.hpp"
using namespace std;
#include <cmath>
#include <iostream>

void show_matrix(int matrix[100][100], int n) 
{
    for (int i = 0; i < n; i = i + 1)
    {
        for (int j = 0; j < n; j = j + 1) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void fill_matrix_with_numbers(int matrix[100][100], int n) 
{
    for (int i = 0; i < n; i = i + 1) {
        for (int j = 0; j < n; j = j + 1) {
            cin >> matrix[i][j];
        }
    }
}

int has_similar_rows(int matrix[100][100], int n) 
{
    bool same_rows = true;
    for (int i = 0; i < n; i = i + 1) 
    {
        for (int j = i + 1; j < n; j = j + 1) 
        {
            for (int k = 0; k < n; k = k + 1) 
            {
                if (not (same_rows)) 
                {
                    break;
                }
                if (matrix[i][k] != matrix[j][k]) 
                {
                    same_rows = false;
                }
            }
            if (same_rows) 
            {
                return true;
            }
            same_rows = true;
        }
    }
    return false;
}

void change_mininmal_elements_in_columns(int matrix[100][100], int n, int value) 
{
    for (int i = 0; i < n; i = i + 1) 
    {
        int minimal = 1000000, index;
        for (int j = 0; j < n; j = j + 1) 
        {
            if (matrix[j][i] < minimal) 
            {
                minimal = matrix[j][i];
            }
        }
        for (int j = 0; j < n; j = j + 1) 
        {
            if (matrix[j][i] == minimal) 
            {
                matrix[j][i] = value;
            }
        }
    }
}

bool is_target_a_primal_number(int n) 
{
    if (n <= 1) 
    {
        return false;
    }
    if (n == 2) 
    {
        return true;
    }
    for (int i = 2; i < ceil(sqrt(n)) + 1; i = i + 1) 
    {
        if (n % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int find_maximal_primal(int matrix[100][100], int n) 
{
    int max = 0;
    for (int i = 0; i < n; i = i + 1) 
    {
        for (int j = 0; j < n; j = j + 1) 
        {
            if ((is_target_a_primal_number(matrix[i][j])) && (max < matrix[i][j]))
            {
                max = matrix[i][j];
            }
        }
    }
    return max;
}
