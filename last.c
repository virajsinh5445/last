#include <stdio.h>

int main() {
    int choice = 0;
    printf("1. Right Half Triangle Pattern\n");
    printf("2. Floyd's Triangle Pattern\n");
    printf("3. Left Half Triangle Pattern\n");
    printf("4. Inverted Left Half Triangle Pattern\n");
    printf("5. Full Pyramid Pattern\n");
    printf("6. Custom Numeric Pattern\n");
    printf("7. Custom Alphabet Pattern\n");
    printf("8. Exit\n");
    printf("Enter your choice :- ");
    
    scanf("%d",&choice);
    
while (choice != 8){
    switch (choice) {
        
        case 1:
   
            for(int i = 0 ; i <= 5 ; i++){
                int n = 41;
                for(int j = 1 ; j <= i ; j++){
                    printf("%d\t",n);
                    n++;
                }
                printf("\n");
            }
            
            printf("\n\n");
            
            break;
            
        case 2:
            int n = 11;
    
            for(int i = 0 ; i < 5 ; i++){
                
                for(int j = 1 ; j <= i ; j++){
                    printf("%d\t",n);
                    n++;
                }
                
                printf("\n");
            }
            
            printf("\n\n");
            
            break;
            
        case 3:
            
            
            for (int i = 5; i >= 1; i--) {
                
                for (int j = 1; j < i; j++) {
                    printf(" ");
                }
        
                for (int k = i; k <= 5; k++) {
                    printf("%d", k);
                }
        
                printf("\n");
            }
            
            printf("\n\n");
            
            break;
            
        case 4:
            
            for (int i = 5; i >= 1; i--) {
        
                for (int j = 5; j > i; j--) {
                    printf(" ");
                }
        
                for (int k = 1; k <= i; k++) {
                    if (k % 2 == 1)
                        printf("1");
                    else
                        printf("0");
                }
        
                printf("\n");
            }
            
            printf("\n\n");
            
            break;
            
        case 5:
            
            int m = 5;
    
            for(int i = 1; i <= m; i++) {
                for(int k = 1; k <= (m - i); k++) {
                    printf(" ");
                }
                for(int j = m - i + 1; j <= m; j++) {
                    printf("%d", j);
                }
                
                for(int k = m - 1; k >= m - i + 1; k--) {
                    printf("%d", k);
                }
                
                printf("\n");
            }
            
            printf("\n\n");

            break;
            
        case 6:
            
            int x = 5;
    
            for(int i = 1; i <= x; i++) {
                for(int j = 1; j <= i; j++) {
                    printf("%d", j);
                }
                
                if(i < x) {
                    for(int k = 1; k <= 2 * (x - i); k++) {
                        printf(" ");
                    }
                }
                
                for(int j = i; j >= 1; j--) {
                    printf("%d", j);
                }
                
                printf("\n");
            }
            
            printf("\n\n");
            
            break;
            
        case 7:
        
            int width = 14;
            
            for(int i = 0; i < width; i++) {
                printf("*");
            }
            printf("\n");
            
            for(int i = 0; i < 2; i++) {
                printf("*");
                for(int j = 1; j < width - 1; j++) {
                    printf(" ");
                }
                printf("*\n");
            }
            
           
            for(int i = 0; i < width; i++) {
                printf("*");
            }
            printf("\n");
            
            for(int i = 0; i < 3; i++) {
                printf("*\n");
            }
        
            printf("\n\n");
            
            break;
            
        default:
            printf("Invalid Choice !!! \n\n");
            break;
            
    }
    printf("1. Right Half Triangle Pattern\n");
    printf("2. Floyd's Triangle Pattern\n");
    printf("3. Left Half Triangle Pattern\n");
    printf("4. Inverted Left Half Triangle Pattern\n");
    printf("5. Full Pyramid Pattern\n");
    printf("6. Custom Numeric Pattern\n");
    printf("7. Custom Alphabet Pattern\n");
    printf("8. Exit\n");
    printf("Enter your choice :- ");
    
    scanf("%d",&choice);
}

    return 0;
}