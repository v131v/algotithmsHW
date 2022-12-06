#include <iostream>
#include <vector>
#include "../utils.h"
#include "quicksort.h"
#include "kthMin.h"

using namespace std;
using namespace utils;

void task1(ll n, ll mx) {
	vll ar = getRndVector<ll>(n, -mx, mx), arCp(ar);

	out("qSort: ", measureWorkTime([&ar]() {
		qSort(ar.begin(), ar.end());
	}));
	out(" (correct ", checkSortedVector(ar), ")\n");

	out("std::sort: ", measureWorkTime([&arCp]() {
		sort(arCp.begin(), arCp.end());
	}), '\n');

}

void task2(ll n, ll mx) {
	vll ar = getRndVector<ll>(n, -mx, mx), arCp(ar);
	ll k = rnd<ul>((ul)0, (ul)n);

	out("k = ", k, "\n");
	out("kth min: ", *kthMinSearch(ar.begin(), ar.end(), k), " (check with sort: ");

	sort(arCp.begin(), arCp.end());

	out(arCp[k], ")\n");
}

int main() {
	cout.precision(5);
	cout.setf(ios::fixed);

	ll n, mx = 1000000000;
	cin >> n;

	task1(n, mx);
	task2(n, mx);

	char e;cin>>e;
	return 0;
}
