#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
#include <climits>
#include <algorithm>

using namespace std;


int main()
{

      fstream my_file ("values.txt");
      vector<double> nums;
      double input;

      while (my_file >> input )
      {
       nums.push_back(input);
         
      }

       double average_value = accumulate(nums.begin(), nums.end(), 0.0) / nums.size();
       int min_value;
       int max_value;

       for(int num : nums ){
        cout << num << endl;
       }

       cout << "Average value is: " << average_value << endl;;
      
      return 0;
}