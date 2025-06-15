#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector
    vector<int> vec;

    vec.push_back(11);
    vec.push_back(65);
    vec.push_back(12);
    vec.push_back(7);

    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;
    vec.pop_back();
    vec.emplace_back();
    for (int i : vec)
    {
        cout << i << " ";
    }

    cout << endl;
    // cout << "value at index 2 " << vec[2] << " or " << vec.at(2) << endl;

    cout << vec.front() << endl; // first element
    cout << vec.back() << endl;  // last element
    return 0;
}