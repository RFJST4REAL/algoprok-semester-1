#include<stdio.h>



int main(){
	char huruf[100];
	
	scanf(" %[^\n]", &huruf);

	printf("#include<stdio.h>\n");
	printf("int main()\n");
	printf("{\n");
	printf("	printf(\"%%s\\n\",\"%s\");\n", huruf);
	printf("	return 0;\n");
	printf("}\n");
	
	
	
	
	
	
	
	
	
	
	return 0;
}
