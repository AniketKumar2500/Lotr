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

class Gollum : public RingBearer {
public:
    Gollum() : RingBearer("Gollum") {}

    void talk() {
        std::cout << name << ": My precious!\n";
    }

    void guideRingBearer() {
        std::cout << name << ": Guiding the way through the treacherous path.\n";
    }
};

int main() {
    Sauron sauron;
    OneRing oneRing;
    Gollum gollum;

    // Sauron reveals his characteristics
    sauron.shapeShifting();
    sauron.malice();

    // One Ring informs Sauron
    oneRing.informSauron();

    // Gollum, the Ring Bearer, resists the corruptive influence initially
    gollum.resistCorruption();

    // Sauron uses the One Ring's corruptive influence on Gollum
    oneRing.useCorruptiveInfluence(sauron);

    // Gollum talks and guides the way
    gollum.talk();
    gollum.guideRingBearer();

    return 0;
}
