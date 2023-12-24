#include <iostream>
#include <string>
using namespace std;

template <class T>
class Div {
public:
    Div(T x, T y) {
        cout << x / y << endl;
    }
};

template <> //Indicates a template specialization
class Div<string> {//specialization for a string type
public:
    Div(string x, string y) {
        cout << x.size() / y.size() << endl;
    }
};

int main() {
    string a, b;
    cin >> a >> b;
    int x, y;
    cin >> x >> y;

    Div<string> d2(a, b);//looks and uses specialized version (div class for strings)
    Div<int> d1(x, y); //uses generic class

    return 0;
}
