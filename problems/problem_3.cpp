#include <string>
using namespace std;

string problemSolution3(float height, string S) {
    string result;
    if(S == "Male"){
        if(height<1.70){
            result = "Short";
        }else if(height>=1.70&&height<1.85){
            result = "Normal";
        } else{
            result = "Tall";
        }
    }else if(S == "Female"){
        if(height<1.60){
            result = "Short";
        }else if(height>=1.60&&height<1.75){
            result = "Normal";
        } else{
            result = "Tall";
        }
    }else{
        result = "not exist";
    }
    return "The person is " + result;
}