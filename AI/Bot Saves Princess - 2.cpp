#include <iostream>
#include <vector>
using namespace std;
void nextMove(int n, int r, int c, vector <string> grid){
      int i, j, up, left;
      short princess[2];

      for (i = 0; i < n; ++i) 
      {
        for (j = 0; j < n; ++j) 
        {
          if (grid[i][j] == 'p') 
          {
            princess[0] = i;
            princess[1] = j;
          }
        }
      }

      if ((up = princess[0] - r) < 0) 
        cout << "UP" << endl;
      else if (up > 0) 
        cout << "DOWN" << endl;

      if ((left = princess[1] - c) < 0)
        cout << "LEFT" << endl;
      else if (left > 0) 
        cout << "RIGHT" << endl;
}
int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
