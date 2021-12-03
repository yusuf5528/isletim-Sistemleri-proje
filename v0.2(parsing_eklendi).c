#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct main
{
	char satir[80];
	char parametreler[10][20];
	int ctr;
};

struct main splitter(struct main main_obj)
{
	int i,j,ctr;
    j=0; ctr=0;
    for(i=0;i<=(strlen(main_obj.satir));i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(main_obj.satir[i]==' '||main_obj.satir[i]=='\0')
        {
            main_obj.parametreler[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            main_obj.parametreler[ctr][j]=main_obj.satir[i];
            j++;
        }
    }
    main_obj.ctr = ctr;
    return main_obj;
}



int main()
{
	struct main main_obj;
	char konum[100];
	
	//prompt gibi davranmasi icin sonsuz dongu 
	while(1)
	{
		//komutların ve parametrelerin tutulacagi dizi
		
		getcwd(konum,100);
		printf("%s/: sau > ",konum);
		fgets(main_obj.satir,80,stdin);
		main_obj = splitter(main_obj);
		




	}
	
	
	return 0;


}