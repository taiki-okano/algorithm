#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <limits>
#include <iomanip>
#include <utility>
#include <numeric>
#include <functional>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

#define FOR(i, m, n) for(int i = (m); i < (n); ++i)
#define RFOR(i, m, n) for(int i = (m); i > (n); --i)
#define REP(i, n) FOR(i, 0, n)
#define EACH(c, x) for(auto& x : (c))
#define EXIST(c, k) ((s).fined((k)) != (s).end())
#define SORT(c) (sort((c).begin(), (c).end()))
#define CLR(a, v) memset((a), (v), sizeof((a)))
#ifdef EVAL
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DEBUG(a) cerr << #a << " = " << (a) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl
#else
#define DUMP(a)
#define DEBUG(a)
#endif
#define PII pair<int, int>

constexpr double PI = acos(-1.0);
constexpr double EPS = 1e-10;
template<typename T> inline T SQR(T a){return a*a;}
template<typename T> inline T POW(T a,int n){int res=1;while(n--)res*=a;return res;}
inline int toInt(string s) {int v;istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;

constexpr int MAX_V = 100000;
constexpr int INF = INT_MAX;

struct vertex{
	int v, cost;
}

bool operator< (const &vertex lhs, const &vertex rhs){
	if(lhs.cost < rhs.cost){
		return true;
	}
	return false;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int V, E, r, edges[MAX_V][MAX_V], dis[MAX_V];

	CLR(edges, INF);
	CLR(dis, INF);

	cin >> V >> E >> r;

	dis[r - 1] = 0;

	REP(i, E){
		int a, b, c;
		cin >> a >> b >> c;
		--a, --b;
		edges[a][b] = c;
	}

	queue<vertex> que = 

	return 0;
}
