#ifndef SCREENMANAGER_H
#define SCREENMANAGER_H

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>

#include <iostream>
#include <string>

#include "GameScreen.h"
#include "SplashScreen.h"

class ScreenManager
{
    public:
        virtual ~ScreenManager(void);
        static ScreenManager &GetInstance();
        void Initialize();
        void LoadContent();
        void UnloadContent();
        void Update();
        void Draw(ALLEGRO_DISPLAY *display);

    private:
        ScreenManager();
        ScreenManager(ScreenManager const&);
        void operator=(ScreenManager const&);

        std::string text;

        GameScreen *currentScreen, *newScreen;

};

#endif // SCREENMANAGER_H
