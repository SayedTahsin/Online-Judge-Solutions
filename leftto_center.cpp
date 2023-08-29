#include <bits/stdc++.h>
using namespace std;

string generateSpaces(int space)
{
    string sp = "";
    for (int i = 0; i < space; i++)
    {
        sp += " ";
    }
    return sp;
}

string leftToCenter(string text)
{
    istringstream ss(text);
    vector<string> lines;
    string line;

    while (getline(ss, line))
    {
        if (!line.empty())
        {
            lines.push_back(line);
        }
    }

    int width = lines.back().length();
    string centerAlignedText = "";

    for (const string &currentLine : lines)
    {
        int space = (width - currentLine.length()) / 2;
        centerAlignedText += generateSpaces(space);
        centerAlignedText += currentLine + "\n";
    }

    return centerAlignedText;
}

int main()
{
    string leftAlignedText = "1\n1 1\n1 2 1\n1 3 3 1\n1 4 6 4 1\n1 5 10 10 5 1\n";
    string centerAlignedText = leftToCenter(leftAlignedText);

    cout << leftAlignedText;
    cout << centerAlignedText;

    return 0;
}
