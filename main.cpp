#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
#include "OOPUtils.h"
#include "VideoMedia.h"
#include "Movie.h"
#include "Serie.h"
#include "Functions.h"


//se investigó funcion stoi() para convertir de string a int.
//se usó el código OOPUtils visto en clase.
// para el operator overload (usado con la función print()), fue inspirada en una idea de mi compañero Guillermo de la Torre.
// investigué getline() de free code academy, y también usé stackoverflow.com al tener problemas https://es.stackoverflow.com/questions/17306/por-qu%C3%A9-no-funciona-el-getline.

vector <VideoMedia*> allVideoMedia;

int main() {
    
    allVideoMedia = openFile(allVideoMedia);
    
    cout<<"Bienvenido al programa ES CINE"<<endl;
    int userOption = 0;
    
    while(userOption != 9){
        cout<<"1. Mostrar todo el catalogo con calificaciones. 2. Calificar un video. 3. Mostrar peliculas o capitulos con una calificacion minima determinada. 4. Mostrar peliculas o capitulos de un cierto genero. 9. Salir."<<endl;
        cout<<"Qué quieres hacer? ";
        cin>>userOption;
        
        if (userOption == 1){
            option1(allVideoMedia);
        }
        
        else if (userOption == 2){
            option2(allVideoMedia);
        }
        
        else if (userOption == 3){
            option3(allVideoMedia);
        }
        
        else if (userOption == 4){
            option4(allVideoMedia);
        }
        
        else if (userOption == 9){
            cout<<"Gracias por usar el programa"<<endl;
        }
        
        else{
            cout<<"Lo siento, no es una opción disponible"<<endl;
        }
    }
    
    for(VideoMedia* media : allVideoMedia){
        delete media;
    }

    return 0;
}
