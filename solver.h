/**
 * Created Apr. 2, 2018 by YF-Tung
 * This project is distributed under MIT license
 **/

// IO related
#include <iostream>
#include <fstream>
#include <sstream>
// Data structure & algorithms
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <stack>
#include <queue>
// Other libraries
#include <cmath>
#include <climits>

using namespace std;

class Solver {
  public:
    enum solver_type {
      GCJ_SOLVER,
      GENERAL_SOVER
    };

    solver_type type_;
    Solver(solver_type s_type) {
      type_ = s_type;
    }
    void solve(int argc, char** argv) {
      switch (type_) {
        case GCJ_SOLVER:
          solve_gcj(argc, argv);
        default:
          solve_general(argc, argv);
      }
    }
    void solve_gcj(int argc, char** argv);
    void solve_general(int argc, char** argv);
    void solve_one_case(fstream&, fstream&);
};

