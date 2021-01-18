#include "persoana.h"
#include <map>
class artist:public persoana
{
	public: multimap<int,album> multi_album;
	public:
		artist(){}
		artist(string nn,int vv):persoana(nn,vv){}
		artist(string nn,int vv,multimap<int,album> v_a):persoana(nn,vv)
		{
			multi_album=v_a;
		}
		multimap<int,album> get_multi_album(){
			return multi_album;
		}
//		friend istream& operator>>(istream& d,artist& a)
//		{
//			d>>a.nume;
//			d>>a.varsta;
//			
//			return d;
//		}
		friend ostream& operator<<(ostream& d,const artist& a)
		{
			d<<(persoana)a;
			multimap<int,album>::const_iterator it;
			for(it = a.multi_album.begin(); it!=a.multi_album.end();++it)
				d<<it->second;
			return d;
		}
		void add_album(const pair<int,album>& per_noua)
		{
			multi_album.insert(per_noua);
		}
		void erase_album(int an)
		{
			multi_album.erase(an);
		}
		void erase_album(string nume){
			for(multimap<int,album>::iterator it = multi_album.begin(); it != multi_album.end(); ++it)
				if(it->second.get_nume_album() == nume){
					multi_album.erase(it);
					break;
				}
		}
		void modif_album(string nume,const pair<int,album>& per_noua)
		{
			this->erase_album(nume);
			this->add_album(per_noua);
		}
		void modif_album(int an,const pair<int,album>& per_noua)
		{
			this->erase_album(an);
			this->add_album(per_noua);
		}
		void afis_album_btw(int begin,int end)
		{
			for(multimap<int,album>::iterator it = multi_album.begin(); it != multi_album.end(); ++it)
				if(it->second.get_an_ap() >= begin && it->second.get_an_ap() <= end)
					cout<<it->second;
		}
};
