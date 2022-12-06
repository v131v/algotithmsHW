typeT T getPartition(T a, T b) {
	auto target = *(b-1);

	T i = a, j = a;
	for (; i != b-1; i++) {
		if (*i <= target) {
			std::swap(*i, *j);
			j++;
		}
	}
	std::swap(*(b-1), *j);

	return j;
}

typeT T kthMinSearch(T a, T b, ll k) {
	if (b-a <= 1) return a;

	T p = getPartition(a, b);

	if (p - a > k) {
		return kthMinSearch(a, p, k);
	} else if (p - a < k) {
		return kthMinSearch(p + 1, b, k - (p - a + 1));
	}

	return p;
}
