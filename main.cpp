#include "function.hpp"
#include <iostream>
using namespace std;

int main()
{
    int matrix[100][100] = {0};
    int n;

    cout << "Enter n and matrix" << endl;
    cin >> n;
    
    fill_matrix(matrix, n);
    
    if (has_similar_rows) {
        change_mininmal_elements_in_columns(matrix, n, find_maximal_primal(matrix, n));
        cout << endl; // Создаю разделение, чтобы читать можно было нормально.
        print_matrix(matrix, n);
    }

    return 0;
} 
