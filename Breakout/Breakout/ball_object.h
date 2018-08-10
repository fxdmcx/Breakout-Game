#ifndef BALLOBJECT_H
#define BALLOBJECT_H

#include <glm/glm.hpp>

#include "game_object.h"
#include "power_up.h"

// BallObject holds the state of the Ball object inheriting
// relevant state data from GameObject. Contains some extra
// functionality specific to Breakout's ball object that
// were too specific for within GameObject alone.
class BallObject : public GameObject
{
public:
	// Ball state	
	float Radius;
	bool  Stuck;
	bool  Sticky, PassThrough;
	// Constructor(s)
	BallObject();
	BallObject(glm::vec2 pos, float radius, glm::vec2 velocity, unsigned int ballTexture);
	// Moves the ball, keeping it constrained within the window bounds (except bottom edge); returns new position
	glm::vec2 Move(float dt, int window_width);
	// Resets the ball to original state with given position and velocity
	void Reset(glm::vec2 position, glm::vec2 velocity);
};

#endif