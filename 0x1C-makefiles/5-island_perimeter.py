#!/usr/bin/python3
"""
Technical interview preparation:
Island Perimeter
"""


def island_perimeter(grid):
    """
    a function def island_perimeter(grid): that returns the perimeter of the
    island described in grid:
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0]) if grid else 0

    for y, row in enumerate(grid):
        for x, cell in enumerate(row):
            if cell == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    perimeter += 1
                if y == rows - 1 or grid[y + 1][x] == 0:
                    perimeter += 1
                if x == 0 or grid[y][x - 1] == 0:
                    perimeter += 1
                if x == cols - 1 or grid[y][x + 1] == 0:
                    perimeter += 1

    return perimeter
