#include <windows.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    puts("Creating a file...");
    sleep(5);
    HANDLE hFile = CreateFile("fileName.txt", GENERIC_WRITE, 0, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);
    if(hFile == INVALID_HANDLE_VALUE) {
        printf("Error: %d\n", GetLastError());
    }

    CloseHandle(hFile);

    puts("Deleting a file...");
    sleep(5);
    DeleteFile("fileName.txt");
}