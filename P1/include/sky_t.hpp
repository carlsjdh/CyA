#pragma once

#include <vector>
#include <random>
#include <iostream>
#include "point_t.hpp"

using namespace std;

namespace CyA
{
    class sky_t: public vector<point_t>
{
    public:
        sky_t():
        vector<point_t>(){}
        
        ~sky_t(void) {}
        
        void read(istream& is);
        void write(ostream& os) const;
        void generate(int x_sz, int y_sz, int sz);
};

}


istream& operator>>(istream& is, CyA::sky_t& a);

ostream& operator<<(ostream& os, const CyA::sky_t& a);
