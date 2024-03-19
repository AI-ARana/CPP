#include<iostream>
using namespace std;

class Distance {
protected:
    int feet;
    float inch;

public:
    Distance() {
        feet = 0;
        inch = 0;
    }
    Distance(int f, float i) {
        feet = f;
        inch = i;
    }
    void get() {
        cout << "\nEnter Feet: ";
        cin >> feet;
        cout << "\nEnter Inch: ";
        cin >> inch;
    }
    void show() {
        cout << endl << feet << "\'-" << inch << "' '";
    }
    Distance operator + (Distance d) {
        int ft = feet + d.feet;
        float in = inch + d.inch;
        if (in >= 12) {
            in -= 12;
            ft++;
        }
        return Distance(ft, in);
    }
};

class Dist : public Distance {
public:
    Dist() : Distance() 
    {

    }
    Dist(int f, float i) : Distance(f, i) 
    {
        
    }

    Dist operator + (Dist d) {
        int ft = feet + d.feet;
        float in = inch + d.inch;
        if (in >= 12) {
            in -= 12;
            ft++;
        }
        return Dist(ft, in);
    }

    Dist operator - (Dist d) {
        int ft = feet - d.feet;
        float in = inch - d.inch;
        if (in < 0) {
            in += 12;
            ft--;
        }
        return Dist(ft, in);
    }
};

int main() {
    Dist d1(10, 6.5);
    Dist d2, d3;
    d2.get();
    d3 = d1 + d2;
    d1.show();
    d2.show();
    d3.show();
    return 0;
}
