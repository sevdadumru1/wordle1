#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main() {
	int i, number,j;
	char kelime[8];
	char word[10][7]={"bahar","deniz","trafik","makas","kavun","inek","karadut","cam","duman","sabah"};
	srand(time(NULL));
	int word_lengths[] = {5, 5, 6, 5, 5, 4, 7, 3, 5, 5};
		
			
	int k;
	int c=2;
	int lenght;
	int bulh,yanyer;
	
	
		while(1){
		
		
		do{
			printf("\nOyuna baslamak icin 1, cikmak icin 0 yaziniz: ");
		if (scanf("%d", &c) != 1) { 
            while (getchar() != '\n'); 
            printf("Lutfen geçerli bir sayi giriniz.\n");
        } else if (c != 1 && c != 0) {
            printf("Lutfen 1 veya 0 girin.\n");
        }
		}while(c!=1 && c!=0);
		
		if(c==1){
			number=rand()%10;
		    int lenght = word_lengths[number];
			
	    	while(1){
	    		bulh=0;yanyer=0;
		 printf("\nBir kelime girin: ");
         scanf("%s", kelime);
         while (getchar() != '\n'); 
         
		 k = strlen(kelime);
         
         
         	bulh=0;
         	yanyer=0;
         	
            for (i = 0; i < lenght; i++) {
             if (kelime[i] == word[number][i] ) { 
                    bulh++;
                }
            }
            
            for (i = 0; i < lenght; i++) {
          if (kelime[i] != word[number][i]) {  
            for (j = 0; j < lenght; j++) {
            if (kelime[i] == word[number][j]) {  
                yanyer++; 
                break;  
                          }
                    }
                }
             }

       if (bulh == lenght) {
                        printf("\nTebrikler! Dogru kelimeyi buldunuz");
                        break;  
                    }
			
			printf("%d harf dogru yerde,%d harf dogru ama yanlis yerde",bulh,yanyer);
        
		 
		
		 
		 }
		 
			
		}
		else{return 0;
		}
		}
		
		
		 
     return 0;
	}	
