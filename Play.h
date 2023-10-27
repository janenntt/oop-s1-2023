#ifndef PLAY_H
#define PLAY_H
#include "Spot.h"
#include "Assists.h"
#include "Snare.h"
#include "Persona.h"

class Play {
    private:
        std::vector<Spot*> matrix;
        std::vector<Spot*>& getMatrix(){
            return matrix;
        }
    public:
        initPlay(int numPersonas, int numSnares, int matrixWidth, int matrixHeight){
            for (int i = 0; i < numPersonas; i++) {
                std::tuple<int,int> loc = Assists::evaluateDistance(matrixWidth, matrixHeight);
                int x = std::get<0>(loc);
                int y = std::get<1>(loc);
                Persona *persona = new Persona(x,y);
                matrix.push_back(persona);
            }

            for (int i = 0; i < numSnares; i++){
                std::tuple<int,int> loc = Assists::evaluateDistance(matrixWidth, matrixHeight);
                int x = std::get<0>(loc);
                int y = std::get<1>(loc);
                Snare *snare = new Snare(x,y);
                matrix.push_back(snare);
            }
        }

};
#endif