/*
Dado un string, se calcula el arreglo de substrings y lo muestra ordenado alfabéticamente.

Autores:
Yusdivia Molina Román
Jesús Daniel Lara Yamamoto
Héctor Arturo Noyola Mondragón

Fecha de modificación: 10/09/2021
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Complejidad O(n) 
vector<string> findSuffixes(string s) {
    vector<string> v;
    int size = s.size();
    for (int i = 0; i < size; i++) {        
        v.push_back(s);
        s.erase(s.begin());
    }
    // Ordenar los substrings
    // Complejidad O(n log n)
    // Liga: https://stackoverflow.com/questions/4484900/what-is-the-time-complexity-of-stdsort-in-the-c-standard-library
    sort(v.begin(), v.end(), less<string>());
    return v;
}

// Imprimir el resultado 
// Complejidad O(n)
void printVec(vector<string> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}

int main() {
    string s = "banana";
    vector<string> suf = findSuffixes(s);
    printVec(suf);

    return 0;
}