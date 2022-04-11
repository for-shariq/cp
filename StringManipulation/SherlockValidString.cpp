#include<iostream>
#include<string>
using namespace std;

/*
 * https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=strings
 */

string isValid(string s) {
    int alphabet[26] = {0};
    string result = "NO";
    int difference = 0;
    
    for (int i = 0; i < s.size(); i++)
    {
        ++alphabet[s[i] - 'a'];        
    }
    for (int i = 0; i < s.size() - 1; i++)
    {
        difference = abs(alphabet[s[i] - 'a'] - alphabet[s[i + 1] - 'a']);
        if(difference == 0 || difference == 1)
            result =  "YES";
        else
            result = "NO";
    }
   return result;
}

int main()
{
    string s;
    getline(cin, s);
    string result = isValid(s);
    cout << result << "\n";
    return 0;
}
