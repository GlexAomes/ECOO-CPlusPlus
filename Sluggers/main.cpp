//Problem 1
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	string title;
	string seperator = "====================";
	string team[10];
	double integers[7];
	double batAv, slugAv;
	double bigTenBatAv = 0;
	double bigTenSlugAv = 0;
	stringstream bigBat;
	stringstream bigSlug;
	string batAvg, slugAvg, bigTenBatAvg, bigTenSlugAvg;
	double A;
	cout << "Enter season title" << endl;
	getline(cin, title);
	cout << "Title: " << title << endl << seperator << endl;
	for (int i = 0; i < 10; i++){
	cout << "Enter team name " << (i+1) << endl;
	cin >> team[i];
	for (int x = 0; x<7; x++){
	    cout << "Enter " << team[i] << "'s score for game " << (x+1) << endl;
	    cin >> integers[x];
	}
	stringstream bat;
	stringstream slug;
	A = integers[3] - integers[4] - integers[5] - integers[6];
	batAv = integers[3]/integers[1];
	bigTenBatAv += batAv;
	slugAv = (A + 2 * integers[4] + 3 * integers[5] + 4 * integers[6])/integers[1];
	bigTenSlugAv += slugAv;
	cout << team[i] << ": ";
	bat << fixed << setprecision(3) << round(batAv*1000)/1000;
	bat >> batAvg;
	if(batAv < 1){
	    batAvg.erase(0,1);
	}
	slug << fixed << setprecision(3) << round(slugAv*1000)/1000;
	slug >> slugAvg;
	if(slugAv < 1){
	    slugAvg.erase(0,1);
	}
	cout << batAvg << " " << slugAvg << endl;
	}
	
	bigBat << fixed << setprecision(3) << (round(bigTenBatAv*1000)/1000)/10;
	bigBat >> bigTenBatAvg;
	if (bigTenBatAv/10 < 1){
	    bigTenBatAvg.erase(0,1);
	}
	bigSlug << fixed << setprecision(3) << (round(bigTenSlugAv*1000)/1000)/10;
	bigSlug >> bigTenSlugAvg;
	if (bigTenSlugAv/10 < 1){
	    bigTenSlugAvg.erase(0,1);
	}
	cout << seperator << endl << "Big 10 Av: " << bigTenBatAvg << " " << bigTenSlugAvg;
}
