#include "VideoMedia.h"

VideoMedia::VideoMedia(string category, string id, string name, int length, string genre): category(category), id(id), name(name), length(length), genre(genre), meanRating(0), numRating(0){
}

VideoMedia::~VideoMedia(){}

void VideoMedia::toGrade(){
    int newRating = 0;
    while (newRating < 1 or newRating > 5){
        cout<<"Qué calificación de 1 a 5 le das? ";
        cin>> newRating;
        if(newRating < 1 or newRating > 5){
            cout<< "Lo siento, esa no es una calificación disponible, intente de nuevo"<<endl;
        }
    }

    meanRating = (meanRating * numRating + newRating) / (numRating + 1);
    numRating = numRating + 1;
    
    cout<<"Calificacion Promedio: "<<meanRating<<endl;
}

void VideoMedia::minRating(int parameter, float minGrade){
    if(parameter == 1){
        if(category == "p"){
            if(meanRating >= minGrade){
                cout<<id<<", "<<name<< ", "<< meanRating<<endl;
            }
        }
    }
    
    else if(parameter == 2){
        if(category == "c"){
            if(meanRating >= minGrade){
                cout<<id<<", "<<name<< ", "<< meanRating<<endl;
            }
        }
    }
    
    else if(parameter == 3){
        if(meanRating >= minGrade){
            cout<<id<<", "<<name<< ", "<< meanRating<<endl;
        }
    }
}

void VideoMedia::genreSearch(int parameter, string genreChoice){
    if(parameter == 1){
        if(category == "p"){
            if(genre == genreChoice){
                if(meanRating == 0){
                    cout<<id<<", "<<name<< ", "<<genre<<", SC"<<endl;
                }
                else{
                    cout<<id<<", "<<name<< ", "<<genre<<", "<< meanRating<<endl;
                }
            }
        }
    }
    
    else if(parameter == 2){
        if(category == "c"){
            if(genre == genreChoice){
                if(meanRating == 0){
                    cout<<id<<", "<<name<< ", "<<genre<<", SC"<<endl;
                }
                else{
                    cout<<id<<", "<<name<< ", "<<genre<<", "<< meanRating<<endl;
                }
            }
        }
    }
    
    else if(parameter == 3){
        if(genre == genreChoice){
            if(meanRating == 0){
                cout<<id<<", "<<name<< ", "<<genre<<", SC"<<endl;
            }
            else{
                cout<<id<<", "<<name<< ", "<<genre<<", "<< meanRating<<endl;
            }
        }
    }
}

string VideoMedia::getId(){
    return id;
}
