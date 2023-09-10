/* 

Given a string of round, curly, and square open and closing brackets, return whether the brackets are balanced (well-formed).

For example, given the string "([])[]({})", you should return true.

Given the string "([)]" or "((()", you should return false.

*/

#include <stack>
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	stack<char> st;
	string s;

	cin >> s;

	st.push(s[0]);

	for(int i = 1; i < s.length(); ++i) {
		if(s[i] == '[' || s[i] == '(' || s[i] == '{') st.push(s[i]);
		if(st.empty()) continue;
		else if(s[i] == ']' && st.top() == '[') st.pop();
		else if(s[i] == ')' && st.top() == '(') st.pop();
		else if(s[i] == '}' && st.top() == '{') st.pop();	
	}

	cout <<(bool) st.empty() << "\n";
	return 0;
}