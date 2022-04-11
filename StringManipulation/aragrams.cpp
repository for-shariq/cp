#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makeAnagram' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING a
 *  2. STRING b
 */

int makeAnagram(string a, string b) {
    int alphabets[26] = {0};
    int sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        --alphabets[a[i] - 'a'];        
    }
    for (int i = 0; i < b.size(); i++)
    {
        ++alphabets[b[i] - 'a'];
    }
    for (int j = 0; j < 26; j++)
    {
        sum += abs(alphabets[j]);
    }
    return sum;
}

int main()
{
    string a;
    getline(cin, a);
    
    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    cout << res << "\n";   

    return 0;
}
