# Cub3d Project 

## What is it?

Project that I made in School 21  (aka Ecole 42) inspired by first ever FPS game Wolfenstein 3D. The aim of the project is to 
explore ray-casting mechanism and make your own implementation of engine. That engine must render dynamic view in a 
maze. We made this project with partner (https://github.com/yakomisar). He was responsible for parsing and 
checking validity of the map. My part was to implement ray-casting and key treatment. Subject of this project is in 
subject.pdf

## How to launch?

Use ``make`` to compile the project on Mac or ``make linux`` on linux.
Then run ``./cub3d maps/1.ber`` to render map.

- W A S D to move in the maze
- LEFT / RIGHT directional key to rotate camera
- ESC to quit

Use different maps from maps folder or create your own. You can find description of map format in subject.pdf.

## Requirements

| MacOS   | Linux |
|---------|-------|
| GCC     | GCC   |
| OpenGL  | xorg  |
| AppKit  | x11   |
|         | zlib  |

## Resuorces

- https://lodev.org/cgtutor/raycasting.html
- https://lodev.org/cgtutor/raycasting2.html
- https://lodev.org/cgtutor/raycasting3.html
- https://youtu.be/gYRrGTC7GtA
- https://youtu.be/xW8skO7MFYw
