#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector
    vector<int> vec = {1, 3, 5, 6, 7, 8, 9, 10};

    vec.push_back(11);
    cout << vec.size() << endl;
    return 0;
}