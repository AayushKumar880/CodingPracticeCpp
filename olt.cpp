#include <string>
#include <queue>
#include <vector>
#include <utility> // for std::pair

using namespace std;

class Solution
{
public:
    string solution(int A, int B, int C)
    {
        // Priority queue to store letters and their remaining counts
        priority_queue<pair<int, char>> pq;
        if (A > 0)
            pq.push({A, 'a'});
        if (B > 0)
            pq.push({B, 'b'});
        if (C > 0)
            pq.push({C, 'c'});

        string result;
        while (!pq.empty())
        {
            auto counter1 = pq.top();
            pq.pop();

            // Append the most frequent letter
            int n = result.size();
            if (n >= 2 && result[n - 1] == counter1.second && result[n - 2] == counter1.second)
            {
                // If adding this letter will cause three consecutive letters, pick the next most frequent letter
                if (pq.empty())
                    break; // No more letters to place, break the loop

                auto counter2 = pq.top();
                pq.pop();

                result += counter1.second;
                if (--counter2.first > 0)
                    pq.push(counter2);

                // Push the initial letter back to the priority queue
                pq.push(counter1);
            }
            else
            {
                result += counter1.second;
                if (--counter1.first > 0)
                    pq.push(counter1);
            }
        }

        return result;
    }
};

// Example usage:
int main()
{
    Solution sol;

    cout << sol.solution(3, 1, 0) << endl; // Output: "aaba"
    cout << sol.solution(1, 4, 4) << endl; // Output: "abbcbcbcc"
    cout << sol.solution(1, 3, 0) << endl; // Output: "babb"
    return 0;
}
