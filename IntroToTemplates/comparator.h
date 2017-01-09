#pragma once

class LT{
public:
    bool operator() (const int& lhs, const int& rhs) const {
        return (lhs < rhs);
    }
};

class GT{
public:
    bool operator() (const int& lhs, const int& rhs) const {
        return (lhs > rhs);
    }
};


