#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    fstream newFile;
    string data = "Hello, World!\n";
    newFile.open("file.txt", ios::out);
    newFile<<data;
    newFile>>data;
    newFile.close();
    return 0;
}