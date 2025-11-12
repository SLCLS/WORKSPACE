import cv2
import numpy as np
from image_processing import find_circles

def generate_puzzle_map(image_path):
    # Load the image
    image = cv2.imread(image_path)
    if image is None:
        raise FileNotFoundError(f"Image file not found at {image_path}")

    # Find circles in the image
    formatted_image, circles_list = find_circles(image)
    num_circles_detected = len(circles_list)

    # Define the size of the grid
    grid_size = 7
    puzzle_map = [['x' for _ in range(grid_size)] for _ in range(grid_size)]

    # Populate the puzzle map with 1s for detected circles
    for circle in circles_list:
        x, y, radius = circle
        grid_x = x // (image.shape[1] // grid_size)
        grid_y = y // (image.shape[0] // grid_size)
        if grid_x < grid_size and grid_y < grid_size:
            puzzle_map[grid_y][grid_x] = 1

    # Adjust the puzzle map to match the specified format
    for i in range(grid_size):
        for j in range(i + 1):
            if puzzle_map[i][j] == 'x':
                puzzle_map[i][j] = 0

    return puzzle_map, num_circles_detected

def display_puzzle_map(puzzle_map, num_circles_detected):
    count_ones = sum(row.count(1) for row in puzzle_map)
    count_zeros = sum(row.count(0) for row in puzzle_map)
    print(f"Total circles detected: {num_circles_detected}")
    print(f"Number of circles (1s): {count_ones}")
    print(f"Number of empty spaces (0s): {count_zeros}")
    for row in puzzle_map:
        print("[" + ", ".join(map(str, row)) + "]")

if __name__ == "__main__":
    image_path = r"C:\WORKSPACE\ARROW-SOLVER\images\screen.jpg"
    puzzle_map, num_circles_detected = generate_puzzle_map(image_path)
    display_puzzle_map(puzzle_map, num_circles_detected)