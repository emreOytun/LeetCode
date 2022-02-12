
int mySqrt(unsigned int x){
    unsigned int i;
    for(i=0;i<=x;i++){
        unsigned long int sqr = i*i;
        if(sqr>x){                      // Alinan kare sayiyi gectiyse bir onceki sayiyi return et.
            i = i-1;
            break;
        }
        else if(sqr==x){            // Alinan kare direkt sayiya esitse kendisini return et.
            break;  
        } 
    }
    return i;
}
