#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
int loc;
int done;

int binarySearch(vector<int> arr, int l, int r, int x)
{
    int m;
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
        {
            done = m - 1;
            return m + 1;
        }

        // If x greater, ignore right half
        if (arr[m] > x)
            l = m + 1;

        // If x is smaller, ignore left half
        else
            r = m - 1;
    }

    // if we reach here, then element was
    // not present
    done = l;
    return l + 1;
}

/*
 * Complete the 'climbingLeaderboard' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY ranked
 *  2. INTEGER_ARRAY player
 */

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player)
{
    vector<int> answer;

    for (int i = 0; i < ranked.size() - 1; i++)
    {
        if (ranked[i] == ranked[i + 1])
        {
            ranked.erase(ranked.begin() + i);
            i--;
        }
    }

    done = (ranked.size() - 1);

    for (int i = 0; i < player.size(); ++i)
    {
        //Testing to quicken duplicates
        if ((player[i] == player[i - 1] && i != 0) || (i != 0 && player[i] < ranked[(answer[i - 1] - 1)]))
        {
            answer.push_back(answer[i - 1]);
        }
        else
        {
            answer.push_back(binarySearch(ranked, 0, done, player[i]));
        }
    }

    return answer;
}

int main()
{   
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   
    
    ofstream fout(getenv("OUTPUT_PATH"));

    string ranked_count_temp;
    getline(cin, ranked_count_temp);

    int ranked_count = stoi(ltrim(rtrim(ranked_count_temp)));

    string ranked_temp_temp;
    getline(cin, ranked_temp_temp);

    vector<string> ranked_temp = split(rtrim(ranked_temp_temp));

    vector<int> ranked(ranked_count);

    for (int i = 0; i < ranked_count; i++)
    {
        int ranked_item = stoi(ranked_temp[i]);

        ranked[i] = ranked_item;
    }

    string player_count_temp;
    getline(cin, player_count_temp);

    int player_count = stoi(ltrim(rtrim(player_count_temp)));

    string player_temp_temp;
    getline(cin, player_temp_temp);

    vector<string> player_temp = split(rtrim(player_temp_temp));

    vector<int> player(player_count);

    for (int i = 0; i < player_count; i++)
    {
        int player_item = stoi(player_temp[i]);

        player[i] = player_item;
    }

    vector<int> result = climbingLeaderboard(ranked, player);

    for (int i = 0; i < result.size(); i++)
    {
        fout << result[i];

        if (i != result.size() - 1)
        {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
