# İşletim Sistemleri 49. Grup
isletim sistemleri 1.odev
# Grup Üyelerinin İsimleri
* Ahmet Emir Bayır         G191210094 
* Enes Malik Şenyürek      G191210001
* Yusuf Dursun             G191210028
* Furkan Karama            G191210073
* Eren Kaya                G191210043
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
