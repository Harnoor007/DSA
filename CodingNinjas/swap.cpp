void swapNumber(int &a, int &b) {
	a = a^b; //xor in a b gives mix of both
	b = a^b; // we do xor in a (which is mix of values from prev step) and b, so afterall b values cancel and we get the original value of a , which we store in b)
	a = a^b; // now a(mix of both) xor b (which has become original a, results original b value)

}