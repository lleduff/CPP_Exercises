#pragma once

class Plush
{
public:
    Plush()
    {}
    
    Plush(const int cost)
        : _cost { cost }
    {}

    int get_cost() const
    {
        return _cost;
    }

    void set_cost(int value)
    {
        _cost = value;
    }

private:
    int _cost = 10;
};