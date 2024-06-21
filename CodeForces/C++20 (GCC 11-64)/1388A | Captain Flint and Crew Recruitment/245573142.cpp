#include<iostream>
#include<stdio.h>
#include <sstream>
#include <cstdio>
#include<fstream>
#include<algorithm>
#include<vector>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include<unordered_map>
#include <stdio.h>  
#include <string.h>  
using namespace std;
 
 
 
#define ll long long 
#define ld long double 
#define vbe(v) ((v).begin()), ((v).end())
#define sz(v)     ((int)((v).size()))
#define clr(v, d)   memset(v, d, sizeof(v))
#define rep(i, v)   for(int i=0;i<sz(v);++i)
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)  for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)  for(int i=(j);i>=(int)(n);--i)
#define MIN(x, y) (((x) < (y)) ? (x) : (y))  
ll GCD(ll a, ll b) { return (a) ? GCD(b % a, a) : b; }
ll LCM(ll a, ll b) { return a * b / GCD(a, b); }
ll fastpow(ll b, ll p) { if (!p) return 1; ll ret = fastpow(b, p >> 1); ret *= ret; if (p & 1) ret *= b; return ret; }
string alpha = "abcdefghijklmnopqrstuvwxyz";
int divisor(int number)
{
    int i;
    for (i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return number / i;
        }
    }
    return 1;
}
int myXOR(int x, int y)
{
    int res = 0; // Initialize result 
 
    // Assuming 32-bit Integer  
    for (int i = 31; i >= 0; i--)
    {
        // Find current bits in x and y 
        bool b1 = x & (1 << i);
        bool b2 = y & (1 << i);
 
        // If both are 1 then 0 else xor is same as OR 
        bool xoredBit = (b1 & b2) ? 0 : (b1 | b2);
 
        // Update result 
        res <<= 1;
        res |= xoredBit;
    }
    return res;
}
//std::getline(std::cin, a); //read string with spaces
void printDivisors(int n, vector<int>& v)
{
    // Note that this loop runs till square root 
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // If divisors are equal, print only one 
            if (n / i == i && i > 1)
                v.push_back(i);
 
            else // Otherwise print both 
            {
                if (i > 1)
                    v.push_back(i);
                if (n / i > 1)
                    v.push_back(n / i);
            }
        }
    }
}
int bin(vector<int>vec, int val)
{
    int l = 0, r = vec.size() - 1, mid = r / 2;
    while (l <= r)
    {
        mid = (l + r) / 2;
 
        if (vec[mid]<val && vec[mid + 1]>val)
        {
            if (vec[mid + 1] == val)
                return mid + 1;
            return mid;
 
        }
        else if (vec[mid] > val)
        {
            r = mid - 1;
        }
        else if (vec[mid] < val)
        {
            l = mid + 1;
        }
        else if (vec[mid] == val)
            return mid;
 
 
    }
    return -1;
}
void clear(vector<bool>v)
{
    for (int i = 0; i < v.size(); i++)
        v[i] = 0;
}
 
bool comp(const string& s1, const string& s2)
{
    // Suppose s1 = 900, s2 = 9, then it compares
    // 9900 with 9009.
    return s2 + s1 < s1 + s2;
}
vector<string> split(const string& s, char delim) {
    vector<string> result;
    stringstream ss(s);
    string item;
 
    while (getline(ss, item, delim)) {
        result.push_back(item);
    }
 
    return result;
}
int countWords(string str)
{
    // breaking input into word using string stream 
    stringstream s(str); // Used for breaking words 
    string word; // to store individual words 
 
    int count = 0;
    while (s >> word)
        count++;
    return count;
}
int main()
{
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 30)
            cout << "NO";
        else
        {
            cout << "YES\n";
            if (n != 36 && n != 40 && n != 44)
            {
                cout << 6 << " " << 10 << " " << 14 << " " << n - 30;
            }
            else if (n == 36)
            {
                cout << 5 << " " << 6 << " " <<10<<" "<< 15;
            }
            else if (n == 40)
            {
                cout << 6 << " " << 14 << " " << 15 << " " << n - 35;
            }
            else if (n == 44)
            {
                cout << 6 << " " << 10 << " " << 15 << " " << n - 31;
            }
        }
        cout << endl;
    }
}
 
/*
    int NNN = 1000000;
    bool* isprime = new bool[NNN + 1];
 
    for (int i = 0; i < NNN + 1; i++)
        isprime[i] = 1;
    isprime[0] = isprime[1] = 0;
    int sqt = sqrt(NNN + 1);
    for (int i = 2; i < 1 + sqt; i++)
    {
        if (isprime[i])
            for (int j = i * 2; j < NNN + 1; j += i)
                isprime[j] = 0;
    }
*/