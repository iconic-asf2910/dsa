class Solution {
public:
int minMoves(vector<int>& nums) {
int largest = nums[0];

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    int counter = 0;

   
    for (int i = 0; i < nums.size(); i++) {
        counter += largest - nums[i];
    }

    return counter;
}

};

