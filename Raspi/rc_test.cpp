#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <chrono>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

using namespace std;

// Function to configure terminal settings to get input without pressing Enter
void configure_terminal_for_input() {
    struct termios t;
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag &= ~ICANON;  // Disable buffered input
    t.c_lflag &= ~ECHO;    // Disable echoing of input
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
}

// Function to restore terminal settings
void restore_terminal_settings() {
    struct termios t;
    tcgetattr(STDIN_FILENO, &t);
    t.c_lflag |= ICANON;   // Enable buffered input
    t.c_lflag |= ECHO;     // Enable echoing of input
    tcsetattr(STDIN_FILENO, TCSANOW, &t);
}

// Function to send data over the serial connection
void send_data(const string &data) {
    // Open serial port (adjust port name if needed)
    ofstream serial("/dev/ttyACM0");
    if (serial.is_open()) {
        serial << data;
        serial.flush();  // Ensure data is sent immediately
        cout << "Sent to Arduino: " << data;
    } else {
        cerr << "Failed to open serial port." << endl;
    }
}

int main() {
    this_thread::sleep_for(chrono::seconds(2));  // Wait for the Arduino to initialize

    cout << "Press and hold keys to send them. Press Esc to stop." << endl;

    // Set terminal to read input without pressing Enter
    configure_terminal_for_input();

    char key;
    while (true) {
        key = getchar();  // Get a single character input
        if (key == 27) {  // Escape key ASCII code is 27
            break;  // Stop the program
        }
        if (key >= 32 && key <= 126) {  // Only send printable characters
            string data(1, key);  // Convert char to string
            send_data(data + "\n");
        }
    }

    // Restore terminal settings
    restore_terminal_settings();

    return 0;
}
