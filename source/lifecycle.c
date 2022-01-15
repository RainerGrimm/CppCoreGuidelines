#include <stdio.h>
 
void initDevice(const char* mess) {
    printf("\n\nINIT: %s\n",mess);
}
 
void work(const char* mess) {
    printf("WORKING: %s",mess);
}
 
void shutDownDevice(const char* mess) {
    printf("\nSHUT DOWN: %s\n\n",mess);
}
 
int main(void) {
 
    initDevice("DEVICE 1");
    work("DEVICE1");
    {
        initDevice("DEVICE 2");
        work("DEVICE2");
        shutDownDevice("DEVICE 2");
    }
    work("DEVICE 1");
    shutDownDevice("DEVICE 1");
 
    return 0;
 
} 
