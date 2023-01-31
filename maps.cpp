#include<iostream> 
#include<map>
#include<string.h>
using namespace std; 

//Map is an associative array

int main(){ 
    map<string, int> marksMap;
    marksMap["Kratik"] = 89;
    marksMap["Arif"] = 67;
    marksMap["yahoo"] = 56;
    marksMap.insert ({{"kkk",400}, {"lll",80}});



    map<string, int> :: iterator it;
    for (it = marksMap.begin(); it!=marksMap.end()   ; it++)
    {
        cout<<(*it).first<<" -- "<<(*it).second<<endl;
    }
    
    return 0;
}