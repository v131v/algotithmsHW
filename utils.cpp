typeT bool utils::checkSortedVector(std::ve<T> &v) {
	ll cnt = 0;

	#ifdef DETAILS
		utils::out(v, '\n');
	#endif
		
	fo(i , v.size()-1) {
		if (v[i] > v[i+1]) {
			cnt++;
			utils::out("i: ", i, " (", v[i], " ", v[i+1], ")\n");
			if (cnt > 100) return 0;
		}
	}

	if (cnt > 0) return 0;
	return 1;
}

typeT std::ve<T> utils::readVector() {
	ul n;
	std::cin >> n;
	return utils::readVector<T>(n);
}
typeT std::ve<T> utils::readVector(ul n) {
	std::ve<T> ar(n);
	fo(i, n) std::cin >> ar[i];
	return ar;
}

typeT void utils::out(const T &x) {
	std::cout << x;
}
template <type(T1), type(T2)>
void utils::out(const std::pa<T1, T2> &v) {
	utils::out('(');
	utils::out(v.fi);
	utils::out(", ");
	utils::out(v.se);
	utils::out(')');
}
typeT
void utils::out(const std::ve<T> &v) {
	utils::out('[');
	fo(i, v.size()-1) utils::out(v[i], ", ");
	utils::out(v[v.size()-1]);
	utils::out("] ");
}
template <type(F), typename... T>
void utils::out(const F &fi, const T&... args) {
	utils::out(fi);
	utils::out(args...);
}

typeT T utils::rnd(T a, T b) {
	return a + (T)((ul)mt() % (ul)(b - a));
}
typeT std::ve<T> utils::getRndVector(int n, T a, T b) {
	std::ve<T> v(n);
	for (ll i = 0; i < n; i++) v[i] = utils::rnd<T>(a, b);
	return v;
}

ld utils::measureWorkTime(const std::function<void()> &f) {
	auto start = std::chrono::steady_clock::now();
	f();
	std::chrono::duration<ld> sec = std::chrono::steady_clock::now() - start;
	return sec.count();
}
