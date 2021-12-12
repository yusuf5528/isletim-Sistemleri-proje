# İşletim Sistemleri 49. Grup
isletim sistemleri 1.odev
# Grup Üyelerinin İsimleri
* Ahmet Emir Bayır
* Enes Malik Şenyürek
* Yusuf Dursun
* Furkan Karama
* Eren Kaya
# Dosyalar 
* Main.c
> Main.c tüm fonksiyonları ve structları içeren bir kaynak dosyasıdır. Bu kaynak dosyasında, kullanıcı tarafından girilen komutları parçalama işlemleri ve fork, execvp vb. komutların icrası gerçekleştirilir.
# Derleme
> gcc main.c -o main
# Çalıştırma Talimatları
> ./main
### Program İçindek Komutların Çalıştırılması
* Programı sonlandırmak için
> exit
* Konum değişikliği için
> cd <gitmek istediğiniz dizin>
* 5 adet process in pid değerlerini ekrana basmak için
> showpid
* execvp kullanarak ls komutunu çalıştırmak için
> ls
# Karşılaştığımız Zorluklar
* execvp sistem çağrısını nasıl kullanmamız gerektiğini anlamak
* Kullanıcının girdiği komutu parçalara ayırmakta
* fgets den gelen değeri strcmp kullanarak karşılaştırma yapmakta 
# Kullanılan Kaynaklar
* Man page linux
* Stackoverflow
* Geeksforgeeks
* Operating systems concepts 10th edition
