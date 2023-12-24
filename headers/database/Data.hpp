#pragma once
#include <vector>
#include "parsing.hpp"

class Data
{
private:
    std::string name_;
    std::vector<float> value_;
    using elements_type_ = libs::lines_type;

public:
    void set(const elements_type_ &elements)
    {
        this->name_ = elements[0];
        for (int i = 0; i < elements.size(); i++)
        {
            value_[i] = libs::line_to_float(elements[i]);
        }
        std::cout << value_[0];
    }
    
};