#include <stdio.h>
typedef enum {
	READ = 1<<0, // 1
	WRITE = 1<<1, // 2
	EXECUTE = 1<<2, // 4
} Permission;
void check_permissions(int permission_flags) {
	if (permission_flags & READ) {
		printf("Read permission granted.\n");
	}
	if (permission_flags & WRITE) {
		printf("Write permission granted.\n");
	}
	if (permission_flags & EXECUTE) {
		printf("Execute permission granted.\n");
	}
}
int main() {
	int permissions = READ | WRITE | EXECUTE; // Combine READ and WRITE permissions
	check_permissions(permissions);
	return 0;
}