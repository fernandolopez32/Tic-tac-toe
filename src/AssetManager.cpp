#include "AssetManager.hpp"
#include <iostream>
namespace Sonar
{
    void AssetManager::LoadTexture(std::string name, std::string fileName)
{
    sf::Texture tex;

    try {
        if (tex.loadFromFile(fileName)) {
            this->_textures[name] = tex;
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Failed to load texture: " << e.what() << std::endl;
    }
}
    // void AssetManager::LoadTexture (std::string name, std::string fileName)
    // {
    //     sf::Texture tex;

    //     if(tex.loadFromFile(fileName))
    //     {
    //         this-> _textures[name] = tex;
    //     }
    // }

sf::Texture& AssetManager::GetTexture(std::string name)
{
    try
    {
        return this->_textures.at(name);
    }
    catch (const std::out_of_range& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        std::cerr << "Texture with name '" << name << "' not found." << std::endl;
        std::exit(EXIT_FAILURE); // Terminate the program
    }
}

    // sf::Texture &AssetManager::GetTexture(std::string name )
    // {
    //      return this-> _textures.at(name);
    // }

    void AssetManager::LoadFont (std::string name, std::string fileName)
    {
        sf::Font font;

        if(font.loadFromFile(fileName))
        {
            this-> _fonts[name] = font;
        }
    }

    sf::Font &AssetManager::GetFont(std::string name )
    {
         return this-> _fonts.at(name);
    }
}