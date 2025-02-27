#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <dirent.h> 
  
int main(void) { 
    struct dirent *de;  // Pointer for directory entry 
    
    chdir("/storage/emulated/0/Documents/");
    
    // opendir() returns a pointer of DIR type.  
    DIR *dr = opendir("."); 
    
    // opendir returns NULL if couldn't open directory
    if (dr == NULL) { 
        perror("Could not open current directory" ); 
        return 0; 
    } 
  
    // Refer http://pubs.opengroup.org/onlinepubs/7990989775/xsh/readdir.html 
    // for readdir() 
    while((de = readdir(dr)) != NULL) {
            printf("%s\n", de->d_name);
            printf("%u\n\n", de->d_type);
            printf("%u\n\n", de->d_reclen);
    }
  
    closedir(dr);     
    return 0; 
} 