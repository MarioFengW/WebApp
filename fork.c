#include <stdio.h>
#include <unistd.h>

int main(){
    int a = 5;


    int pid = fork();

    if(pid == 0) {
        fork();
        printf("Soy el proceso hijo a = %d\n",a);
        execl("./hola", "hola", "juan", "yo", (char *) NULL);
        printf("ESTO NO DEBERÍA IMPRIMIRSE");
        return 0;
    }

    printf("Soy el proceso padre a = %d\n",a);
    return 0;
}