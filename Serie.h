#pragma once
#include <iostream>
using namespace std;
#include "VideoMedia.h"

class Serie: public VideoMedia{
private:
    string seriesName;
    int chapter;

public:
    Serie(string category, string id, string name, int length, string genre, string seriesName, int chapter);
    string print() override;
};



