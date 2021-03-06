#include <iostream>
#include <random>
#include <ctime>
#include <vector>

using namespace std;
using std::vector;

const int GRID_SIZE = 9;
const int CELLS_TO_REMOVE = 50;

class Sudoku {
private:
    bool n_in_quad(int n, int i, int j);
    bool n_in_col(int n, int j);

    vector<bool> get_quad_possibles(int i, int j);
    vector<bool> get_col_possibles(int j);
    vector<bool> get_row_possibles(int i);

    void set_cell_solved(int i, int j, int n);
    int check_solved_cells();
    void check_hidden_single(int i, int j);

    bool is_solution_right();
    void copy_solution();

    int grid[GRID_SIZE][GRID_SIZE];
    int solution[GRID_SIZE][GRID_SIZE];
    vector<bool> possibles[GRID_SIZE][GRID_SIZE];

    int solution_changes;
public:
    Sudoku();
    ~Sudoku() = default;

    void generate();
    bool solve();
    void draw();    
    void drawSolution();
};
