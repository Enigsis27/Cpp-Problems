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
	
	stack<char> st1;
	stack<char> st2;
	string s;

	cin >> s;
	
	for(int i = 0; i < s.length(); ++i) {

		if(s[i] == '[' || s[i] == '(' || s[i] == '{') st1.push(s[i]);
		else if(s[i] == ']' || s[i] == ')' || s[i] == '}') st2.push(s[i]);

		if(st1.empty() || st2.empty()) continue;
		else if(st1.top() == '[' && st2.top() == ']') {
			st1.pop();
			st2.pop();
		}
		else if(st1.top() == '(' && st2.top() == ')') {
			st1.pop();
			st2.pop();
		}
		else if(st1.top() == '{' && st2.top() == '}') {
			st1.pop();
			st2.pop();
		}	
    }

	cout <<(st1.empty() && st2.empty()) << "\n";
	return 0;
}
