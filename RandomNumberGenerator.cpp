#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RandomNumberGenerator.h"

#pragma once 

using namespace std; 

class RandomNumberGenerator {

    srand(time());
    int randomNumber = rand(); 
};