//
// Created by shanhai on 2020/5/8.
//

#ifndef MYLEETCODE_AC_HEADER_H
#define MYLEETCODE_AC_HEADER_H
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


#define POW2(X) (1<<(X))
#define CKBIT(S, X) (((S)&POW2(X))!=0)

#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <map>
#include <set>

const double pi = acos(-1.0);
const double eps = 1e-11;

template<class T>
inline void ckmin(T &a, T b) { a = min(a, b); }

template<class T>
inline void ckmax(T &a, T b) { a = max(a, b); }

template<class T>
inline T sqr(T x) { return x * x; }

#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

#endif //MYLEETCODE_AC_HEADER_H