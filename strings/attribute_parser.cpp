#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string.h>
using namespace std;

// array of hrml lines
vector<string> hrmlLinesArr;

// map of tag attributes
typedef map<string, string> tagAttributes;
map<string, tagAttributes> tagAttributesMap;
/*example:
<tag1 value = "abc" name = "dfg"></tag1>
will be converted to:
{
    "tag1":{
        "value":"abc",
        "name":"dfg"
        }
}
*/

// Functions

// split string into an array
vector<string> splitString(string str, char delimeter)
{
    vector<string> splitedStrArr;
    stringstream ss(str);
    string word;
    while (getline(ss, word, delimeter))
    {
        splitedStrArr.push_back(word);
    }
    return splitedStrArr;
}

// erase character from string
string eraseChar(string str, char erasedChar)
{
    str.erase(remove(str.begin(), str.end(), erasedChar), str.end());
    return str;
}

// return tag name
string findTagName(vector<string> stringArr, int i)
{
    vector<string> ignoredTags;
    string tagName = stringArr[0];

    tagName = eraseChar(tagName, '<');
    if (i == 0)
    {
        return tagName;
    }
    else
    {
        for (int k = hrmlLinesArr.size() - 1; k >= 0; k--)
        {

            if (hrmlLinesArr[k][1] == '/')
            {
                string tag = hrmlLinesArr[k];
                tag = eraseChar(tag, '<');
                tag = eraseChar(tag, '/');
                tag = eraseChar(tag, '>');
                ignoredTags.push_back(tag);
            }
            else
            {
                vector<string> wordsArr = splitString(hrmlLinesArr[k], ' ');
                string tag = wordsArr[0];
                tag = eraseChar(tag, '<');
                tag = eraseChar(tag, '>');
                vector<string>::iterator it;
                it = find(ignoredTags.begin(), ignoredTags.end(), tag);
                if (it == ignoredTags.end())
                {
                    if (tag != tagName)
                    {
                        tagName = tag + "." + tagName;
                    }
                }
            }
        }
    }
    return tagName;
}

// return tag attributes
tagAttributes findTagAttributes(vector<string> stringArr)
{
    tagAttributes map;
    for (int i; i < stringArr.size(); i++)
    {
        string word = stringArr[i];
        if (i != 0 && word.size() > 1 && word[0] != '"')
        {
            string value = stringArr[i + 2];
            value = eraseChar(value, '"');
            value = eraseChar(value, '>');
            map[word] = value;
        }
    }

    return map;
}

// Main function
int main()
{

    int N;
    int Q;
    cin >> N >> Q;
    cin.ignore();

    // Loops

    // loop throught hrml tags
    for (int i; i < N; i++)
    {
        // read line
        string line;
        getline(std::cin, line);

        hrmlLinesArr.push_back(line);

        if (line[1] != '/')
        {
            vector<string> splittedLine;
            splittedLine = splitString(line, ' ');
            string tagName = findTagName(splittedLine, i);
            tagAttributes tagAttributes = findTagAttributes(splittedLine);
            tagAttributesMap[tagName] = tagAttributes;
        }
    }

    // loop through queries
    for (int i; i < Q; i++)
    {
        string line;
        getline(std::cin, line);
        vector<string> splittedLine = splitString(line, '~');
        string tagName = splittedLine[0];
        string attribute = splittedLine[splittedLine.size() - 1];
        string queryResult = tagAttributesMap[tagName][attribute];
        if (queryResult.empty())
        {
            cout << "Not Found!" << endl;
        }
        else
        {
            cout << tagAttributesMap[tagName][attribute] << endl;
        }
    }

    return 0;
}
