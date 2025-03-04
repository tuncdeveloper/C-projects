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
			   	case 2: printf("\nMeraklidir ve sürekli yeni seyler ögrenmek ister. Ayni zamanda çok düygüsal ve merhametlidir.\nozgürlügüne çok düskündür ve yapacagi seylere kimsenin karismasini istemez. Akrep burcu erkeginin en belirgin fiziksel ozelligi cekici bakislaridir.");break;
			   }	break;
		
		case 2:printf("\n1-kadin\n2-erkek\n\n");
				scanf("%d",&y);
			   switch(y)
			   {
			   	case 1: printf("\nBasak kadini kendinden emindir ve iyi niyetinin küllanilmasýndan menfaat odaklý is iliskilerinden hoslanmaz. Basak burcu kadini, agirbasli ve ciddi bir mizaca sahiptir. Bununla birlikte yüksek ve gizli bir libido içinde saklidir. Çok fazla insanla cinsel birliktelik yasamaz.");break;
			   	case 2: printf("\nTitiz ve sorgulayicidirler. Amacsiz ve beklentisiz kiþiler için, zaman harcamaktan hoslanmazlar. Ýyi, bir aile reisi olduklarý söylense de, bunu geciktirmek için her türlü yolu denerler ve müzmin bir bekar olmaktan kurtulamazlar. Ask iliskileri zordur..");break;
			   }	break;
		
		case 3:printf("\n1-kadin\n2-erkek\n\n");
				scanf("%d",&y);
			   switch(y)
			   {
			   	case 1: printf("\nBalik bürcü kadini genel anlamda düygüsal, sezgileri oldukca güclü, maneviyati ve ic dünyasi küvvetli, üyümlu ve nazik bir karaktere sahiptir. Balik bürcü kadini hayatin kendine ozgü var olan düzeninden, kendi etkilesimleri de dahil her zaman derin anlamlar aramakta olan ve derin anlamlar bülan bir kadindir.");break;
			   	case 2: printf("\nBalik bürcü erkekleri oldukca sevgi dolu kisilikleri ile dikkat çekerler. Bünün yani sira merhametli ve oldukca sabirli olarak one cikarlar. Balik bürcü erkeginin öne cýkan ozelliklerinden bir tanesi de hislerinin küvvetli olmasidir. Ayni zamanda balik bürcü erkeklerinin çok derin bir düygüsal yapilari vardir.");break;
			   }	break;
		
		case 4:printf("\n1-kadin\n2-erkek\n\n");
				scanf("%d",&y);
			   switch(y)
			   {
			   	case 1: printf("\nAslan bürcü kadinlarinin genellikle orta boylüdür. Aslan bürcü kadini, birden fazla olumlu özellige sahiptir. Bünlar arasinda; girisimci rühlü olmasi, heyecanlý bir yapisinin bülünmasi ve yaratici olmasi on plandadir. Tütkülü, iyimser ve sadik olan aslan bürcü kadinlari, karsindakine çok deger verir.");break;
			   	case 2: printf("\nAslan bürcü erkegi, kendine güvenen tarziyla bilinir. Eglenceli davranislarinin yani sira arkadas ortaminda sevilen bir karaktere sahiptir.  erkeklerinin temel özelligi liderliktir. Aslan bürcü erkekleri genelde saçlarý ile dikkat cekerler.");break;
			   }	break;
		
		case 5:printf("\n1-kadin\n2-erkek\n\n");
				scanf("%d",&y);
			   switch(y)
			   {
			   	case 1: printf("\nYengec burcu kadinlari, kirilgan ve hassaslardir. Gecmisinden kopamayan yengec kadinlari, kalplerini baskalarina çok zor acarlar.\nYengec burcu kadinlarinin en onemli özellikleri, duygusal ve sakin yapiya sahip olmalaridir.\nYengec burcu kadinlari, anac ve merhametli duygulara sahiptir.");break;
			   	case 2: printf("\nHisler konüsünda çok hassas olan yengec bürcü erkekleri; sevecen, nazik, anlayýsli, ileri görüslü ve yümüsak kalplidir. Yengec bürcü erkegi, güvenilir bir yapiya sahiptir. Bününla beraber  erkekleri genellikle empati kürabilen, karsisindakinin ne hissettigini düþünebilen bir karaktere sahiptir.");break;
			   }	break;
		
		
	}	
		return 0;
	}
