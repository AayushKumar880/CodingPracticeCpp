// #include <bits/stdc++.h>
// using namespace std;

//     // int gcd(int a, int b)
//     // {
//     //     while (b != 0)
//     //     {
//     //         int temp = b;
//     //         b = a % b;
//     //         a = temp;
//     //     }
//     //     return a;
//     // }

//     int gcd(int a , int b){
//         if(a == b){
//             return a;
//         }
//         if(a > b) {
//             return gcd(a-b,b);
//         }
//         if(b > a){
//            return gcd(a,b-a);
//         }
//     }

//     int main()
//     {
//         int a = 48;
//         int b = 20 ;

//         int gcd_result = gcd(a, b);

//         std::cout << "GCD of " << a << " and " << b << " is " << gcd_result << std::endl;

//         return 0;
//     }
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

bool isValidTriplet(int a, int b, int c) {
    return gcd(a, b) == 1 && gcd(b, c) == 1 && gcd(a, c) == 1;
}

int count_max_operations(vector<int>& nums, vector<bool>& used, int index) {
    int n = nums.size();
    if (index >= n) return 0;
    int max_ops = 0;
    for (int i = index; i < n; ++i) {
        if (used[i]) continue;
        for (int j = i + 1; j < n; ++j) {
            if (used[j]) continue;
            for (int k = j + 1; k < n; ++k) {
                if (used[k]) continue;
                if (isValidTriplet(nums[i], nums[j], nums[k])) {
                    used[i] = used[j] = used[k] = true;
                    max_ops = max(max_ops, 1 + count_max_operations(nums, used, index));
                    used[i] = used[j] = used[k] = false;
                }
            }
        }
    }
    max_ops = max(max_ops, count_max_operations(nums, used, index + 1));
    return max_ops;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        vector<int> nums;
        for (int i = l; i <= r; ++i) {
            nums.push_back(i);
        }

        vector<bool> used(nums.size(), false);
        cout << count_max_operations(nums, used, 0) << endl;
    }

    return 0;
}


