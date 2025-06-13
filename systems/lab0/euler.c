int euler1() {
	int count = 0;
	for (int i = 0; i < 1000; i++) {
		if (i % 15 == 0) {
			count += i;
		}
		else if (i % 3 == 0 || i % 5  == 0) {
			count += i;
		}
	}
	return count;
}

int euler5() {
	int num = 1;
	for (int i = 1; i <= 20; i++) {
		if (num % i != 0) {
			num++;
			i = 0;
		}
	}
        return num;
}

int euler6() {
        return 0;
}

int euler14() {
        return 0;
}

int euler2() {
        return 0;
}
