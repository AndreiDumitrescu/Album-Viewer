#include "album.h"
#include "artist.h"
#include <fstream>
int main(int argc, char** argv) {

 //teste track

//	//test track
//	cout<<"Test track: ";
//	track a(3,2,"apa");
//	cout<<a<<endl;
//
//	//test cin
//	cout<<"Test cin: "<<endl;
//	track b;
//	cin>>b;
//	cout<<b<<endl;
//
//	//test citire fisier
//	track c;
//	cout<<"Test fisier: ";
//	fstream f1("a.txt",ios::in);
//	f1>>c;
//	cout<<c<<endl;
	
	
// teste album

//	//test cout
//	cout<<"Test album: ";
	track t1(1,140,"track1"),t2(2,120,"track2");
	track arr[] = {t1,t2};
	vector<track> vv(arr,arr + sizeof(arr) / sizeof(arr[0]));
	album qw(1984,"album1",vv);
//	cout<<qw;
//	
	//test cin
	cout<<"Test cin: ";
	album er;
	fstream f1("a.txt",ios::in);
	f1>>er;
//	vector<track> v= er.get_vector();
//	cout<<v[0];
//	for(int i=1;i<v.size();i++)
//		cout<<", "<<v[i];	
	cout<<er<<endl;
//	
//	//test add_track
//	cout<<"Test add_track: ";
//	qw.add_track(t2);
//	cout<<qw;
//	
//	//test modif_track
//	cout<<"Test modif_track: ";
//	qw.modif_track(0,t2);
//	cout<<qw;
//	
//	//test get_durata_album
//	cout<<"Nr secunde total: "<<qw.get_durata_album()<<endl;
//	
//	//test  how_many_longer_than
//	cout<<"Cate melodii mai lungi de 50 de secunde? "<<qw.how_many_longer_than(50)<<endl;
	
// teste persoana
	
//	//test cout
//	cout<<"Test persoana: ";
//	persoana pp("Carmen Ion",28);
//	cout<<pp<<endl;
//	
//	//test cin
//	persoana p1;
//	fstream f1("a.txt",ios::in);
//	f1>>p1;
//	cout<<p1;

	
//  teste artist
	
//	//test cout
//	cout<<"Test cout:"<<endl;	
//	artist art("artist",40);
//	pair<int,album> a1(qw.get_an_ap(),qw);
//	art.add_album(a1);
//	cout<<art;
//	
//	//test add_album
//	cout<<"Test add_album:"<<endl;
//	track t3(1,60,"track3"),t4(2,30,"track4");
//	track arr2[] = {t3,t4};
//	vector<track> vv2(arr2,arr2 + sizeof(arr2) / sizeof(arr2[0]));
//	album qw2(1970,"album2",vv2);
//	pair<int,album> a2(qw2.get_an_ap(),qw2);
//	art.add_album(a2);
//	cout<<art;
//	
//	//test erase_album
//	cout<<"Test erase_album: "<<endl;
//	//art.erase_album("album1");
//	art.erase_album(1984);
//	cout<<art;
//	
//	//test modif_album
//	track t5(2,80,"track5");
//	track arr3[] = {t3,t5};
//	vector<track> vv3(arr3,arr3 + sizeof(arr3) / sizeof(arr3[0]));
//	album qw3(1970,"album2",vv3);
//	pair<int,album> a3(qw3.get_an_ap(),qw3);
//	cout<<"Test modif_album: "<<endl;
//	//art.modif_album("album2",a3);
//	art.modif_album(1970,a3);
//	cout<<art;
//	
//	//test afis_album_btw
//	cout<<"Test afis_lbum_btw"<<endl;
//	art.add_album(a2);
//	art.add_album(a1);
//	art.afis_album_btw(1960,1980);
	return 0;
}
