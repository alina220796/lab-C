#include <cmath>
#include <iostream>

using namespace std;

class Utils {
    public:
        static float read_input_float(std::string name) {
            float input;
            cout << "\nВведите " + name + ": " << endl;
            cin >> input;
            return input;
        }
        static int read_input_int(std::string name) {
            int input;
            cout << "\nВведите " + name + ": " << endl;
            cin >> input;
            return input;
        }
        static double calc_g(float a, float x) {  return (7 * (4 * pow(a, 2) + 15 * a * x - 4 * pow(x, 2))) / (-45 * pow(a, 2) + 26 * a * x + 7 * pow(x, 2)); }
        static double calc_f(float a, float x) {  return pow(2, (40 * pow(a, 2) - 107 * a * x + 63 * pow(x, 2))); }
        static double calc_y(float a, float x) {  return log(-pow(a, 2) - 2 * a * x + 3 * pow(x, 2) + 1); }
};
