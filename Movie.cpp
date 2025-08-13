#include "Movie.h"


Movie::Movie(string category, string id, string name, int length, string genre): VideoMedia(category, id, name, length, genre){
}

    
string Movie::print(){
    if(numRating != 0){
            return id + ", " + name + ", " + to_string(length) +", " + genre +", "+ to_string(meanRating);
    }
    else{
            return id + ", " + name + ", " + to_string(length) + ", " + genre + ", SC ";
    }
}
