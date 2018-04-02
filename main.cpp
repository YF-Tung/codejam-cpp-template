/**
 * Created Apr. 2, 2018 by YF-Tung
 * This project is distributed under MIT license
 **/
#include "solver.h"

void Solver::solve_one_case (fstream& fin, fstream& fout) {
}

void Solver::solve_gcj(int argc, char** argv) {
  string case_name = "A-small";
  if (argc >= 2) case_name = string(argv[1]);

  fstream fin, fout;
  fin.open(case_name + ".in", ios::in);
  fout.open(case_name + ".out", ios::out);
  int num_case = -1;
  fin >> num_case;
  for (int case_idx = 1; case_idx <= num_case; case_idx++) {
    solve_one_case(fin, fout);
  }
}

void Solver::solve_general(int argc, char** argv) {
}

int main(int argc, char** argv) {
  Solver solver(Solver::solver_type::GCJ_SOLVER);
  solver.solve(argc, argv);
}

