#pragma once
#include <iostream>
using namespace std;
#include "VideoMedia.h"

class Movie: public VideoMedia{
public:
    Movie(string category, string id, string name, int length, string genre);
    string print() override;
};

