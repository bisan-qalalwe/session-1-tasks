#include <iostream>
#include<string>
#include <cctype>
using namespace std;

int main() {
	
string s;
cin>>s;

 if (int(s[0]+32)>= 129)
 {
     s[0]=char(s[0]-32);
     cout<<s<<endl;
 }
else

cout<<s<<endl;

	return 0;
}
