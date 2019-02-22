#ifndef ORMUCO_LIBRARY_H
#define ORMUCO_LIBRARY_H

#include <iostream>
#include <vector>

using namespace std;

class VersionComp {
public:
	string VersionCompare(string &s1, string &s2);
	string GreaterExp(string &s1, string &s2);
	string EqualExp(string &s1, string &s2);
	string Exerption();
private:
	vector<int> VersionStringConvert(string &s);

};


#endif