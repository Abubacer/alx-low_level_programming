#!/usr/bin/python3

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    if not grid:
        return 0

    island_perimeter = 0
    # Get the number of rows, columns in the grid.
    grid_rows = len(grid)
    grid_cols = len(grid[0])

    for row in range(grid_rows):
        for col in range(grid_cols):
            # we Check if the current cell is land.
            if grid[row][col] == 1:
                # we start by adding 4 sides to the perimeter count.
                island_perimeter += 4
                # check if there's a neighboring landcell on the left.
                if col > 0 and grid[row][col - 1] == 1:
                    island_perimeter -= 2
                # check if there's a neighboring landcell on the top.
                if row > 0 and grid[row - 1][col] == 1:
                    island_perimeter -= 2

    return island_perimeter
