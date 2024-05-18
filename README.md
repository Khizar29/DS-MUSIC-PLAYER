# DS Music Player Project

## Introduction

Welcome to the DS Music Player Project! This project is a simple music player application developed using C++. It utilizes various data structures and file handling techniques to manage and play music tracks. The application features a menu-driven interface allowing users to play songs, view playlists, and see the most played tracks.

## Purpose

The primary purpose of this project is to demonstrate the practical implementation of data structures in managing a music player's functionality. It showcases the use of linked lists for storing songs, queues for playlist management, and file I/O for persistent storage of track information. Additionally, it highlights the use of basic control structures and user interaction in a console-based application.

## Tools Required

- **C++ Compiler:** Ensure you have a C++ compiler installed on your system. We recommend using GCC (GNU Compiler Collection).
- **Text Editor or IDE:** Use any text editor or Integrated Development Environment (IDE) of your choice. Examples include Visual Studio Code, CLion, or Code::Blocks.
- **Windows OS Libraries:** The project uses specific libraries such as `windows.h` and `mmsystem.h` which are available on Windows operating systems.

## Data Structures Used

- **Linked List:** Used for managing the list of songs.
- **Queue:** Used for managing playlists.
- **File I/O:** Used for saving and loading song and playlist information persistently.

## How to Run the Project

### Prerequisites

1. **C++ Compiler:** Ensure you have a C++ compiler installed.
2. **Windows OS:** The project is tailored for Windows OS due to dependencies on `windows.h` and `mmsystem.h` libraries.

### Steps to Run

1. **Clone the Repository:**
   ```sh
   git clone https://github.com/your-username/DS-Music-Player.git
   cd DS-Music-Player
   ```

2. **Compile the Project:**
   Open your terminal or command prompt in the project directory and compile the project using your C++ compiler. For example, if using GCC:
   ```sh
   g++ -o MusicPlayer main.cpp -lwinmm
   ```

3. **Run the Executable:**
   ```sh
   ./MusicPlayer
   ```

### Controls and Navigation

- **Main Menu:**
  - `1` : Play a Song
  - `2` : View Playlist
  - `3` : View Most Played Songs
  - `4` : Exit

- **During Playback:**
  - `A` : Play Previous Song
  - `D` : Play Next Song
  - `W` : Pause/Play
  - `:` : Options
    - `P` : Add Song to Playlist
    - `E` : Exit Player

## File Structure

- **main.cpp:** The main file containing the core logic and functionality of the music player.
- **MOSTREPEATS.cpp:** A helper file to manage the most played songs feature.
- **PL.txt:** Stores the list of songs.
- **PL NAMES.txt:** Stores the names of the playlists.
- **list.txt:** Stores the song keys.
- **SONG NAMES.txt:** Stores the names of the songs.

## Features

- **Play Songs:** Choose and play songs from the list.
- **Manage Playlists:** Create and manage playlists.
- **Track Most Played Songs:** Keep track of and display the most played songs.

## Conclusion

This project is a comprehensive demonstration of using data structures in C++ to build a functional music player application. It provides a hands-on approach to learning and implementing linked lists, queues, and file I/O operations. We hope you find this project educational and enjoyable.

Feel free to contribute and enhance the project by submitting issues and pull requests on the GitHub repository!

---

