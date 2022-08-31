// 2. vector2
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    //array
    int ary[] = {1, 2, 3, 4};
    int *pBegin, *pEnd;
    pBegin = ary;
    pEnd = ary + 4;
    for (int* iter = pBegin; iter != pEnd; ++iter)
        cout << *iter << "\t";
    cout << endl;

    //vector
    vector<int> v{10, 20, 30, 40};
    auto iter_begin = v.begin();
    auto iter_end = v.end();
    for(auto iter = iter_begin; iter != iter_end; ++iter) {
        cout << *iter << "\t";
    }
    cout << endl;
    
    return 0;
}
