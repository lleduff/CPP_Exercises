#pragma once

#include <string>

class PlushStore 
{

    public:
        PlushStore (const std::string& name)
        : _name {name}
        {}

        const std::string& get_name() const {
            return _name;
        }

        int get_wealth_amount() const {
            return _wealth_amount;
        }

        int get_stock_size() const {
            return _stock_size;
        }

        void loan(int value) {
            _wealth_amount += value;
            _debt_amount += value * 1.1;             
        }

        int get_debt_amount() const {
            return _debt_amount;
        }

        int make_plush(int price) {
            if (_wealth_amount > 0) {
                if (_wealth_amount >= price) {
                    _wealth_amount -= price;    
                } else {
                    _wealth_amount = 0;
                }
                _stock_size++;
                _experience++;
                return price + _experience;
            }
            return 0;
        }

        int get_experience() const {
            return _experience;
        }

    private: 
        std::string _name;
        int _wealth_amount = 0;
        int _stock_size = 0;
        int _debt_amount = 0u;
        int _experience = 0;
};