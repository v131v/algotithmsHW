#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <random>
#include <chrono>
#include <iomanip>
#include <functional>
#include <limits>

#define ll long long
#define ld long double
#define str string
#define ve vector
#define vll ve<ll>
#define ui unsigned int
#define ul unsigned long long
#define vul ve<ul>
#define mp make_pair
#define pa pair
#define pll pa<ll, ll>
#define fi first
#define se second
#define fo(j,n) for (ll j = 0; j < n; j++)
#define of(j,n) for (ll j = n-1; j >= 0; j--)
#define mt64 mt19937_64
#define type(T) typename T
#define typeT template <type(T)>

namespace utils {
	typeT bool checkSortedVector(std::ve<T> &v);
	typeT std::ve<T> readVector();
	typeT std::ve<T> readVector(ul n);

	typeT void out(const std::ve<T> &v);
	template <type(T1), type(T2)> void out(const std::pa<T1, T2> &v);
	typeT void out(const T &x);
	template <type(F), typename... T> void out(const F &fi, const T&... args);

	std::mt64 mt(time(nullptr));
	typeT T rnd(T a, T b);
	typeT std::ve<T> getRndVector(int n, T a, T b);

	ld measureWorkTime(const std::function<void()> &f);
}

#include "utils.cpp"
