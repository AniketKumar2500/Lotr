#include <iostream>
#include <string>

class Sauron {
public:
    int power = 100;

    void shapeShifting() {
        std::cout << "Sauron: You can change your form!\n";
    }

    void malice() {
        std::cout << "Sauron: You are filled with malice.\n";
    }

    void corrupt() {
        std::cout << "Sauron: You become corrupted.\n";
    }
};

class OneRing : public Sauron {
public:
    int power = 50;

    void informSauron() {
        std::cout << "Sauron: Leading orcs to the ringbearer.\n";
    }

    void useCorruptiveInfluence(Sauron& target) {
        std::cout << "One Ring: Using corruptive influence on the target.\n";
        target.corrupt();
    }
};

class RingBearer {
public:
    std::string name;

    RingBearer(std::string n) : name(n) {}

    void resistCorruption() {
        std::cout << name << ": Resisting the corruptive influence of the One Ring.\n";
    }
};

int main() {
    Sauron sauron;
    OneRing oneRing;
    RingBearer frodo("Frodo Baggins");

    sauron.shapeShifting();
    sauron.malice();

    oneRing.informSauron();

    frodo.resistCorruption();

    oneRing.useCorruptiveInfluence(sauron);

    return 0;
}
