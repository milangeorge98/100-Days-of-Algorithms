#include <iostream>

using namespace std;

bool isPalindrome(string str){
    int leftId =0;
    int rightId = str.length()-1;
    while(leftId<rightId)
    {
        if(str[leftId]!=str[rightId])
        {
            return false;
        }
        leftId++;
        rightId--;
    }
    return true;
}