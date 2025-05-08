#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    int m_MaxSeating;
    int m_price;

    void m_UpdatePrice(int base = 500000) {
        m_price = m_MaxSeating * base;
    }

public:
    string m_brand;
    string m_model;
    int m_year;

    Car(string x, string y, int z, int s) {
        m_brand = x;
        m_model = y;
        m_year = z;
        m_MaxSeating = s;
        m_UpdatePrice();
    }

    int get_MaxSeating() {
        return m_MaxSeating;
    }

    int get_Price() {
        return m_price;
    }
};

class BMW_Car : public Car {
private:
    string m_DriveMode;

public:
    BMW_Car(string y, int z, int s, string mode)
        : Car("BMW", y, z, s), m_DriveMode(mode) {}

    string get_DriveMode() {
        return m_DriveMode;
    }
};

class AUDI_Car : public Car {
private:
    string m_DriveMode;

public:
    AUDI_Car(string y, int z, int s, string mode)
        : Car("Audi", y, z, s), m_DriveMode(mode) {}

    string get_DriveMode() {
        return m_DriveMode;
    }
};

#include <iostream>
using namespace std;

class Car {
public:
    Car() {
        cout << "Constructing Car" << endl;
    }
    virtual void DriveMode() const = 0;
};

class BMW_Car : public Car {
public:
    BMW_Car() {
        cout << "Constructing BMW_Car" << endl;
    }
    void DriveMode() const override {
        cout << "BMW : Drive Mode = Rear-wheel" << endl;
    }
};

class AUDI_Car : public Car {
public:
    AUDI_Car() {
        cout << "Constructing AUDI_Car" << endl;
    }
    void DriveMode() const override {
        cout << "Audi : Drive Mode = Front-wheel" << endl;
    }
};

class BENZ_Car : public Car {
public:
    BENZ_Car() {
        cout << "Constructing BENZ_Car" << endl;
    }
    void DriveMode() const override {
        cout << "Benz : Drive Mode = Front-wheel" << endl;
    }
};

int main() {
    BMW_Car bmw;
    bmw.DriveMode();

    AUDI_Car audi;
    audi.DriveMode();

    BENZ_Car benz;
    benz.DriveMode();

    return 0;
}
