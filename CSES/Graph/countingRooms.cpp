#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
 
using namespace std;

int vis[1001][1001];
char ar[1001][1001];
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};
int rows, col;
bool isValid(int x, int y){
    if(x<1 || x>rows || y<1 || y>col)  return false;
    if(vis[x][y] == 1 || ar[x][y] == '#') return false;
    
    return true;
}

void dfs(int m, int n){
    vis[m][n] = 1;
   // cout << m << " " << n << endl;
    
    for (int i = 0; i < 4; i++)
        if(isValid(m+dx[i], n+dy[i]))
            dfs(m+dx[i], n+dy[i]);
}

void solve(int t){
    //code here
    cin>>rows>>col;
    
    int a, b;
    REP(i, rows)
        REP(j, col)
            cin>>ar[i][j];
    
    int cc = 0;
    REP(i, rows)
        REP(j, col){
            if(ar[i][j] == '.' && vis[i][j] == 0)
                dfs(i,j), cc++;
        }
    
    cout << cc << endl;
}

int main()
{
    int t =1;
    //cin>>t;
    solve(t);
   
	return 0;
}
