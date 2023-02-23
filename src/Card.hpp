#pragma once

#include <string>

using namespace std;

enum class CardType {
    Monster,
    Spell,
    Trap,
};

inline string to_string(CardType type) {
    switch (type) {
        case CardType::Monster:
            return "Monster";
        case CardType::Spell:
            return "Spell";
        case CardType::Trap:
            return "Trap";
    }
}

class Card {
    public:
        Card(const string id, CardType type)
            : _id { id }
            , _type { type }
        {}

        string get_id() const {
            return _id;
        }

        CardType get_type() const {
            return _type;
        }

        string get_name() const {
            return _name;
        }

        string get_description() const {
            return _description;
        }

        void set_name(const string name) {
            _name = name;
        }

        void set_description(const string description) {
            _description = description;
        }
        
    private:
        string _id;
        CardType _type;
        string _name;
        string _description;
};