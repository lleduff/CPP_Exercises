#pragma once

class Plush
{
public:
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