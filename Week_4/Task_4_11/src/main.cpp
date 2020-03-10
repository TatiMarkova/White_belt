/****************************
 * Coursera                 *
 * White belt               *
 * @autor: Tatiana Markova  *
 * task: 4_11                *
 ****************************/

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <exception>

using namespace std;

int GCD(int a, int b) {
    while (a % b)
        swap(a %= b, b);
    return b;
}

class Rational {
public:
    Rational() {
        n = 0;
        d = 1;
    }

    Rational(int numerator, int denominator) {
        if (denominator == 0) {
            throw invalid_argument("invalid_argument");
        }
        const int gcd = GCD(numerator, denominator);
        n = numerator / gcd;
        d = denominator / gcd;
        if (denominator < 0) {
            denominator = -denominator;
            numerator = -numerator;
        }
    }

    int Numerator() const {
        return n;
    }

    int Denominator() const {
        return d;
    }

private:
    int n;
    int d;
};

//#2
bool operator==(const Rational& l, const Rational& r) {
    return (l.Numerator() == r.Numerator()) &&
           (l.Denominator() == r.Denominator());
}

Rational operator+(const Rational& l, const Rational& r) {
    return Rational{(l.Numerator() * r.Denominator()) + 
                    (r.Numerator() * l.Denominator()), 
                    l.Denominator() * r.Denominator()};
}

Rational operator-(const Rational& l, const Rational& r) {
    return Rational{(l.Numerator() * r.Denominator()) - 
                    (r.Numerator() * l.Denominator()), 
                    l.Denominator() * r.Denominator()};
}

//#3
Rational operator*(const Rational& l, const Rational& r) {
    return Rational{ l.Numerator() * r.Numerator(), 
                     l.Denominator() * r.Denominator()};
}

Rational operator/(const Rational& l, const Rational& r) {
    if (r.Numerator() == 0) {
        throw domain_error("Division by zero");
    }
    return l * Rational{r.Denominator(), r.Numerator()};
}

//#4
ostream& operator<<(ostream& stream, const Rational& r) {
    stream << r.Numerator() << '/' << r.Denominator();
    return stream;
}

istream& operator>>(istream& stream, Rational& r) {
    int n, d;
    if (stream.good()) {
        stream >> n;
        if (stream.peek() != '/') {
            throw invalid_argument("invalid_argument");
        }
        else {
            stream.ignore(1);
        }
        stream >> d;
        r = Rational {n, d};
    } 
    return stream;
}

//#5
bool operator<(const Rational& l, const Rational& r) {
    return  ((l.Numerator() * r.Denominator()) < 
            (r.Numerator() * l.Denominator()));  
}

int main(int argv, char* argc[]) {
    Rational result, left, right;
    char op;
    try {
        cin >> left >> op >> right;
        if (op == '+') {
            result = left + right;
        }
        else if (op == '-') {
            result = left - right;
        }
        else if (op == '*') {
            result = left * right;
        }
        else { // (op == '/')
            result = left / right;
        } 
        cout << result << '\n';
    }
    catch (invalid_argument& e) {
        cout << e.what();
    }  
    catch (domain_error& e) {
        cout << e.what();
    } 
    return EXIT_SUCCESS;
}
