#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Shader Example");

    // Load the shader
    sf::Shader shader;
    if (!shader.loadFromFile("fragmentShader.glsl", sf::Shader::Fragment)) {
        return 1; // Exit with an error code if shader loading fails
    }

    // Create a sprite to cover the entire window
    sf::Sprite sprite;
    sf::Texture texture;

    // Create a texture with a size matching the window
    texture.create(800, 600);

    // Set the texture for the sprite
    sprite.setTexture(texture);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window
        window.clear();
        // set background white
        window.clear(sf::Color::White);

        // Apply the shader
        window.draw(sprite, &shader);

        // draw a circle
        sf::CircleShape shape(100.f);
        shape.setFillColor(sf::Color::Green);
        // window.draw(shape, &shader);

        // Display the window
        window.display();
    }

    return 0;
}
