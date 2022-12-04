#include <bits/stdc++.h>
using namespace std;

int getPrio(char letter, char prios[53]){
    for(int i = 1; i <= 52; i++)
        if(prios[i] == letter)
            return i;
    return -1;
}

char getCommonLetter(string s1, string s2) {
    for(int i = 0; i < s1.length(); i++)
        for(int j = 0; j < s2.length(); j++)
            if((int)s1[i] == (int)s2[j])
                return s1[i];
    return -1;
}

char getCommonLetter(string s1, string s2, string s3, char prios[53]) {
    int occurences1[53] = {0};
    int occurences2[53] = {0};
    int occurences3[53] = {0};

    for(int i = 0; i < s1.length(); i++)
        occurences1[getPrio(s1[i], prios)] = 1;

    for(int i = 0; i < s2.length(); i++)
        occurences2[getPrio(s2[i], prios)] = 1;

    for(int i = 0; i < s3.length(); i++)
        occurences3[getPrio(s3[i], prios)] = 1;

    for(int i = 1; i <= 52; i++)
        if(occurences1[i] == occurences2[i] && occurences2[i] == occurences3[i] && occurences1[i] == 1)
            return prios[i];
    
    return -1;
}

ifstream fin("input.in");

int main(){
    string line1, line2, line3;
    char prios[53];    
    for(int i = 'a', j = 1; i <= 'z'; i++, j++)
        prios[j] = i;
    for(int i = 'A', j = 27; i <= 'Z'; i++, j++)
        prios[j] = i;

    int sumOfPriorities = 0;
    int sumOfBadges = 0;

    while(fin >> line1 >> line2 >> line3){
        string half1, half2;
        char letter;

        // line 1
        half1 = line1.substr(0, line1.length()/2);
        half2 = line1.substr(line1.length()/2);
        letter = getCommonLetter(half1, half2);
        sumOfPriorities += getPrio(letter, prios);
        
        // line 2
        half1 = line2.substr(0, line2.length()/2);
        half2 = line2.substr(line2.length()/2);
        letter = getCommonLetter(half1, half2);
        sumOfPriorities += getPrio(letter, prios);

        // line 3
        half1 = line3.substr(0, line3.length()/2);
        half2 = line3.substr(line3.length()/2);
        letter = getCommonLetter(half1, half2);
        sumOfPriorities += getPrio(letter, prios);

        sumOfBadges += getPrio(getCommonLetter(line1, line2, line3, prios), prios);

    }

    cout << sumOfPriorities << '\n' << sumOfBadges << '\n';
}