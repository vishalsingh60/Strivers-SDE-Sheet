//1. Sort an array of 0’s 1’s 2’s without using extra space or sorting algo 

//Naive: 
//Using STD Sort

//Better:
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums.at(i) == 0){
                zero++;
            } else if (nums.at(i) == 1){
                one++;
            } else if (nums.at(i) == 2){
                two++;
            }
        }
        nums.clear();
        while(zero--){
            nums.push_back(0);
        }
        while(one--){
            nums.push_back(1);
        }
        while(two--){
            nums.push_back(2);
        }
    }
};

//Efficient:
class Solution {
public:
	void sortColors(vector<int> &nums) {
		int l0 = 0;
		int hi = ums.size() - 1;
		int mid = 0;

		while(mid <= hi) {
			switch (nums[mid]) {
				//if the element is 0
				case 0:
					swap(nums[lo++], nums[mid++]);
					break;
				//if the element is 1
				case 1:
					mid++;
					break;
				//if the element is 2
				case 2:
					swap(nums[mid], nums[hi--]);
					break;
			}
		}
	}
}