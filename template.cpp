#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
 
#define all(x) x.begin(), x.end()

#define FOR(name, start, lessthan) for (ll name = start; name < lessthan; name++)
#define fori(lessthan) FOR(i, 0, lessthan) 
#define forj(lessthan) FOR(j, 0, lessthan) 
#define fork(lessthan) FOR(k, 0, lessthan) 
#define fory(lessthan) FOR(y, 0, lessthan) 
#define forx(lessthan) FOR(x, 0, lessthan) 
#define forit(container) for (auto it = container.begin(); it != container.end(); it++)
#define tests int testCount; cin >> testCount; FOR(testIndex, 0, testCount)

#define in(type, name) type name; cin >> name;
#define invec(type, name, len) vector<type> name(len); fori(len) cin >> name[i];
#define mp make_pair
 
#define sum(a) accumulate(all(a), 0LL)
#define mine(a) *min_element(a.begin(), a.end())
#define maxe(a) *max_element(a.begin(), a.end())
#define mini(a) min_element(a.begin(), a.end()) - a.begin()
#define maxi(a) max_element(a.begin(), a.end()) - a.begin()

#ifdef ONLINE_JUDGE
const string SEP = " ";
#define surr(surround, code) code; 
#define DBG(args...) {}
#else
const string SEP = ", ";
#define surr(surround, code) cout << surround[0]; code; cout << surround[1];
#define DBG(args...) { vector<string> _v = split(#args, ','); dbg(_v.begin(), args); cout << endl; }
vector<string> split(const string& s, char c) {
    vector<string> v; stringstream ss(s); string x; while (getline(ss, x, c)) v.emplace_back(x); return v;
}
void dbg(vector<string>::iterator) {}
template<typename T, typename... Args> void dbg(vector<string>::iterator it, T a, Args... args) {
    cout << it->substr((*it)[0] == ' ', it->length()) << "=" << a << ", "; dbg(++it, args...);
}
#endif

#define comma(it, container) (it==container.begin() ? "" : SEP)
 
// Python-like outputs for use in streams for vectors, maps, sets, pairs and tuples
template <class T, template <class, class> class C> ostream& operator<<(ostream& os, const C<T, allocator<T>>& v) { 
    surr("[]", forit(v) os << comma(it, v) << *it) return os;
} 
template <typename T1, typename T2> ostream& operator<<(ostream& os, const map<T1, T2>& m) { 
    surr("{}", forit(m) os << comma(it, m) << it->first << ":" << it->second) return os; 
} 
template <typename T> ostream& operator<<(ostream& os, const set<T>& s) { 
    surr("{}", forit(s) os << comma(it, s) << *it) return os; 
} 
template <typename T1, typename T2> ostream& operator<<(ostream& os, const pair<T1, T2>& p) { 
    surr("()", os << p.first << SEP << p.second); return os; 
} 
template<class T, size_t... I> ostream& tuplePrint(ostream& os, const T& _tup, index_sequence<I...>) {
    surr("()", (..., (os << (I == 0 ? "" : SEP) << get<I>(_tup)))); return os;
}
template<class... T> ostream& operator<<(ostream& os, const tuple<T...>& _tup) {
    return tuplePrint(os, _tup, make_index_sequence<sizeof...(T)>());
}
 
bool isPrime(ll a) { if (a < 2) return 0; for(ll i = 2; i*i <= a; i++) if (a%i == 0) return 0; return 1; }

template<typename T> string tostring(T num) { stringstream ss; ss << num; return ss.str(); }
template<typename T> ll tonumber(T stringNum) { ll a; stringstream ss; ss << stringNum; ss >> a; return a; }

const ll mod7 = 1'000'000'007;

 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cin.clear();
    tests {
        in(ll, n)
        invec(ll, nums, n)
        
    }
} 
