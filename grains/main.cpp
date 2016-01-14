#include "grains.h"
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;


int main(void)
{
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    ull tmp = grains::square(64);
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>( t2 - t1 ).count();

    cout << duration << " microseconds" << endl;
    return 0;
}