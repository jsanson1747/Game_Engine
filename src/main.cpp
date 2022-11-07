// main.cpp

#include <iostream>
#include "Scene.h"
#include "Sprite.h"

int main(int argv, char** args){
    Scene* scene = new Scene();
    scene->setGameName("Awesome Game");
    scene->initializeGraphics();

    const char* image_path = "small dude.png";
    Sprite* sprite = new Sprite(scene, image_path);

    sprite->draw();

    scene->start(); // <-- This one needs some work
    return(0);
}