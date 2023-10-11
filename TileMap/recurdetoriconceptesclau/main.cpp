#include <iostream>
#include <fstream>
#include <vector>
#include "TileMap.hpp"
#include "SFML/Graphics.hpp"

using namespace sf;
bool loadMapFromFile(const std::string& filename, std::vector<int>& level);

int main()
{
    RenderWindow window(VideoMode(1000, 1000), "Tilemap");

    // Ask the user for the map file name
    std::string mapFileName;
    std::cout << "entre el nom del mapa (mapa.txt, mapa2.txt, mapa3.txt): ";
    std::cin >> mapFileName;

    std::vector<int> level;
    if (!loadMapFromFile(mapFileName, level))
    {
        std::cerr << "error al carrega el mapa mira que no sigui un error ortografic!: " << mapFileName << std::endl;
        return -1;
    }

    TileMap map;
    if (!map.load("tileset.png", Vector2u(32, 32), level.data(), 18, 18))
    {
        std::cerr << "Failed to load the map." << std::endl;
        return -1;
    }

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(map);
        window.display();
    }

    return 0;
}

bool loadMapFromFile(const std::string& filename, std::vector<int>& level)
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Failed to open map file: " << filename << std::endl;
        return false;
    }

    level.clear();

    int value;
    while (file >> value)
    {
        level.push_back(value);
    }

    file.close();
    return true;
}
