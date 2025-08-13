#include "Serie.h"

Serie::Serie(string category, string id, string name, int length, string genre, string seriesName, int chapter): VideoMedia(category, id, name, length, genre), seriesName(seriesName), chapter(chapter){
}

string Serie::print(){
    if(numRating != 0){
            return id + ", " + name + ", " + to_string(length) +", " + genre +", "+ seriesName + ", " + to_string(chapter)+ ", " + to_string(meanRating);
    }
    else{
            return id + ", " + name + ", " + to_string(length) + ", " + genre + ", " + seriesName + ", " + to_string(chapter) + ", SC ";
    }
}
