#include <string>
#include <sstream>
using namespace std;

string problemSolution4(const string & macAddress) {
    istringstream i(macAddress);
    string octet;
    getline(i, octet, ':');
    int octet1;
    stringstream(octet)>>hex>>octet1;

    if (octet1 % 2 == 0) {
        return "Unicast";
    } else if (octet1 % 2 != 0 && octet1 != 255) {
        return "Multicast";
    } else if (octet1 == 255) {
        return "Broadcast";
    } else {
        return "Not existed";
    }
}
