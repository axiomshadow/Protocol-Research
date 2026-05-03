#include <stdio.h>
#include <string.h>

int main() {
    int admin_access = 0; 
    char buffer[10];

    printf("Enter your secret key: ");

    gets(buffer); 

    if (admin_access != 0) {
        printf("\n[!] Bypassed! admin_access is now: %d\n", admin_access);
        printf("[+] Privilege Escalated to Admin Mode.\n");
    } else {
        printf("\n[-] Access Denied. admin_access: %d\n", admin_access);
    }

    return 0;
}
