#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <glm/glm.hpp>

#include "sprite_renderer.h"


// Container object for holding all state relevant for a single
// game object entity. Each object in the game likely needs the
// minimal of state as described within GameObject.
class GameObject
{
public:
	// Object state
	glm::vec2   Position, Size, Velocity;
	glm::vec3   Color;
	float       Rotation;
	bool        IsSolid;
	bool        Destroyed;
	// Render state
	unsigned int objectTexture;
	// Constructor(s)
	GameObject();
	GameObject(glm::vec2 pos, glm::vec2 size, unsigned int objectTexture,
				glm::vec3 color = glm::vec3(1.0f), glm::vec2 velocity = glm::vec2(0.0f, 0.0f));
	// Draw sprite
	virtual void Draw(SpriteRenderer &renderer);
};

#endif