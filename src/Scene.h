// Scene.h

#ifndef _SCENE_H_
#define _SCENE_H_

#include <SDL2/SDL.h>
#include <unordered_map>
#include <string>
#include <list>
#include "SDL_image.h"

class Sprite;

class Scene{
    private:
        SDL_Renderer* renderer_;
        SDL_Window* window_;
        SDL_Event* event_;
        char* gameName_;
        std::unordered_map<std::string, int>* backgroundColor_;
        std::unordered_map<std::string, int>* size_;
        //std::unordered_map<std::string, int>* position_;
        std::list<Sprite*>* sprites_;
        int frameRate_;
        std::list<bool>* keyStates_;
        bool mouseButtonState_;

    public:
        // Constructors
        Scene();
        Scene(Scene*);

        // Deconstructor
        ~Scene();

        // Getters and Setters
        SDL_Renderer* getRenderer(void);
        void setRenderer(SDL_Renderer* renderer);
        SDL_Window *getWindow();
        void setWindow(SDL_Window *);
        SDL_Event *getEvent();
        void setEvent(SDL_Event *);
        char* getGameName(void);
        void setGameName(char*);
        std::unordered_map<std::string, int> *getBackgroundColor(void);
        void setBackgroundColor(int, int, int);
        std::unordered_map<std::string, int>* getSize(void);
        void setSize(int height, int width);
        //std::unordered_map<std::string, int>* getPosition(void);
        //void setPosition(int xPos, int yPos);
        std::list<Sprite*>* getSprites(void);
        void setSprites(std::list<Sprite*>*);
        int getFrameRate(void);
        void setFrameRate(int);
        std::list<bool>* getKeyStates(void);
        void setKeyStates(std::list<bool>*);
        bool getMouseClickState(void);

        // Methods
        void initializeGraphics();
        void start();
        void end();
        void pause();
        void clear();
        void hideCursor();
        void showCursor();
        void getMousePos();
        void hide();
        void show();
        void quit();

}; // end class declaration

#endif