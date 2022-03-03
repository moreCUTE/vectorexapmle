#include <SFML/Graphics.hpp>
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
vector<int>nums;
vector<int>::iterator numsi;
for (int i = 0; i < 20; i++)
nums.push_back(rand());

for (int i = 0; i < 20; i++)
cout << nums[i] << ", ";

random_shuffle(nums.begin(), nums.end());

cout << endl << "shuffle" << endl;
for (int i = 0; i < 20; i++)
cout << nums[i] << ", ";

sort(nums.begin(), nums.end());

cout << endl << "sorted" << endl;
for (int i = 0; i < 20; i++)
cout << nums[i] << ", ";
}
