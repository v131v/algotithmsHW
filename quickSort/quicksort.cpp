typeT std::pa<T, T> getTwinPartition(T a, T b) {
	auto target = *a;

	T i = a, j = a, p = a;

	while (*i == target) {
		i++;
	}

	j = i-1;

	while (i != b) {
		if (i <= j || *i > target) {
			i++;
		} else if (*i == target) {
			j++;
			std::swap(*i, *j);
		} else if (*i < target) {
			j++;
			std::swap(*j, *i);
			std::swap(*p, *j);
			p++;
		}
	}

	return make_pair(p, j);
}

typeT void qSort(T l, T r) {
	if (r -l <= 1) return;

	#ifdef DETAILS
		for (T i = l; i != r; i++) utils::out(*i, ' ');
		utils::out('\n');
	#endif

	auto p = getTwinPartition(l, r);

	qSort(l, p.fi);
	qSort(p.se + 1, r);
}
