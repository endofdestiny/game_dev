//
//  TextureHolder.h
//  zombie_horde
//


#pragma once
#ifndef TextureHolder_h
#define TextureHolder_h


#include <SFML/Graphics.hpp>
#include <map>

using namespace sf;
using namespace std;



class TextureHolder
{
private:
    std::map<std::string, Texture> m_Textures;
    
    static TextureHolder* m_s_Instance;    //singleton: static pointer of same type as the class


    
public:
    TextureHolder();
    //returns a reference without needing an instance
    static Texture& GetTexture(string const& filename);
    
};



#endif /* TextureHolder_h */
