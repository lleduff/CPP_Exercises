#pragma once

#include <Card.hpp>

using namespace std;

enum class Attribute {
    Dark,
    Divine,
    Earth,
    Fire,
    Light,
    Water,
    Wind,
};

inline string to_symbol(Attribute attribute) {
    switch (attribute) {
        case Attribute::Dark:
            return u8"闇";
        case Attribute::Divine: 
            return u8"神";
        case Attribute::Earth:
            return u8"地";
        case Attribute::Fire:
            return u8"炎";
        case Attribute::Light:
            return u8"光";
        case Attribute::Water:
            return u8"水";
        case Attribute::Wind:
            return u8"風";
    }
};

class Monster: public Card {
    public:
        Monster(const string id, const string name, Attribute attribute, const string unknown, int atk, int def)
            : Card { id, CardType::Monster }
            , _attribute { attribute }
            , _unknown { unknown }
            , _atk { atk }
            , _def { def }
            {
                set_name(name);
            }
    
        Attribute get_attribute() const {
            return _attribute;
        }

        int get_atk() const {
            return _atk;
        }

        int get_def() const {
            return _def;
        }

        string get_description() const {
            return "[" + _unknown + "]\n" + Card::get_description() + "\nATK/" + to_string(_atk) + " DEF/" + to_string(_def);
        }         

    private:
        Attribute _attribute;
        string _unknown;
        int _atk;
        int _def;
};