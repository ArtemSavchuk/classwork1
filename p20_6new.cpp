//20.6
#include <iostream>
#include <vector>
using namespace std;

vector<string> separateWords(string str) 
{ 
  
  vector<string> words; 

  
  string currentWord = ""; 

  
  for (int i = 0; i < str.length(); i++) 
  { 

     
    if (str[i] != ' ') 
    { 

       
      currentWord += str[i]; 
    } 

    
    if (str[i] == ' ') 
    { 

      
      words.push_back(currentWord); 

       
      currentWord = ""; 
    } 
  } 
  return words; 
}

void checkFunction(string str)
{
    vector<string> mainVector;
    vector<string> separateVector = separateWords(str);


    for(int i = 0; i < separateVector.size(); i++)
    {
        
        bool checkBool = true;
        if(mainVector.size() == 0)
        {
            mainVector.push_back(separateVector[i]);
        }
        for(int j = 0; j < mainVector.size(); j++)
        {
            
            if(mainVector[j] == separateVector[i])
            {
                checkBool = false;
            }
        }
        
        
        if(checkBool)
        {
            mainVector.push_back(separateVector[i]);
        }
    }

    
    for(int i = 0; i < mainVector.size(); i++)
    {
        cout << mainVector[i] << " ";
    }

}


int main()
{
    string s = "qwewq qwewq r yyty ";
    vector<string> vec = separateWords(s);
    
    checkFunction(s);
}