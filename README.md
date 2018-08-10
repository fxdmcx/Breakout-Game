# Breakout-Game
a classic 2D game implemented with OpenGL

The scheme of game refers to LearnOpenGL's "In Practice" chapter, with some modifications. Used GLAD to configure OpenGL function calls and "std_image.h" to load images and generate textures. Add some logic to make sure particles are spawned only when the ball object is moving. Another change is reallocating the framebuffer objects when user resized the window so that the scene wouldn't stretch out.

The game process is relatively simple. It mainly contains three parts: Firstly, in the Init function initialize all the gameplay state and load the shaders, textures. Then in the main game loop, process the user input using ProcessInput function and update all gameplay events (like player/ball movement) in the Update function, and finally render the game scene by calling Render. Here we split the movement logic from the render logic.
