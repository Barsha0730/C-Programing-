 // w.c.p to take inputs from the user and display into the screen as an array
 #include <stdio.h>
 int main() {
 	int i,l;
 	int a[l];
 	printf("Enter the size : ");
 	scanf("%d", &l);
 	
 	for (i=0;i<l;i++) {
 		printf("Enter the elements : ");
 	    scanf("%d", &a[i]);
	}
	
	printf("After entering the elemets are : ");
	
	for (i=0;i<l;i++) {
		printf("%d", a[i]);
	}
	return 0;
 }
