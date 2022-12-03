#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    string first;
    string end;
    char shared;
    int pts = 0;
    
    ifstream myfile ("input1.txt");
    if (myfile.is_open())
    {
        cout << "Testing\n";
        while ( getline (myfile,line) )
        {
            first = line.substr(0,line.length()/2  );
            end = line.substr(line.length()/2,line.length());
            cout <<int('c'-'a')<< first << '\n' << end << '\n' << '\n';

            for (int i = 0; i < first.length();i++)
            {
                if (end.find(first[i]) < end.length())
                {
                    shared = first[i];
                    if (shared >= 'a')
                    {
                        pts = pts + int(shared) - 96;
                    }
                    else
                    {
                        pts = pts + int(shared) -64 + 26;
                    }
                    cout << pts<< '\n';
                    break;
                }
            }

            shared = '\n';           
        }
        myfile.close();
    }   
    return 0;
}