# Searching Stick

Welcome to **Searching Stick**, a project designed to visually demonstrate and compare various search algorithms. Built using C++ and SFML, this interactive tool brings search algorithms to life, helping learners and developers better understand the efficiency and functionality of different search techniques.

## Features

- **Algorithm Visualizer**: Watch search algorithms such as Linear Search and Binary Search process data step-by-step.
- **Search Comparison**: Compare the efficiency of Linear and Binary Search algorithms.
- **Interactive SFML Graphics**: The visualizer provides smooth and responsive graphics, making it easy to follow each step of the search process.
- **Learning-Oriented Design**: A tool crafted with educational intent, perfect for visual learners who want to deepen their understanding of algorithms.

## Learning Outcomes

- **Search Algorithms**: Gained practical understanding of how Linear and Binary Search algorithms work.
- **SFML Framework**: Gained hands-on experience using SFML to create engaging and interactive visualizations.
- **Object-Oriented Programming**: Structured the project with services, controllers, and models to ensure clean, modular design.
- **Algorithm Optimization**: Learned the comparative efficiency of Linear and Binary Search in different scenarios.

## Project Structure

### Services and Their Model, Controllers

- **GraphicService**: Manages game window and rendering operations.
- **EventService**: Handles user input and game events.
- **TimeService**: Manages game timing and countdowns.
- **SoundService**: Manages sound effects and music playback.
- **UIService**: Manages UI components.
  - **UI Controllers**: `SplashScreenUIController`, `MainMenuUIController`, `GameplayUIController`
  - **UI Elements**: `UIView`, `TextView`, `ImageView`, `ButtonView`, `AnimatedImageView`, `RectangleShapeView`
  - **UI Interface**: `IUIController`
- **GameplayService**: Manages core gameplay mechanics.
  - **Controllers**: `GameplayController`, `StickCollectionController`
  - **Models**: `StickCollectionModel`
  - **Views**: `GameplayView`, `StickCollectionView`
  - **Stick**: Structure representing the stick data in the search algorithms.

### Additional Core Components
- **Main**: Entry point of the game.
- **GameService**: Core service that initializes and manages the game.
- **ServiceLocator**: Coordinates the initialization, updating, and rendering of all services, ensuring smooth communication between components.
- **Config**: Manages global configurations like file paths for assets, textures, sounds, and fonts.

## How to Play

- **Objective**: Select a search algorithm and visualize how it works to find a target item within a collection.
- **Controls**: 
  - Choose a search algorithm from the main menu.
  - Watch as the algorithm processes the data, and observe the search steps.

## How to Build and Run

1. Clone the repository:

```bash
git clone https://github.com/123rishiag/Searching-Stick.git
```

2. Build the project using your preferred C++ compiler.

3. Ensure that SFML is installed. Follow the installation instructions provided on the [SFML website](https://www.sfml-dev.org/).

4. Run the executable to start the algorithm visualizer.

## Video Demo

Check out the [Video Demo](https://www.loom.com/share/5ec2d8df38e9496680f3a4f08974ed22?sid=097b58e3-8e49-4362-a9a9-95da34bdce7c) to see Searching Stick in action!