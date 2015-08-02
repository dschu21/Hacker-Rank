#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
   	int numInput;
   	vector<int> v(20);

   	cin >> numInput;
   	for (int i = 0; i < numInput; i++)
   		cin >> v[i];

   	for (int j = 0; j < numInput; j++)
   		cout << v[v[j] - 1]<< endl;

    return 0;
}