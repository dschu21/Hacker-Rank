#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int player;
	vector<string>maze(3);
	cin>>player>>maze[0]>>maze[1]>>maze[2];

	if (maze[2][2]=='#' && maze[1][2]!='#')
		cout<<"RIGHT"<<endl;
	else if (maze[0][2]=='#' && maze[0][1]!='#')
		cout<<"UP"<<endl;
	else if (maze[0][0]=='#' && maze[1][0]!='#')
		cout<<"LEFT"<<endl;
	else if (maze[2][0]=='#' && maze[2][1]!='#')
		cout<<"DOWN"<<endl;
	else
		cout<<"UP"<<endl;

	
    return 0;
}
