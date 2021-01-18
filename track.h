#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class track
{
	int poz =0;
	int durata =0; //secunde
	string nume_track ="---";
	public:
		track(){}
		track(int p,int d,string n):poz(p),durata(d),nume_track(n){}
		inline int get_durata_track()
		{
			return durata;
		}
		friend istream& operator>>(istream& d,track& a)
		{
			d>>a.poz;
			d>>a.durata;
			d>>a.nume_track;
			return d;
		}
		friend ostream& operator<<(ostream& d,const track& a)
		{
			d<<a.nume_track<<"("<<a.durata<<"s)"; //setfill(' ')<<setw(30)<<
			return d;
		}
};
