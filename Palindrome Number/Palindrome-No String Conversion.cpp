#include <stdio.h>
#include <math.h>

bool isPalindrome(int x) {
    if(x<0) return false;
    int copy = x;
    long reverse = 0;
    while(copy!=0){
        reverse = reverse*10 + copy%10;	// reverse*10 yaparak 1 basamaklik yer ac ve gelen rakami oraya ekle.
        copy = copy/10;
    }
    if(reverse!=x) return false;
    else return true;
}



bool isPalindrome(int x) {			// Bir bastan bir sondan rakamlari alarak kontrol etme ( Islem yuku fazla)
        if(x==0) return true;	    // Sayi 0 ise log0 = negatif bir sayi olacagi icin dikkat et!!!!
		int logX = log10(x);
		if(logX<0) return false;  //Sayi negatif mi kontrol et.
		
        while(logX>0){						
            int divider = pow(10,logX); 
            int num1 = x / divider;	// En bastaki sayiyi al (121/100 = 1)
            x = x % divider;	// sayiyi kalan olarak update et (121%100 = 21)
            int num2 = x % 10; // birler basamagindaki sayiyi al 
            x = x / 10;	// sayiyi update et.
            if(num1!=num2) return false;
            logX -= 2;	// 2 rakam gittigi icim logx'i update et.	
        }
        return true;
}

int main(){
	int x = 10;
	printf("%d",isPalindrome(x));	
}
