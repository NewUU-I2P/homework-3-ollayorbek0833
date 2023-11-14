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
    float height;
    char gender;
    string mac;


    cout<<"Problem 1\nEnter the amount of consumed water\n";
    cin>>water;
    cout<<problemSolution1(water)<<endl;


    cout << "Problem 2\nEnter three numbers\n";
    cin>>i;
    cin>>j;
    cin>>k;
    cout<<"The maximum number is "<<problemSolution2(i,j,k)<<endl;


    cout<<R"(Enter gender, write "M" or "F")";
    cin>>gender;
    cout << "Problem 3\nEnter height"<<endl;
    cin>>height;
    cout<<problemSolution3(height, gender)<<endl;
    cout << "Problem 4\n";
    cin >> mac;
    cout<<problemSolution4(mac)<<endl;
    cout << "Problem 5\n";
    //problemSolution5();
    return 0;
}