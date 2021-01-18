#include "track.h"
#include "vector"
class album
{
	int an_aparitie =0;
	string nume_album ="!!!!";
	vector<track> v_track;
	public:
		album(){}
		album(int a,string n,vector<track> vv):an_aparitie(a),nume_album(n)
		{
			v_track=vv;
		}
//		friend istream& operator>>(istream& d,album& a)
//		{
//			int nl = 8, i =0;//a.numar_linii(d);
//			d>>a.an_aparitie;
//			d>>a.nume_album;//(d, a.nume_album);
//    		while (d>>v_track[i]){
////    			int cp,cd;
////    			string cn;
////    			d>>cp;
////    			d>>cd;
////    			d>>cn;
////    			track copie(cp,cd,cn);
////    			a.add_track(copie);
////				nl-=3;
//				i++;	
////    			if((nl - 2) % 3 == 0){
////    			    
////				}
//
//			}
//			return d;
//		}
		int numar_linii(istream& d){
			int nl = 0;
			string line;
			while(getline(d,line))
				++nl;
			return nl;
		}
		friend ostream& operator<<(ostream& d,const album& a)
		{
			d<<a.an_aparitie<<" "<<a.nume_album<<": "; //setfill(' ')<<setw(6)<<  <<setfill(' ')<<setw(12)
			if (a.v_track.size() == 1)
					d<<a.v_track[0];
			else
				{
					d<<a.v_track[0];
					for(int i=1;i<a.v_track.size();i++)
				  		d<<", "<<a.v_track[i];  //setfill(' ')<<setw(18)<<
				}
			d<<endl;
			return d;
		}
		void add_track(const track& tt)
		{
			v_track.push_back(tt);
		}
		void erase_track(vector<track>::iterator poz)
		{
			v_track.erase(poz);
		}
		void modif_track(int poz,const track& el_nou)
		{
			v_track[poz]=el_nou;
		}
		int get_durata_album()
		{
			int a=0;
			for(int i=0;i<v_track.size();i++)
				a+=v_track[i].get_durata_track();
			return a;
		}
		int how_many_longer_than(const int& x)
		{
			int k=0;
			for(int i=0;i<v_track.size();i++)
				if(v_track[i].get_durata_track()>x)
					k++;
			return k;
		}
		//pentru compararea anilor
		bool operator<(const album& a)
		{
			if(this->an_aparitie<=a.an_aparitie)
				return true;
		}
		bool operator>(const album& a)
		{
			return !(*this<a);
		}
		int get_an_ap()
		{
			return an_aparitie;
		}
		string get_nume_album(){
			return nume_album;
		}
		vector<track> get_vector(){
			return v_track;
		}
};
