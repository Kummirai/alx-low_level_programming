
fcantor
/
holbertonschool-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
holbertonschool-low_level_programming/0x1B-makefiles/5-island_perimeter.py

Francesca Cantor Fixed PEP8 styling
 0 contributors
Executable File  26 lines (21 sloc)  719 Bytes
#!/usr/bin/python3
""" Island Perimeter problem """


def island_perimeter(grid):
    """ Returns the perimeter of the island within the grid """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    if not grid:
        return (0)

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                if (c - 1) < 0 or grid[r][c-1] == 0:
                    perimeter += 1
                if (c + 1) == cols or grid[r][c+1] == 0:
                    perimeter += 1
                if (r - 1) < 0 or grid[r-1][c] == 0:
                    perimeter += 1
                if (r + 1) == rows or grid[r+1][c] == 0:
                    perimeter += 1

    return (perimeter)
