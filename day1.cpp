#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    int elf;
    int max1, max2, max3;
    elf = 0;
    max1 = 0;
    max2 = 0;
    max3 = 0;

    ifstream myfile ("input1.txt");
    if (myfile.is_open())
    {
        cout << "Testing\n";
        while ( getline (myfile,line) )
        {
            if (line == "")
            {
                cout << elf << "\nNO LINE \n";
                if (elf > max1)
                {
                    if (elf > max2)
                    {
                        if (elf > max3)
                        {
                            max1 = max2;
                            max2 = max3;
                            max3 = elf;
                        }
                        else
                        {
                            max1 = max2;
                            max2 = elf;
                        }
                    }
                    else
                    {
                        max1 = elf;
                    }
                }
                elf = 0;
            }
            else
            {
                elf = elf + stoi(line);
                cout << elf << '\n';
            }
             
        }
        cout << "\n\n" << max1 << '\n' << max2 << '\n' << max3 <<  '\n' << max1 + max2 +max3 << "Done \n";
        myfile.close();
    }   
    return 0;
}