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

string centerToRight(string text)
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
    string rightAlignedText = "";

    for (const string &currentLine : lines)
    {
        int space = width - currentLine.length();
        rightAlignedText += generateSpaces(space);
        rightAlignedText += currentLine + "\n";
    }

    return rightAlignedText;
}

int main()
{
    string centerAlignedText = "    1\n   1 1\n  1 2 1\n 1 3 3 1\n1 4 6 4 1\n";
    string rightAlignedText = centerToRight(centerAlignedText);

    cout << centerAlignedText;
    cout << rightAlignedText;

    return 0;
}
