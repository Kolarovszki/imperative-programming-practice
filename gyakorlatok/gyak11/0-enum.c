#include<stdio.h> 
  
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun}; 

//enum week2{Mon = 1, Tue, Wed, Thur, Fri, Sat, Sun};

enum state {Working = 1, Failed = 0, Freezed = 0};  
  
int main() 
{ 
    enum week day; 
    day = Wed; 
    
    printf("%d\n",day); 
    
    printf("%d, %d, %d\n", Working, Failed, Freezed);
    
    return 0; 
}  
