#include <stdio.h>

/* POSIX Standard Library
   Not available on MinGW */
#include <sys/utsname.h>

int main() {
	struct utsname uts;
	if(uname(&uts) < 0) {
		printf("Error");
	}else{
		printf("Sysname: %s\n", uts.sysname);
		printf("Nodename: %s\n", uts.nodename);
		printf("Release: %s\n", uts.release);
		printf("Version: %s\n", uts.version);
		printf("Machine: %s\n", uts.machine);
	}
}