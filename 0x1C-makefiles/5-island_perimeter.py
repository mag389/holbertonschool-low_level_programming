#!/usr/bin/python3
"""the island perimeter problem"""


def island_perimeter(grid):
    """finds the total perimeter of the island"""

    perimeter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                if (i > 0 and grid[i - 1][j] == 0) or i == 0:
                    perimeter += 1
                if (j > 0 and grid[i][j - 1] == 0) or j == 0:
                    perimeter += 1
                if (i < len(grid) - 1 and grid[i + 1][j] == 0):
                    perimeter += 1
                if i == len(grid) - 1:
                    perimeter += 1
                if j < len(grid[i]) - 1 and grid[i][j + 1] == 0:
                    perimeter += 1
                if j == len(grid[i]) - 1:
                    perimeter += 1
    return perimeter
