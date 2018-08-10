#ifndef PARTICLE_GENERATOR_H
#define PARTICLE_GENERATOR_H
#include <vector>

#include <glm/glm.hpp>

#include "game_object.h"


// Represents a single particle and its state
struct Particle {
	glm::vec2 Position, Velocity;
	glm::vec4 Color;
	float Life;

	Particle() : Position(0.0f), Velocity(0.0f), Color(1.0f), Life(0.0f) { }
};


// ParticleGenerator acts as a container for rendering a large number of 
// particles by repeatedly spawning and updating particles and killing 
// them after a given amount of time.
class ParticleGenerator
{
public:
	bool stuck = true;
	// Constructor
	ParticleGenerator(Shader shader, unsigned int texture, int amount);
	// Update all particles
	void Update(float dt, GameObject &object, int newParticles, glm::vec2 offset = glm::vec2(0.0f, 0.0f));
	// Render all particles
	void Draw();
	void Reset();
private:
	// State
	std::vector<Particle> particles;
	int amount;
	// Render state
	Shader shader;
	unsigned int texture;
	unsigned int VAO;
	// Initializes buffer and vertex attributes
	void init();
	// Returns the first Particle index that's currently unused e.g. Life <= 0.0f or 0 if no particle is currently inactive
	int firstUnusedParticle();
	// Respawns particle
	void respawnParticle(Particle &particle, GameObject &object, glm::vec2 offset = glm::vec2(0.0f, 0.0f));
};

#endif