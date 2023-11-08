#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    float water;


    cout << "Problem 1\nEnter the amount of consumed water\n";
    cin>>water;
    cout<<problemSolution1(water);
    cout << "Problem 2\n";
    //problemSolution2();
    cout << "Problem 3\n";
    //problemSolution3();
    cout << "Problem 4\n";
    //problemSolution4();
    cout << "Problem 5\n";
    //problemSolution5();
    return 0;
}