#include "TileMap.hpp"


//bool TileMap::load(const std::string& tileset, sf::Vector2u tileSize, const int* tiles, unsigned int width, unsigned int height)
//{
	//int CornerNumber = 6;
	//if (!m_tileset.loadFromFile(tileset))
	//	return false;

	//m_vertices.setPrimitiveType(sf::Triangles);
	//m_vertices.resize(width * height * CornerNumber);

	//for (unsigned int i= 0;i<width; ++i)
	//	for (unsigned int j = 0; j < height; ++j)
	//	{
	//		int tileNumber = tiles[i + j * width];

	//		int tu = tileNumber % (m_tileset.getSize().x / tileSize.x);
	//		int tv = tileNumber / (m_tileset.getSize().x / tileSize.x);

	//	sf::Vertex * Triangles = &m_vertices[(i + j * width) * CornerNumber];

	//		Triangles[0].position = sf::Vector2f(i * tileSize.x, j * tileSize.y);
	//		Triangles[1].position = sf::Vector2f((i+1 )* tileSize.x, j * tileSize.y);
	//		Triangles[2].position = sf::Vector2f(i * tileSize.x, (j+1) * tileSize.y);
	//		Triangles[3].position = sf::Vector2f(i * tileSize.x, (j + 1) * tileSize.y);
	//		Triangles[4].position = sf::Vector2f((i + 1) * tileSize.x, j * tileSize.y);
	//		Triangles[1].position = sf::Vector2f((i + 1) * tileSize.x, (j+1) * tileSize.y);

	//		Triangles[0].texCoords = sf::Vector2f(tu * tileSize.x, tv * tileSize.y);
	//		Triangles[1].texCoords = sf::Vector2f((tu + 1) * tileSize.x, tv * tileSize.y);
	//		Triangles[2].texCoords = sf::Vector2f(tu * tileSize.x, (tv + 1) * tileSize.y);
	//		Triangles[3].texCoords = sf::Vector2f(tu * tileSize.x, (tv + 1) * tileSize.y);
	//		Triangles[4].texCoords = sf::Vector2f((tu + 1) * tileSize.x, tv * tileSize.y);
	//		Triangles[1].texCoords = sf::Vector2f((tu + 1) * tileSize.x, (tv + 1) * tileSize.y);
	//	}

//	return true;
//}
//void TileMap::draw(sf::RenderTarget& target, sf::RenderStates states) const
//{
//
//	//states.transform *= getTransform();
//
//	////aply the tileset texture
//	//states.texture = &m_tileset;
//
//	////draw the vertex array
//	//target.draw(m_vertices, states);
//}