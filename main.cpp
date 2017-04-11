#include <vector>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
const int size = 9;
int init_array[size];
ifstream inFile("file.in",ios::in);

for(int i=0;i<size;++i){
inFile >> init_array[i];
}

vector<int> v(size);

for(int i=0; i<size; ++i){
v.at(i) = init_array[i];
}

sort(v.begin(), v.end());

cout << v.at(4)+v.at(5)+v.at(6)+v.at(7)+v.at(8) << endl;

return 0;
}
