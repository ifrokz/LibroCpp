#include <iostream>

void a() {
	int *numero = nullptr; 
	std::cout << numero << std::endl;
}

void b() {
	double *realPtr;
	long largo, *enteroPtr = &largo;
	*enteroPtr = reinterpret_cast <long>(&realPtr);
}

void c() {
	int * x, y;
	x = &y;
}

void d() {
	char s[] = "Este es un arreglo de caracteres";
	for (char *sPtr = s; *sPtr != '\0'; ++sPtr)
		std::cout << *sPtr << ' ';
	std::cout << std::endl;
}

void e() {
	short resultado = 0, *numPtr = &resultado;
	void *genericoPtr = numPtr;
	resultado = *(short *)genericoPtr + 7;
	std::cout << "El valor de \"resultado\" es de: " << resultado << std::endl;
}

void f() {
	double x = 19.34;
	double *xPtr = &x;
	std::cout << *xPtr << std::endl;
}

int main() {
	a();
	b();
	c();
	d(); 
	e();
	f();
	system("pause");
}