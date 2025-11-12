# ARROW-SOLVER
An "Arrow Puzzle" (Hard Difficulty) solver for the game "Exponential Idle" that uses cv2 (OpenCV) for Puzzle Mapping and PpADB (Pure Python ADB) for Automation.

## OVERVIEW
This program can solve **Arrow Puzzle** in **Hard** difficulty automatically. It implements Computer Vision using **CV2** and it process the image to recognize the puzzle Circles and it's color on the screen. PpADB is then used for Android connection, thus, this program works for **Android devices only**.

## REQUIREMENTS
- Enable `USB Debugging` on your Android Device by enabling it through the Developer Settings.
- Download `ADB` from Android Developer [SDK Platform Tools](https://developer.android.com/tools/releases/platform-tools). Run it on your Computer Device.
- Install the  `venv` Python Module to create an Isolated Virtual Environment for the Program.
- Support for `Python v3.8` or higher.

## Installation
- Clone/Download this Repository.
- Create an Isolated Virtual Environment. (Enable `venv`)
- Install requirements:
    ```bash
    pip install -r requirements.txt
    ```
- Connect your phone to your PC. (USB Debugging)
- Open Exponential Idle > Puzzles > Arrow Puzzle Hard/Expert
- Open solver.py, modify this line:
    ```python
    solve_puzzle_on_phone(max_color, times)
    ```
  Where `max_color` is the number of colors depending on the mode (Hard - `2`, Expert - `6`) and `times` is how many times do you want to solve the puzzle. And finally, run `solver.py`.