#include <bits/stdc++.h>
using namespace std;
int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    //     freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
    // #endif

    string data;

    // open a file in write mode.
    ofstream outfile;
    outfile.open("D:/Entertainment/code/C++/OJ/out.txt");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    getline(cin, data);

    // write inputted data into the file.
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    // again write inputted data into the file.
    outfile << data << endl;

    // close the opened file.
    outfile.close();

    // open a file in read mode.
    ifstream infile;
    infile.open("D:/Entertainment/code/C++/OJ/out.txt");

    cout << "Reading from the file" << endl;
    infile >> data;

    // write the data at the screen.
    cout << data << endl;

    // again read the data from the file and display it.
    infile >> data;
    cout << data << endl;

    // close the opened file.
    infile.close();
}
