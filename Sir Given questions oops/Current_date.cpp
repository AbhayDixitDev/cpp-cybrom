#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Get the current time
    time_t currentTime = time(0);

    // Convert to local time
    tm* localTime = localtime(&currentTime);

    // Print the current date
    cout <<  localTime->tm_mday<<"/" <<(localTime->tm_mon+1)<<  "/" << (localTime->tm_year + 1900);

    return 0;
}
