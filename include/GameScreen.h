#ifndef GAMESCREEN_H
#define GAMESCREEN_H

#include <allegro5/allegro.h>

class GameScreen
{
    public:
        GameScreen();
        ~GameScreen();

        virtual void LoadContent();
        virtual void UnloadContent();
        virtual void Update();
        virtual void Draw(ALLEGRO_DISPLAY *display);
    protected:
    private:
};

#endif // GAMESCREEN_H
