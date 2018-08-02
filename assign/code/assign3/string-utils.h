#include <iostream>
#include <string>

using namespace std;

static bool startsWith(const string& a, const string& b) {
  if (a.length() < b.length()) return false;
  for (size_t i=0; i<b.length(); i++)
    if (a[i] != b[i])
      return false;
  return true;
}

static const string trim(const string& s) {
  size_t start, end, len;
  for (start=0; start<s.length(); start++) {
    if (s[start] != ' ') break;
  }
  for (end=s.length()-1; end>=0; end--) {
    if (s[end] != ' ') break;
  }
  len = end-start+1;
  string res = s.substr(start, len);
  return res;
}
