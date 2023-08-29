#include <bits/stdc++.h>
using namespace std;

 string leftToRight( string text)
{
     istringstream ss(text);
     vector< string> lines;
     string line;

    while ( getline(ss, line))
    {
        if (!line.empty())
        {
            lines.push_back(line);
        }
    }

    int width = lines.back().length();
     string rightAlignedText = "";

    for (const  string &currentLine : lines)
    {
        int space = width - currentLine.length();
        rightAlignedText += generateSpaces(space);
        rightAlignedText += currentLine + "\n";
    }

    return rightAlignedText;
}

 string generateSpaces(int space)
{
     string sp = "";
    for (int i = 0; i < space; i++)
    {
        sp += " ";
    }
    return sp;
}

int main()
{
     string leftAlignedText = "1\n1 1\n1 2 1\n1 3 3 1\n1 4 6 4 1\n";
     string rightAlignedText = leftToRight(leftAlignedText);

     cout << leftAlignedText;
     cout << rightAlignedText;

    return 0;
}
