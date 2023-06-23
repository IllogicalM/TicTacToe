#include  "..\include\game.hpp"

void Game::Test(){
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL could not initialize: %s", SDL_GetError());
        return;
    }

    // Create a window
    SDL_Window* window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                                        800, 600, SDL_WINDOW_SHOWN);
    if (!window) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Failed to create window: %s", SDL_GetError());
        return;
    }

    // Create a renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Failed to create renderer: %s", SDL_GetError());
        return;
    }

    // Set the render color to blue
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

    // Clear the window
    SDL_RenderClear(renderer);

    // Update the window surface
    SDL_RenderPresent(renderer);

    // Wait for a few seconds
    SDL_Delay(2000);

    // Cleanup and quit
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}