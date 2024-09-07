//Q.4) Create  a Abstract class Player having method play() and pause() as pure virtual function.
//       Define its related child class where you have to implement this functions . (Music ,Vedio,Game)      

#include <iostream>
using namespace std;

// Abstract class Player
class Player {
public:
    // Pure virtual functions
    virtual void play() = 0;
    virtual void pause() = 0;
};

// Child class Music
class Music : public Player {
public:
    void play() {
        cout << "Music is playing..." << endl;
    }

    void pause() {
        cout << "Music is paused." << endl;
    }
};

// Child class Video
class Video : public Player {
public:
    void play() {
        cout << "Video is playing..." << endl;
    }

    void pause() {
        cout << "Video is paused." << endl;
    }
};

// Child class Game
class Game : public Player {
public:
    void play() {
        cout << "Game is running..." << endl;
    }

    void pause() {
        cout << "Game is paused." << endl;
    }
};

int main() {
    // Create objects of child classes
    Music music;
    Video video;
    Game game;

    // Play and pause music
    music.play();
    music.pause();

    // Play and pause video
    video.play();
    video.pause();

    // Play and pause game
    game.play();
    game.pause();

    return 0;
}