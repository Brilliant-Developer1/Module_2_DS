// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

int main()
{

    vector<int> x = {10, 20, 30, 20, 40, 20, 50, 20, 80, 40, 70};
    vector<int> v = {1, 2, 3, 4, 5};

    // replace(x.begin(), x.end(), 20, 25);
    // replace(x.begin(), x.begin() + 4, 20, 25);

    // find jodi khojte deya value pay tahole oi same value it e back dibe na pele 0 back dibe
    auto it = find(x.begin(), x.end(), 40);

    // for (int c : x)
    // {
    //     cout << c << " ";
    // }
    if (it == v.end())
        cout << *it;
    else
        cout << *it;

    return 0;
}