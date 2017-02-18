#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct mdate{
	int d;
	int m;
	int y;

	string to_s(){
		stringstream ss;
		cout << d << "/" << m << "/" << y;
		return ss.str();
	}
	bool before(mdate dt){
		if(y < dt.y){
			return true;
		}
		else{
			return false;
		}
		if( y == dt.y){
			if ( m < dt.m){
				return true;
			}
			else{
				return false;
			}
			if( m == dt.m ){
				if( d < dt.d){
					return true;
				}
				else{
					return false;
				}
			}


		}
	}
};

int main(){
	mdate date, past;
	cout << "Please enter a date:" << endl;
	cin >> date.d >> date.m >> date.y;
	cout << date.to_s() << "past";
	char answer;
	date = past;
	cin >> answer;
	while(( answer == 'y')){
			cout << "Please enter a date:" << endl;
			cin >> date.d >> date.m >> date.y;
			if(past.before(date)){
				cout << date.to_s() << endl;
				date = past;
			}
			else{
				cout << past.to_s();
			}
	}
}
