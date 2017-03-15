#include <ctime>
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {
srand(time(NULL));
int a = rand () % 20; vector<int>mas,mas_p,mas_n_p; int vsp_mas;
for(int q =0; q < a; q++) {vsp_mas = rand () % 100; mas.push_back(vsp_mas);}

for(int q =0; q < a; q++) {if(mas[q] % 2 == 0) mas_p.push_back(mas[q]); else {mas_n_p.push_back(mas[q]);}}


for(int q =0; q < a; q++) cout << mas[q] << " "; cout << endl;

for(int q =0; q < mas_p.size(); q++) cout << mas_p[q] << " ";cout << endl;


for(int q =0; q < mas_n_p.size(); q++) cout << mas_n_p[q] << " ";cout << endl;

}
