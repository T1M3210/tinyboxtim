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
	int sum = 0;
	int squareSum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i*i;
		squareSum +=i;
	}
        return squareSum * squareSum - sum;
}

int euler14() {
	int iteration = 0;
	unsigned int max = 0;
	unsigned int temp = 0;
	unsigned int num = 1;
	for (unsigned int i = 1; i < 1000000; i++) {
		while (num != 1) {
			if (num % 2 == 0) {
				num = num / 2;
			} else {
				num = 3 * num + 1;
			}
			temp++;
		}
		if (temp > max) {
			max = temp;
			iteration = i;
		}
		temp = 0;
		num = i + 1;
	}
        return iteration;
}

int euler2() {
	int sum = 0;
	int num = 1;
	int nextNum = 2;
	while (num < 4000000 || nextNum < 4000000) {
		if (num % 2 == 0) {
			sum += num;
		}
		if (nextNum % 2 == 0) {
			sum += nextNum;
		}
		num += nextNum;
		nextNum += num;
	}
        return sum;
}
