#ifndef BOOK_GAME_HPP
#define BOOK_GAME_HPP

#include <Book/ResourceHolder.hpp>

#include <SFML/Graphics.hpp>

#include <iostream>
namespace Textures
{
	enum ID
	{
		Landscape,
		Airplane,
	};
}

class Game : private sf::NonCopyable
{
public:
	Game();
	void					run();

private:
	void					processEvents();
	void					update(sf::Time elapsedTime);
	void					render();

	void					updateStatistics(sf::Time elapsedTime);
	void					handlePlayerInput(sf::Keyboard::Key key, bool isPressed);


private:
	static const float		PlayerSpeed;
	static const sf::Time	TimePerFrame;

	sf::RenderWindow		mWindow;
	sf::Texture				mBackgroundTexture;
	sf::Font				mFont;
	sf::Text				mStatisticsText;
	sf::Time				mStatisticsUpdateTime;
	sf::Sprite				landscape;
	sf::Sprite				airplane;

	// Try to load resources
	ResourceHolder<sf::Texture, Textures::ID> textures;

	std::size_t				mStatisticsNumFrames;
	bool					mIsMovingUp;
	bool					mIsMovingDown;
	bool					mIsMovingRight;
	bool					mIsMovingLeft;


};

#endif // BOOK_GAME_HPP
