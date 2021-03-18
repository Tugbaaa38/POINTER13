

#include <stdio.h>
#include <stdlib.h>

// GOSTERICILER HAKKINDA KISA BILGILER
int main() {
     
     /*
     1- Adres isleci (&) ile arttirma(++) ya da eksiltme(--)  isleclerinin her turlu bilesimi derleme zamaninda hata olusmasina sebep olur.
     2- Koseli ayrac isleci ile []  ++ islecinin ayni ifade icinde yer almasi
        -------------- ++p[i] --> burada [] isleci birinci oncelik seviyesinde, ++ isleci ise ikinci oncelik seviyesindedir.
        -------------- p[i]=p[i]+1  =   ++p[i];  /p[i] nesnesinin arttirilmis degeri
        --- x=p[i]++;
        -------------- p[i]++ ise    once p[i] nesnesinin artmamis degeri uretilir. Yani yukaridaki ornekte x degiskenine p[i] nesnesinin arttirilmamis degeri atanir,daha sonra p[i]
        nesnesi 1 arttirilir.
        p[++i]   Once ++i ifadesinin degeri elde edilir.Bu ifadenin degeri i'nin degerinin 1 fazlasidir.Daha sonra p adresinden (i+1) uzakliktaki nesneye ulasilir.
        p[i++]  Once i++ ifadesinin degeri elde edilir.Bu deger i'nin kendi degeridir. Daha sonra p adresinden i uzakliktaki nesneye ulasilir.
     */   
        
        
	return 0;
}

