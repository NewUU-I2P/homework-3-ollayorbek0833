#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    float water;
    float i,j,k;

    cout << "Problem 1\nEnter the amount of consumed water\n";
    cin>>water;
    cout<<problemSolution1(water)<<endl;
    cout << "Problem 2\nEnter three numbers\n";
    cin>>i;
    cin>>j;
    cin>>k;
    cout<<"The maximum number is "<<problemSolution2(i,j,k)<<endl;
    cout << "Problem 3\n";
    //problemSolution3();
    cout << "Problem 4\n";
    //problemSolution4();
    cout << "Problem 5\n";
    //problemSolution5();
    return 0;
}