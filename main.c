#include <stdio.h>

int main(void) {
  int mat,tr,fen,beden,tarih,ing,secm1,secm2,secm3,sonuc;
  printf("Matematik Puanınız: ");
  scanf("%d",&mat);

  printf("Turkce Puanınız: ");
  scanf("%d",&tr);

  printf("Fen/Kimya/Fizik Puanınız: ");
  scanf("%d",&fen);

  printf("Beden Egitimi Puanınız: ");
  scanf("%d",&beden);

  printf("Tarih/İnkilap/Cografya Puanınız: ");
  scanf("%d",&tarih);

  printf("İngilizce Puanınız: ");
  scanf("%d",&ing);

  printf("Not: 3 Kez 2 Ders Secmeli Puanınız Hesaplanicaktir.\n 2 Ders Secmeli Puanınız: ");
  scanf("%d",&secm1);

  printf("2 Ders Secmeli Puanınız: ");
  scanf("%d",&secm2);

  printf("2 Ders Secmeli Puanınız: ");
  scanf("%d",&secm3);

  printf("Sonuclariniz hesaplandi, size aktariliyor...");
  printf("!\n!\n!\n!\n!\n");

  sonuc=(mat+tr+fen+beden+tarih+ing+secm1+secm2+secm3)/9;
  printf("Ortalamaniz: %d\n",sonuc);
  return 0;
}