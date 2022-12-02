#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    int points;

    ifstream myfile ("input1.txt");
    if (myfile.is_open())
    {
        cout << "Testing\n";
        while ( getline (myfile,line) )
        {
            if (line[2] == 'X')
            {
                points = points + 1;
                if (line[0] == 'A')
                {
                    points = points + 3;
                }
                else if (line[0] == 'C')
                {
                    points = points + 6;
                }
            }
            else if (line[2] == 'Y')
            {
                points = points + 2;
                if (line[0] == 'B')
                {
                    points = points + 3;
                }
                else if (line[0] == 'A')
                {
                    points = points + 6;
                }
            }
            else if (line[2] == 'Z')
            {
                points = points + 3;
                if (line[0] == 'C')
                {
                    points = points + 3;
                }
                else if (line[0] == 'B')
                {
                    points = points + 6;
                }
            } 
            
            
             
        }
        cout << points;
        myfile.close();
    }   
    return 0;
}