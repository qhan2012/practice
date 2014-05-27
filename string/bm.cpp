#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;
 
int main()
{
    typedef std::unordered_map <std::string, int> MapType;
    MapType data;
 
    // let's declare some initial values to this map
    data["Bobs score"] = 10;
    data["Martys score"] = 15;
    data["Mehmets score"] = 34;
    data["Rockys score"] = 22;
    data["Rockys score"] = 23;  /*overwrites the 22 as keys are identical */
 
    // Iterate over the map and print out all key/value pairs.
    // Using a const_iterator since we are not going to change the values.
    MapType::const_iterator end = data.end(); 
    for (MapType::const_iterator it = data.begin(); it != end; ++it) {
        std::cout << "Who(key = first): " << it->first;
        std::cout << " Score(value = second): " << it->second << '\n';
    }
    int * aaa = new int[10];
    delete aaa;

    cout << sizeof(int*) << " ?= " << sizeof(int) << endl;
 
    return 0;
}