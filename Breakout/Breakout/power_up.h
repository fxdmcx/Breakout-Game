#ifndef POWER_UP_H
#define POWER_UP_H
#include <string>

#include <glm/glm.hpp>

#include "game_object.h"


// The size of a PowerUp block
const glm::vec2 PUBSIZE(60, 20);
// Velocity a PowerUp block has when spawned
const glm::vec2 VELOCITY(0.0f, 150.0f);


// PowerUp inherits its state and rendering functions from
// GameObject but also holds extra information to state its
// active duration and whether it is activated or not. 
// The type of PowerUp is stored as a string.
class PowerUp : public GameObject
{
public:
	// PowerUp State
	std::string Type;
	float       Duration;
	bool        Activated;
	// Constructor
	PowerUp(std::string type, glm::vec3 color, GLfloat duration, glm::vec2 position, unsigned int texture)
		: GameObject(position, PUBSIZE, texture, color, VELOCITY), Type(type), Duration(duration), Activated() { }
};

#endif