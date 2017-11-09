#pragma once

template < typename T > 
auto maximo(T val1, T val2, T val3) -> T
{
	T valorMaximo = val1;
	if (val2 > valorMaximo) {
		valorMaximo = val2;
	}
	if (val3 > valorMaximo) {
		valorMaximo = val3;
	}

	return valorMaximo;
}