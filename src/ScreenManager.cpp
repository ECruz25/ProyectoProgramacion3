#include "ScreenManager.h"

ScreenManager &ScreenManager::GetInstance()
{

    static ScreenManager instance;
    return instance;

}

ScreenManager::ScreenManager()
{
    //dtor
}

ScreenManager::~ScreenManager()
{
    //dtor
}

void ScreenManager::Initialize()
{

    currentScreen = new SplashScreen();

}

void ScreenManager::LoadContent()
{

    currentScreen->LoadContent();

}

void ScreenManager::UnloadContent()
{

    currentScreen->UnloadContent();

}

void ScreenManager::Update()
{

    currentScreen->Update();

}

void ScreenManager::Draw(ALLEGRO_DISPLAY *display)
{

    currentScreen->Draw(display);

}

