#include "Functions.h"

ostream& operator<<(ostream& os, VideoMedia& m) {
    os << m.print();
    return os;
}

vector <VideoMedia*> openFile(vector <VideoMedia*> allVideoMedia){
    //ifstream file("/Users/Carlos/Desktop/Object-Oriented Programming/ProblemSituation/ProblemSituation/videos.txt");
    ifstream file("videos.txt");
    string currentLine;
    string delimeter = ",";

    
    while(getline(file, currentLine)){
        vector <string> mediaDetails = OOPUtils::split(currentLine, delimeter);
        
        if (mediaDetails[0] =="p"){
            VideoMedia* newMovie = new Movie(mediaDetails[0], mediaDetails[1], mediaDetails[2], stoi(mediaDetails[3]), mediaDetails[4]);
            allVideoMedia.push_back(newMovie);
        }
        
        else if (mediaDetails[0] == "c"){
            VideoMedia* newSerie = new Serie(mediaDetails[0], mediaDetails[1], mediaDetails[2], stoi(mediaDetails[3]), mediaDetails[4], mediaDetails[5], stoi(mediaDetails[6]));
            allVideoMedia.push_back(newSerie);
        }
    }

    file.close();
    return allVideoMedia;
}


void option1(vector <VideoMedia*> allVideoMedia){
    for(VideoMedia* media : allVideoMedia){
        cout<<*media<<endl;
    }
}

void option2(vector <VideoMedia*> allVideoMedia){
    string idToGrade;
    cout<<"Cál es el ID del video a calificar? ";
    cin>>idToGrade;
    for(VideoMedia* media : allVideoMedia){
        if(media->getId() == idToGrade){
            media->toGrade();
        }
    }
}


void option3(vector <VideoMedia*> allVideoMedia){
    int userOption2 = 0;
    int parameter = 0;
    float minGrade;
    
    while (userOption2 < 1 or userOption2 > 3){
        cout<<"Que quiere ver? Introduzca el número. 1. Películas. 2. Capítulo. 3. Ambos: ";
        cin>>userOption2;
        if(userOption2 == 1){
            parameter = 1;
        }
        
        else if(userOption2 == 2){
            parameter = 2;
        }
        
        else if(userOption2 == 3){
            parameter = 3;
        }
        
        else{
            cout<< "Lo siento, esa no es una opción disponible, intente de nuevo"<<endl;
        }
    }
    
    cout<<"Cuál es la calificación mínima a checar? ";
    cin>>minGrade;
    for(VideoMedia* media : allVideoMedia){
        media->minRating(parameter, minGrade);
    }
}

void option4(vector <VideoMedia*> allVideoMedia){
    int userOption3 = 0;
    int parameter = 0;
    string genreChoice;
    
    while (userOption3 < 1 or userOption3 > 3){
        cout<<"Que quiere ver? Introduzca el número. 1. Películas. 2. Capítulo. 3. Ambos: ";
        cin>>userOption3;
        if(userOption3 == 1){
            parameter = 1;
        }
        
        else if(userOption3 == 2){
            parameter = 2;
        }
        
        else if(userOption3 == 3){
            parameter = 3;
        }
        
        else{
            cout<< "Lo siento, esa no es una opción disponible, intente de nuevo"<<endl;
        }
    }
    
    cout<<"Cuál es el genero que quiere checar? ";
    cin.ignore();
    getline(cin, genreChoice);
    for(VideoMedia* media : allVideoMedia){
        media->genreSearch(parameter, genreChoice);
    }
}
