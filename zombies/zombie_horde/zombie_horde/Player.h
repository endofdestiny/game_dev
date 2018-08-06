//
//  Player.h
//  zombie_horde
//

#ifndef Player_h
#define Player_h


#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;


class Player
{
    
private:
    const float START_SPEED = 200;
    const float START_HEALTH = 100;
    
    //where is the player?
    Vector2f m_Position;
    
    //graphics
    Sprite m_Sprite;
    
    Texture m_Texture;
    
    //screen res
    Vector2f m_Resolution;
    
    //current area size
    IntRect m_Arena;
    
    //How big is each tile?
    int m_TileSize;
    
    //current player direction
    bool m_UpPressed;
    bool m_DownPressed;
    bool m_LeftPressed;
    bool m_RightPressed;
    
    //player health
    int m_Health;
    
    //maximum player health
    int m_MaxHealth;
    
    //when was player last hit
    Time m_LastHit;
    
    //Speed in pixels per s
    float m_Speed;
    
    
public:
    Player();
    
    void spawn(IntRect arena, Vector2f resolution, int tileSize);
    
    // call this at end of every game
    void resetPlayerStats();
    
    // handle player getting hit by zombie
    bool hit(Time timeHit);
    
    //how long ago was player last hit
    Time getLastHitTime();
    
    //Where is the player?
    FloatRect getPosition();
    
    //Where is the centre of the player?
    Vector2f getCenter();
    
    //Which angle is the player facing?
    float getRotation();
    
    //send a copy of sprite to main
    Sprite getSprite();
    
    // move the player
    void moveRight();
    void moveLeft();
    void moveUp();
    void moveDown();
    
    //stop the player
    void stopLeft();
    void stopRight();
    void stopUp();
    void stopDown();
    
    
    //update frame
    void update(float elapsedTime, Vector2i mousePosition);
    
    //give player a speed boost
    void upgradeSpeed();
    
    //give the player some health
    void upgradeHealth();
    
    //incrase the maximum amount of health the player can have
    void increaseHealthLevel(int amount);
    
    //current health status
    int getHealth();
};






#endif /* Player_h */
