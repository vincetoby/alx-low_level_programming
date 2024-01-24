#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid
    """
    perimeter = 0
    rows, cols = len(grid) - 1, len(grid[0]) - 1

    for i, i_content in enumerate(grid):
        # i is the index of the current row
        # i_content is the content of the current row
        for j, j_content in enumerate(i_content):
            # j is the index of the current element in the row
            # j_content is the value of the current element
            # Check if the current cell is land
            if j_content == 1:
                # Check top neighbor
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check left neighbor
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Check right neighbor
                if j == cols or grid[i][j + 1] == 0:
                    perimeter += 1
                # Check bottom neighbor
                if i == rows or grid[i + 1][j] == 0:
                    perimeter += 1

    return perimeter
