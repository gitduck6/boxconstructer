#include <stdio.h>
#include <stdlib.h>

/*BOX CONSTRUCTOR 0.2 :D
  ¿ ⌐ ¬ ½ ¼ ¡ « » ░ ▒ ▓ │ ┤ ╡ ╢ ╖ ╕ ╣ ║ ╗ ╝ ╜ ╛ ┐ └ ┴ ┬ ├ ─ ┼ ╞ ╟ ╚ ╔ ╩ ╦ ╠ ═ ╬ ╧ ╨ ╤ ╥ ╙ ╘ ╒ ╓ ╫ ╪ ┘ ┌ 

  issues: 
    -not so portable (cant run on linux apparently) 
    -too much ai usage
*/

int main(void) {
    int bHeight;
    int bLength;
    printf("Enter the desired box height:\n");
    scanf("%d",&bHeight);

    printf("Enter the desired box length:\n");
    scanf("%d",&bLength);

    char * tCap = (char *)malloc((bLength + 1) * sizeof(char));
    char * sRow = (char *)malloc((bLength + 1) * sizeof(char));
    char * bCap = (char *)malloc((bLength + 1) * sizeof(char));
    if (!(tCap && sRow && bCap)) {
        printf("Malloc failed");
        free(tCap);
        free(sRow);
        free(bCap);
        return 1;
    } 
    tCap[bLength] = 0;
    sRow[bLength] = 0;
    bCap[bLength] = 0;
    for (int i = 1;i < bLength - 1; i ++) {
        tCap[i] = 205;
        sRow[i] = ' ';
        bCap[i] = 205;
    }
    tCap[0] = 201;
    sRow[0] = 186;
    bCap[0] = 200;
    tCap[bLength-1] = 187;
    sRow[bLength-1] = 186;
    bCap[bLength-1] = 188;
    printf("%s\n",tCap);
    for (int i = 2; i < bHeight;i++) {
        printf("%s\n",sRow);
    }

    printf("%s\n",bCap);
    getchar();
    getchar();




    return 0;

}
