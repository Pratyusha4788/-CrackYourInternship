#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size(); // Get the size of the input vector
        vector<int> arr(n + 1, 0); // Create an auxiliary vector of size n+1 initialized to 0
        vector<int> list; // Vector to store duplicates

        // Iterate through each number in the input vector
        for (int i : nums) {
            if (++arr[i] > 1) // Increment the count for this number and check if it is now a duplicate
                list.push_back(i); // If it is a duplicate, add it to the list
        }

        return list; // Return the list of duplicates
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> duplicates = solution.findDuplicates(nums);
    
    // Print the duplicates
    cout << "Duplicate elements are: ";
    for (int num : duplicates) {
        cout << num << " "; // Output: 2 3
    }
    cout << endl;

    return 0;
}
