/*12.- Display the following checkerboard pattern with eight printf statements and then display the same pattern with as few printf statements
as possible.
1 * * * * * * * *
2  * * * * * * * *
3 * * * * * * * *
4  * * * * * * * *
5 * * * * * * * *
6  * * * * * * * *
7 * * * * * * * *
8  * * * * * * * *
*/

#include <stdio.h>
void main(){
    int i;
    for(i=1;i<=8;i++){
        if(i%2==1) printf("\n* * * * * * * *");
        else printf("\n * * * * * * * *");
    }
    printf("\n\n");
    return;

}
