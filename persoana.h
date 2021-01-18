#include <iostream>
#include <string>
using namespace std;
class persoana
{
	protected:
	string nume ="||||";
	int varsta =0;
	public:
		persoana(){}
		persoana(string a,int var):nume(a),varsta(var){}
		friend istream& operator>>(istream& d,persoana& a)
		{
			d>>a.nume;
			d>>a.varsta;
			return d;
		}
		friend ostream& operator<<(ostream& d,const persoana& a)
		{
			d<<a.nume<<" "<<a.varsta<<"ani"<<endl; //<<setfill(' ')<<setw(5)
			return d;
		}
		string get_nume_pers()
		{
			return nume;
		}
		int get_varsta_pers()
		{
			return varsta;
		}
};
