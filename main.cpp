
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
  string basla,gec,gec1,gec2,sk1,sk2,sk3;
  int puan;

  cout<<"Başlamak İçin BAŞLA yazınız"<<endl;
  cin>>basla;
  if(basla=="BAŞLA")
    cout<<"Ayağını Yorganına göre uzat"<<endl;
  cout<<"Tutumluluk,Sorumluluk,Çalışkanlık"<<endl;
  cin>>sk1;
  if(sk1=="Tutumluluk")
    puan=puan++;
  cout<<puan<<endl;
  cout<<"Geçmek için Geç yazınız"<<endl;
  cin>>gec;
  if(sk1=="Sorumluluk"||"Çalışkanlık)
    puan=puan--;
  cout<<"YALNIŞ DOĞRU CEVAP TUTUMLULUK"<<endl;
  cout<<puan<<endl;
  cin>>gec2;

  if(gec2=="Geç")
    cout<<"Ak Akçe Kara gün içindir"<<endl;
  cout<<"Fedakarlık,Vatanseverlil,Tutumluluk"<<endl;
  cin>>sk2;
  if(sk2=="Tutumluluk")
    cout<<"Doğru!"<<endl;
  puan = puan++;
  cout<<puan++<<endl;
  cout<<"Geçmek için Geç yazınız"<<endl;
  cin>>gec1;
  if(gec1=="Geç")
    cout<<"Komşu Komşunun Külüne Muhtaçtır"<<endl;
    cout<<"Yardımlaşma Çalışkanlık Hoş Görü"<<endl;
    cin>>sk3;
    if(sk3=="Yardımlaşma")
      //I dont know what ım doing by any bit
      cout<<"DOĞRU"<<endl;
    puan = puan++;
    if(sk3=="Çalışkanlık"||"Hoş Görü")
    puan=puan--;
  cout<<"YALNIŞ DOĞRU CEVAP TUTUMLULUK"<<endl;
  cout<<puan<<endl; 

    return 0;
}
