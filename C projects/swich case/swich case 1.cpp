#include<stdio.h>
	int main(){
		
	int x,y;
	printf("BURCLAR =\n\n");
	printf("1-akrep burcu\n");
	printf("2-basak burcu\n");
	printf("3-balik burcu\n");
	printf("4-aslan burcu\n");
	printf("5-yengec burcu\n");

	
	
	printf("Ogrenmek Istediginiz burca giriniz\n");
	scanf("%d",&x);
	
	switch(x){
		
		case 1:printf("\n1-kadin\n2-erkek\n\n");
				scanf("%d",&y);
			   switch(y)
			   {
			   	case 1: printf("\nAkrep burcu kadini genel olarak akilli oldugu kadar da hirsli olan insanlardir.\nistedigini kazanana kadar bu kisiler mucadele ederler.\nTemiz kalpli ve de cok alcak gonulludur. Akrep burcu kadinlari genel olarak samimiyetten ve de durustlukten hoslanirlar.");break;
			   	case 2: printf("\nMeraklidir ve s�rekli yeni seyler �grenmek ister. Ayni zamanda �ok d�yg�sal ve merhametlidir.\nozg�rl�g�ne �ok d�sk�nd�r ve yapacagi seylere kimsenin karismasini istemez. Akrep burcu erkeginin en belirgin fiziksel ozelligi cekici bakislaridir.");break;
			   }	break;
		
		case 2:printf("\n1-kadin\n2-erkek\n\n");
				scanf("%d",&y);
			   switch(y)
			   {
			   	case 1: printf("\nBasak kadini kendinden emindir ve iyi niyetinin k�llanilmas�ndan menfaat odakl� is iliskilerinden hoslanmaz. Basak burcu kadini, agirbasli ve ciddi bir mizaca sahiptir. Bununla birlikte y�ksek ve gizli bir libido i�inde saklidir. �ok fazla insanla cinsel birliktelik yasamaz.");break;
			   	case 2: printf("\nTitiz ve sorgulayicidirler. Amacsiz ve beklentisiz ki�iler i�in, zaman harcamaktan hoslanmazlar. �yi, bir aile reisi olduklar� s�ylense de, bunu geciktirmek i�in her t�rl� yolu denerler ve m�zmin bir bekar olmaktan kurtulamazlar. Ask iliskileri zordur..");break;
			   }	break;
		
		case 3:printf("\n1-kadin\n2-erkek\n\n");
				scanf("%d",&y);
			   switch(y)
			   {
			   	case 1: printf("\nBalik b�rc� kadini genel anlamda d�yg�sal, sezgileri oldukca g�cl�, maneviyati ve ic d�nyasi k�vvetli, �y�mlu ve nazik bir karaktere sahiptir. Balik b�rc� kadini hayatin kendine ozg� var olan d�zeninden, kendi etkilesimleri de dahil her zaman derin anlamlar aramakta olan ve derin anlamlar b�lan bir kadindir.");break;
			   	case 2: printf("\nBalik b�rc� erkekleri oldukca sevgi dolu kisilikleri ile dikkat �ekerler. B�n�n yani sira merhametli ve oldukca sabirli olarak one cikarlar. Balik b�rc� erkeginin �ne c�kan ozelliklerinden bir tanesi de hislerinin k�vvetli olmasidir. Ayni zamanda balik b�rc� erkeklerinin �ok derin bir d�yg�sal yapilari vardir.");break;
			   }	break;
		
		case 4:printf("\n1-kadin\n2-erkek\n\n");
				scanf("%d",&y);
			   switch(y)
			   {
			   	case 1: printf("\nAslan b�rc� kadinlarinin genellikle orta boyl�d�r. Aslan b�rc� kadini, birden fazla olumlu �zellige sahiptir. B�nlar arasinda; girisimci r�hl� olmasi, heyecanl� bir yapisinin b�l�nmasi ve yaratici olmasi on plandadir. T�tk�l�, iyimser ve sadik olan aslan b�rc� kadinlari, karsindakine �ok deger verir.");break;
			   	case 2: printf("\nAslan b�rc� erkegi, kendine g�venen tarziyla bilinir. Eglenceli davranislarinin yani sira arkadas ortaminda sevilen bir karaktere sahiptir.  erkeklerinin temel �zelligi liderliktir. Aslan b�rc� erkekleri genelde sa�lar� ile dikkat cekerler.");break;
			   }	break;
		
		case 5:printf("\n1-kadin\n2-erkek\n\n");
				scanf("%d",&y);
			   switch(y)
			   {
			   	case 1: printf("\nYengec burcu kadinlari, kirilgan ve hassaslardir. Gecmisinden kopamayan yengec kadinlari, kalplerini baskalarina �ok zor acarlar.\nYengec burcu kadinlarinin en onemli �zellikleri, duygusal ve sakin yapiya sahip olmalaridir.\nYengec burcu kadinlari, anac ve merhametli duygulara sahiptir.");break;
			   	case 2: printf("\nHisler kon�s�nda �ok hassas olan yengec b�rc� erkekleri; sevecen, nazik, anlay�sli, ileri g�r�sl� ve y�m�sak kalplidir. Yengec b�rc� erkegi, g�venilir bir yapiya sahiptir. B�n�nla beraber  erkekleri genellikle empati k�rabilen, karsisindakinin ne hissettigini d���nebilen bir karaktere sahiptir.");break;
			   }	break;
		
		
	}	
		return 0;
	}
