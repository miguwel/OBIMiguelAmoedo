#include <stdio.h>
 
int main() {
 
	int Ia, Ib, Fa, Fb, mov;
	scanf ("%d%d%d%d", &Ia, &Ib, &Fa, &Fb);

	if (Ia == Fa && Ib == Fb)
		mov = 0;

	else if (Ia != Fa && Ib == Fb)
		mov = 1;

	else if (Ia != Fa && Ib != Fb)
		mov = 1;

	else if (Ia == Fa && Ib != Fb)
		mov = 2;	

	printf("%d\n", mov);
	
    return 0;
}