#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    ifstream in("in.txt");
    ofstream fout;
    fout.open("out.txt");

    std::string size_first;
    std::string size_second;
    in >> size_first;
    int size = 0;
    size = std::stoi(size_first);
    int* arr = new int[size];
    int x;
    for (int i = 0; i < size; i++) {
        in >> x;
        arr[i] = x;
    }
    in >> size_second;
    int ssize = 0;
    ssize = std::stoi(size_second);
    int* arrr = new int[ssize];
    int y;
    fout << size_second;
    fout << endl;
    for (int i = 0; i < ssize; i++) {
        in >> y;
        arrr[i] = y;
    }
    for (int i = 0; i < ssize; i++)
    {
        swap(arrr[ssize - 1], arrr[i]);
        fout << arrr[i] << ' ';
    }
    fout << endl;
    fout << size_first;
    fout << endl;
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1) {
            swap(arr[i], arr[i + 1]);
        }
        fout << arr[i] << ' ';
    }
    delete[] arr;
    delete[] arrr;
}