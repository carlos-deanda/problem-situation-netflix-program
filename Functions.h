#pragma once
#include <iostream>
#include <fstream>
using namespace std;
#include "VideoMedia.h"
#include "Movie.h"
#include "Serie.h"
#include "OOPUtils.h"

vector <VideoMedia*> openFile(vector <VideoMedia*> allVideoMedia);
void option1(vector <VideoMedia*> allVideoMedia);
void option2(vector <VideoMedia*> allVideoMedia);
void option3(vector <VideoMedia*> allVideoMedia);
void option4(vector <VideoMedia*> allVideoMedia);
