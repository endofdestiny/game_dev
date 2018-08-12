//
//  Bullet.h
//  zombie_horde
//

#pragma once
#ifndef Bullet_h
#define Bullet_h

#include <SFML/Graphics.hpp>

using namespace sf;


class Bullet
{
private:
    Vector2f m_Position;
    
    RectangleShape m_BulletShape;
    
    bool m_InFlight = false;
    
    float m_BulletSpeed = 1000;
    
    // What fraction of 1 pixel does the bullet travel,
    // Horizontally and vertically each frame?
    // These values will be derived from m_BulletSpeed
    float m_BulletDistanceX;
    float m_BulletDistanceY;
    
    // Some boundaries so the bullet doesn't fly forever
    float m_MaxX;
    float m_MinX;
    float m_MaxY;
    float m_MinY;

public:
    // The constructor
    Bullet();
    
    // Stop the bullet
    void stop();
    
    // Returns the value of m_InFlight
    bool isInFlight();
    
    // Launch a new bullet
    void shoot(float startX, float startY,
               float xTarget, float yTarget);
    
    // Tell the calling code where the bullet is in the world
    FloatRect getPosition();
    
    // Return the actual shape (for drawing)
    RectangleShape getShape();
    
    // Update the bullet each frame
    void update(float elapsedTime);


};




#endif /* Bullet_h */
