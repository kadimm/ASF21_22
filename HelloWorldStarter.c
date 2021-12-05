#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// Thread function
void *ddos(void *arg) {
    system("hping3 -c 5 -S dummy -p 3001");
    //Usage of hping3, in order to send packets and expect replies, like ping  does.
    return NULL;
}

int main(int argc, char **argv) {

    printf("Hello World");
    //typical hello world to showcase the code format we will be using.

}