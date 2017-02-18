#include <string>
#include <vector>
#include <iostream>

using namespace std;

double result1 , result;

struct num {
	double n;

};



double minimum( vector<num>& vpin){
		double i = 0;
		double q = 1;
		double min;

		for(q=1; q<=vpin.size()-2; q++){
			if (!(vpin[i].n >= vpin [q].n)){
				min = vpin[i].n;
			}
				else{
					min = vpin[q].n;
					i++;
				}
			}
		return min;
}



double maximum( vector<num>& vpin){
		double i = 0;
		double q = 1;
		double max;

		for(q=1; q<=vpin.size()-2; q++){
			if ((vpin[i].n >= vpin [q].n)){
				max = vpin[i].n;
			}
				else{
					max = vpin[q].n;
					i++;
				}
			}
		return max;
}

double average( vector<num>& vpin ){
	for( int i = 0; i<= vpin.size()-2; i++){
		result1= result + vpin[i].n;
		result = result1 ;
	}

	return (result)/(vpin.size()-1);
}

double average(vector<num>& vpin);
double minimum(vector<num>& vpin);
double maximum(vector<num>& vpin);

int main () {
	vector<num> vp;
	num tmpp;
	do{
		cin >> tmpp.n;
		vp.push_back(tmpp);
		} while (! ( tmpp.n == 0 ));

	cout << "you have entered" << endl;
	for(int i=0; i <= vp.size()-2; i++){
		cout << vp[i].n << endl;
	}
	cout << "the average is " << average(vp) << endl;
	cout << "the minimum is"<< minimum(vp) << endl;
	cout << "the maximum is" << maximum(vp) <<endl;
}

