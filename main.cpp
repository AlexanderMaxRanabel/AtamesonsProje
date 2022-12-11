
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
  string basla,gec,gec1,gec2,sk1,sk2,sk3;
  int puan=0;

  cout<<"Başlamak İçin BAŞLA yazınız"<<endl;
  cin>>basla;
  if(basla=="BAŞLA")
    cout<<"Ayağını Yorganına göre uzat"<<endl;
  cout<<"Tutumluluk,Sorumluluk,Çalışkanlık"<<endl;
  cin>>sk1;
  if(sk1=="Tutumluluk")
    puan = puan++;
  cout<<puan<<endl;
  cout<<"Geçmek için Geç yazınız"<<endl;
  cin>>gec;
  if(sk1=="Sorumluluk"||"Çalışkanlık")
    puan = puan--;
  cout<<"YALNIŞ DOĞRU CEVAP TUTUMLULUK"<<endl;
  cout<<puan<<endl;


  if(gec=="Geç")
      cout<<"Ak Akçe Kara gün içindir"<<endl;
  cout<<"Fedakarlık,Vatanseverlik,Tutumluluk"<<endl;
  cin>>sk2;
  cout<<"Doğru!"<<endl;
  puan = puan++;
  cout<<puan<<endl;
  cout<<"Geçmek için Geç yazınız"<<endl;
  cin>>gec2;
  if(sk2=="Vatanseverlik"||"Fedakarlık")
    puan = puan--;
  cout<<"YALNIŞ DOĞRU CEVAP TUTUMLULUK"<<endl;
  cout<<puan<<endl;

  if(gec2=="Geç")
      cout<<"Komşu Komşunun Külüne Muhtaçtır"<<endl;
  cout<<"Yardımlaşma Çalışkanlık Hoş Görü"<<endl;
  cin>>sk3;
  if(sk3=="Yardımlaşma")
    //I dont know what ım doing by any bit lol
      cout<<"DOĞRU"<<endl;
    puan = puan++;
    cout<<puan<<endl;
    cout<<"TEBRİKLER TAMAMLADINIZ"<<endl;
    if(sk3=="Çalışkanlık"||"Hoş Görü")
      puan=puan--;
    cout<<"YALNIŞ DOĞRU CEVAP YARDIMLAŞMA"<<endl;
    cout<<puan<<endl;

  return 0;
}
