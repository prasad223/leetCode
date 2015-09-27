#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


vector<int> twoSum(vector<int>& nums, int target);

/* Function to find indices of the numbers, which sums up to target
   Minor modification required: map should point to a list of indices
   if target equals the same , then the list can be used to return 2 indices from the array
   The current implementation doesn't handle duplicates case, it will throw a core dump error
*/
vector<int> twoSum(vector<int>& nums, int target)
{
  vector<int> result;
  unordered_map<int, int> mappings;
  for(int i=0; i < nums.size();i++)
  {
      mappings[nums[i]] =i;
  }
  for(int i=0; i < nums.size();i++)
  {
     const int gap = target - nums[i];
     if(mappings.find(gap) != mappings.end())
       {
	 if(mappings[gap] != mappings[nums[i]])
  	 {
	  result.push_back(i+1);
	  result.push_back(mappings[gap]+1);
 	  break;
	 }
       }
  }
  return result;
  
}


int main()
{
  int temp,asize;
  vector<int> nums;
  cout<<"Array size: ";
  cin>>asize;
  for(int i=0; i < asize;i++)
  {
     cin>>temp;
     nums.push_back(temp);
  }
  cout<<"Displaying the contents of vector nums: size: "<<nums.size()<<"\n";
  for(int i=0; i < nums.size();i++)
     cout<<"num["<<i<<"]: "<<nums[i]<<"\n";
  cout<<"target:";
  int target;
  cin>>target; 
  vector<int> result = twoSum(nums,target);
  cout<<"9 is sum of "<<result[0]<<" "<<result[1]<<"\n";
  return 0;
}
