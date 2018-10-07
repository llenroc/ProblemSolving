/*
*  Problem Name:  STL Lower Bound
*  Problem No  :  https://www.hackerrank.com/challenges/cpp-lower-bound
*   Domain      :   C++/STL
*  Problem Type:  Use of STL, lower_bound
*  Alogirthm  :   
*  Author    :  Atiqur Rahman
*  Status    :  Accepted
*  Note    :  ref: http://www.cplusplus.com/reference/algorithm/lower_bound/
*/

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> v(N);

    for (int i = 0; i<N; i++)
        std::cin >> v[i];

    int Q; std::cin >> Q;

    for (int i = 0; i<Q; i++) {
        int query; std::cin >> query;
        std::vector<int>::iterator low = std::lower_bound(v.begin(), v.end(), query);
        if (*low == query)
            std::cout << "Yes ";
        else
            std::cout << "No ";
        std::cout << low + 1 - v.begin() << std::endl;
    }
    return 0;
}
