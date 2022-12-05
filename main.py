start = input(str("Başlamak İçin BAŞLA yazınız"))
Puan = 0
if(start=="BAŞLA"):
    print("Ak Akçe Karagün içindir")
    Sk1 = input(str("Tutumluluk,Hoş Görü Sorumluluk"))
if(Sk1=="Tutumluluk"):
    Puan += 1
    print(Puan)
    Gec = input(str("Sonraki Soruya geçmek için GEÇ diyin"))
if(Gec=="GEÇ"):
    print("Ayağını Yorganına göre uzat")
    Sk2 = input(str("Tutumluluk,Çalışkanlık,Mütevazılık"))
if(Sk2=="Tutumluluk"):
    Puan += 1
    print(Puan)
