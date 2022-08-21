#include <stdio.h>
#include <stdlib.h>

int main()
{
    int col,lin;
    printf("Desenhando\n\n");

    //desenho base
    for(lin=0;lin<7;lin++){
        for(col=0;col<7;col++){
            printf("[%d,%d] ",lin,col);
    }
        printf("\n");
    }

    printf("\n\nDesenho (A)\n");
    for(lin=0;lin<7;lin++){
        for(col=0;col<7;col++){
            if(col<=lin)
                printf("[%d,%d] ",lin,col);
    }
        printf("\n");
    }

    printf("\n\nDesenho (B)\n");
    for(lin=0;lin<7;lin++){
        for(col=0;col<7;col++){
            if(lin<=col)
                printf("[%d,%d] ",lin,col);
    }
        printf("\n");
    }

    printf("\n\nDesenho (C)\n");
    for(lin=0;lin<7;lin++){
        for(col=0;col<7;col++){
            if(lin<=col)
                printf("[%d,%d] ",lin,col);
            else
                printf("      ");
    }
        printf("\n");
    }

    printf("\n\nDesenho (D)\n");
    for(lin=0;lin<7;lin++){
        for(col=0;col<7;col++){
            if(col+lin<=5)
                printf("      ");
            else
                printf("[%d,%d] ",lin,col);
    }
        printf("\n");
    }

    printf("\n\nDesenho (E)\n");
    for(lin=0;lin<7;lin++){
        for(col=0;col<7;col++){
            if((col==0 || col==6)||(lin==0 || lin==6))
                printf("[%d,%d] ",lin,col);
            else
                printf("      ");
    }
        printf("\n");
    }

    printf("\n\nDesenho (F)\n");
    for(lin=0;lin<7;lin++){
        for(col=0;col<7;col++){
            if((col==lin || col==lin)||(lin==0 || lin==6))
                printf("[%d,%d] ",lin,col);
            else
                printf("      ");
    }
        printf("\n");
    }

    printf("\n\nDesenho (G)\n");
    for(lin=0;lin<7;lin++){
        for(col=0;col<7;col++){
            if((col+lin==6 || col+lin==6)||(lin==0 || lin==6))
                printf("[%d,%d] ",lin,col);
            else
                printf("      ");
    }
        printf("\n");
    }

    printf("\n\nDesenho (H)\n");
    for(lin=0;lin<7;lin++){
        for(col=0;col<7;col++){
            if((col+lin==6 || col+lin==6)||(lin==0 || lin==6)||(col==lin || col==lin))
                printf("[%d,%d] ",lin,col);
            else
                printf("      ");
    }
        printf("\n");
    }

    printf("\n\nDesenho (I)\n");
    for(lin=0;lin<7;lin++){
        for(col=0;col<7;col++){
            if((col+lin==6 || col+lin==6)||(lin==0 || lin==6)||(col==lin || col==lin)||(col==0 || col==6))
                printf("[%d,%d] ",lin,col);
            else
                printf("      ");
    }
        printf("\n");
    }

    return 0;
}
