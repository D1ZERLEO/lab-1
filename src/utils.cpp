inline int addition(int x, int y) {
	return x + y;
}

inline int substraction(int x, int y) {
	return x - y;
}

inline int division(int x, int y) {
	return x / y;
}


inline int exponentiation(int x, int y) {
	if (y == 0) {
		return 1;
	}
	else {
		int a = 1;
		while (y != 0) {
			a *= x;
			y -= 1;
		}
		return a;
	}
}
inline int multiplication(int x, int y) {
		return x * y;
}



