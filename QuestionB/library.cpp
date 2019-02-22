#include "library.h"
#include <gtest/gtest.h>

string VersionComp::VersionCompare(string &s1, string &s2) {
        string out;

		if (s1.empty() || s2.empty()) {
			out.append(Exerption());
			return out;
		}

		/* Convert chars to ints */
		vector<int> v1, v2;
		v1 = VersionStringConvert(s1);
		v2 = VersionStringConvert(s2);

		auto v1Size = static_cast<int>(v1.size());
		auto v2Size = static_cast<int>(v2.size());

		/* Start to comparision */
		auto length = v1Size;
		if (v1Size > v2Size) {
		    length = v2Size;
		}

		for (int i = 0; i < length; i++) {
			if (v1[i] > v2[i]) {
				out.append(GreaterExp(s1, s2));
				return out;
			}
			if (v1[i] < v2[i]) {
				out.append(GreaterExp(s2, s1));
				return out;
			}
		}


		if (v1Size > length) {
		    for (int i = length; i < v1Size; i++) {
		        if (v1[i] > 0) {
                    out.append(GreaterExp(s1, s2));
                    return out;
		        }
		    }
		}
		else if (v2Size > length) {
            for (int i = length; i < v2Size; i++) {
                if (v2[i] > 0) {
                    out.append(GreaterExp(s2, s1));
                    return out;
                }
            }
		}

		out.append(EqualExp(s1, s2));
		return out;
}

vector<int> VersionComp::VersionStringConvert(string &s) {
	vector<int> v;
	string tempStr;
	auto stringSize = static_cast<int>(s.size());

	for (int i = 0; i < stringSize; i++) {
		if (s[i] == '.') {
			v.push_back(stoi(tempStr));
			tempStr = "";
		}
		else {
			tempStr += s[i];
		}
	}
	v.push_back(stoi(tempStr));

	return v;
}

string VersionComp::GreaterExp(string &s1, string &s2) {
	string out;
	out.append(s1);
	out.append(" is greater than ");
	out.append(s2);
	return out;
}

string VersionComp::EqualExp(string &s1, string &s2) {
	string out;
	out.append(s1);
	out.append(" is equal to ");
	out.append(s2);
	return out;
}

string VersionComp::Exerption() {
	return "The string has no content!!!";
}
