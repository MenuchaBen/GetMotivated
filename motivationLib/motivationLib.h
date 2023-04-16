#pragma once

#include <iostream>
#include <string>

class MotivationLib {
    public:
        int getMaxMotivationSentenceIndex();
        const std::string& getMotivationSentenceByIndex(int index);
};


