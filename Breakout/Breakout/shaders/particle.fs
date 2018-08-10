#version 430 core
in vec2 TexCoords;
in vec4 ParticleColor;
out vec4 color;

uniform sampler2D particle;

void main()
{
    color = (texture(particle, TexCoords) * ParticleColor);
}