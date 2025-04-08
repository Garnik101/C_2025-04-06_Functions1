int revnum(int n) {
	int rem = 0;
	int rev = 0;
	if (n < 0) {
		n = -n;
	}
	while (n > 0) {
		rem = n % 10;
		rev = rev * 10 + rem; 
		n /= 10;
	}
	return rev;		
}
