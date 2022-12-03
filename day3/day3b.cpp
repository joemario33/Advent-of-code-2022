#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string line1, line2, line3;
    vector<char> shared;
    char allshared;
    int pts = 0;
    
    ifstream myfile ("input1.txt");
    if (myfile.is_open())
    {
        
        while ( getline (myfile,line1) )
        {
            getline (myfile,line2);;
            getline (myfile,line3);

            for (int i = 0; i < line1.length();i++)
            {
                if (line2.find(line1[i]) < line2.length())
                {
                    shared.push_back(line1[i]);
                }
            }

            for (int i = 0; i< shared.size();i++)
            {
                if (line3.find(shared[i]) < line3.length())
                {
                    allshared = shared[i];
                }
            }
            if (allshared >= 'a')
                    {
                        pts = pts + int(allshared) - 96;
                    }
                    else
                    {
                        pts = pts + int(allshared) -64 + 26;
                    }
                    cout << pts<< '\n';
            
           
        }
        cout << '\n' << pts;
        myfile.close();
    }   
    return 0;
}