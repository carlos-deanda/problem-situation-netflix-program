#pragma once
#include <iostream>
using namespace std;

class VideoMedia{
protected:
    string category;
    string id;
    string name;
    int length;
    string genre;
    float meanRating;
    int numRating;

public:
    VideoMedia(string category, string id, string name, int length, string genre);
    virtual ~VideoMedia();
    void toGrade();
    void minRating(int parameter, float minGrade);
    void genreSearch(int parameter, string genreChoice);
    virtual string print() = 0;
    string getId();

};
