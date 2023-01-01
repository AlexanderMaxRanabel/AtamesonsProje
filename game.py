start = input(str("Başlamak İçin BAŞLA yazınız"))
Puan = 0
if(start=="BAŞLA"):
    print("Ak Akçe Karagün içindir")
    Sk1 = input(str("Tutumluluk,Hoş Görü Sorumluluk"))
if(Sk1=="Tutumluluk"):
    Puan += 1
    print(Puan)
    Gec = input(str("Sonraki Soruya geçmek için GEÇ diyin"))
else:
    print("Yanlış Cevap")
    Puan += -1
if(Gec=="GEÇ"):
    print("Ayağını Yorganına göre uzat")
    Sk2 = input(str("Tutumluluk,Çalışkanlık,Mütevazılık"))
if(Sk2=="Tutumluluk"):
    Puan += 1
    print(Puan)
    Gec2 = input(str("Sonraki Soruya geçmek için GEÇ diyin"))
else:
    print("Yanlış Cevap")
    Puan += -1
if(Gec2=="GEÇ"):
    print("Tavşan Dağa Küşümüş Dağın  Haberi Olmamış")
    Sk3 = input(str("Bencillik, Alınganlık, Yardımseverlik"))
if(Sk3=="Tutumluluk"):
    Puan += 1
    print(Puan)
    Gec3 = input(str("Sonraki Soruya geçmek için GEÇ diyin"))
else:
    print("Yanlış Cevap")
    Puan += -1
