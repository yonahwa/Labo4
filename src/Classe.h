#include "raylib.h"

class Ball
{
private:
    int PosX = 150;
    int PosY = 250;
public:
    void Movement(int padPosX){
        int dirX, dirY = 1;
        if(PosY < 0 || PosY >500){
            dirY *= -1;
        }
        else {
            PosY += dirY;
        }

        if(PosX > padPosX && PosX < padPosX+50){
            dirX *= -1;
        }
        else{
            PosX += dirX;
        }
        DrawCircle(PosX,PosY,5,PURPLE);
    }
};

class Paddle
{
private:
    int PosX = 150;
    int PosY = 250;
public:
    void Move (){
        bool isKeydown(int key);
        if(isKeydown(KEY_A)){
            PosX -= 1;
        }
        if(isKeydown(KEY_D)){
            PosX +=1;
        }
        DrawRectangle(PosX,PosY,50,10,WHITE);
    }
    
};

