#ifndef GRADUATE_H
#define GRADUATE_H

#include <algorithm>
#include "core.h"

class Graduate : public Core{
public:
    Graduate();
    Graduate(std::istream& in);

    std::istream& read(std::istream& in);

    double grade() const;

private:
    double thesis;
};

#endif