#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

void stuAve(vector<vector<double>>  &v) {
 int sum = 0;
 for (int i = 0; i < v.size(); i++) {
  sum = 0;
  for (int j = 0; j < v[i].size(); j++) {
   sum += v[i][j];
  }
  v[i].push_back (sum / 3.0);
 }
}
double* courseAve(vector<vector<double>>& stuScore) {
 double *Average = new double[3];
 double total = 0;

 for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 5; j++) {
   total += stuScore[j][i];
  }
  Average[i] = total / 5.0;
  total = 0;
 }
 return Average;
}


int main() {

 vector<vector<double>> v(5);

 v[0].push_back(80.0);
 v[0].push_back(70.0);
 v[0].push_back(90.0);
 v[1].push_back(85.0);
 v[1].push_back(77.0);
 v[1].push_back(95.0);
 v[2].push_back(83.0);
 v[2].push_back(75.0);
 v[2].push_back(70.0);
 v[3].push_back(73.0);
 v[3].push_back(95.0);
 v[3].push_back(67.0);
 v[4].push_back(88.0);
 v[4].push_back(79.0);
 v[4].push_back(71.0);

 stuAve(v);

 for (unsigned int i = 0; i < v.size(); i++) {
  for (unsigned int j = 0; j < v[i].size(); j++){
   cout << fixed <<setprecision(1) << v[i][j] ;
   if(j!=3)
    cout << ", ";

  }
  cout << endl;
 }

 cout << "Average:";

 for (int i = 0; i < 2; i++) {
  cout << fixed << setprecision(1) << *(courseAve(v) + i) << ", ";
 }
 cout << fixed << setprecision(1) << *(courseAve(v) + 2);

 
}