#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<string, map<string,int>>> students = {
        {"Alice", {{"math",90},{"cs",95}}},
        {"Bob", {{"math",85},{"cs",80}}},
        {"Charlie", {{"math",90},{"cs",90}}}
    };

    vector<pair<string,double>> result;

    for (auto &[name, grades] : students) {
        double sum = 0;
        for (auto &[sub, grade] : grades) sum += grade;
        result.push_back({name, sum / grades.size()});
    }

    sort(result.begin(), result.end(), [](auto &a, auto &b){
        if (a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });

    for (auto &[name,gpa] : result)
        cout << name << " " << gpa << endl;
}



#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<string> emails = {"a@gmail.com","b@yahoo.com","c@gmail.com"};
    map<string, vector<string>> result;

    for (string email : emails) {
        int pos = email.find('@');
        string user = email.substr(0,pos);
        string domain = email.substr(pos+1);
        result[domain].push_back(user);
    }

    for (auto &[domain, users] : result) {
        cout << domain << ": ";
        for (string user : users) cout << user << " ";
        cout << endl;
    }
}


#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<string> logs = {
        "192.168.1.1 - login success",
        "192.168.1.2 - login failed",
        "192.168.1.1 - logout"
    };

    map<string, vector<string>> result;

    for (string log : logs) {
        int pos = log.find(" - ");
        string ip = log.substr(0,pos);
        string action = log.substr(pos+3);
        result[ip].push_back(action);
    }

    for (auto &[ip, actions] : result) {
        cout << ip << ": ";
        for (string act : actions) cout << act << " | ";
        cout << endl;
    }
}


#include <iostream>
#include <map>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    string text = "Hello, hello! HELLO?? world...";

    for (char &c : text) {
        if (!isalnum(c)) c = ' ';
        else c = tolower(c);
    }

    stringstream ss(text);
    map<string,int> freq;
    string word;

    while (ss >> word)
        freq[word]++;

    for (auto &[w,c] : freq)
        cout << w << ": " << c << endl;
}



#include <iostream>
#include <vector>
#include <map>
#include <sstream>
using namespace std;

int main() {
    vector<string> names = {"John Smith","John Smith","Alice Smith"};
    map<string,int> used;

    for (string full : names) {
        stringstream ss(full);
        string first,last;
        ss >> first >> last;

        for (char &c:first) c=tolower(c);
        for (char &c:last) c=tolower(c);

        string username = first + "." + last;

        if (used.count(username)) {
            used[username]++;
            cout << username << used[username] << endl;
        } else {
            used[username]=0;
            cout << username << endl;
        }
    }
}



#include <iostream>
#include <map>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string url = "url?name=John&age=20&name=Alice";

    string query = url.substr(url.find('?')+1);
    stringstream ss(query);
    string pairStr;

    map<string, vector<string>> result;

    while (getline(ss,pairStr,'&')) {
        int pos = pairStr.find('=');
        string key = pairStr.substr(0,pos);
        string value = pairStr.substr(pos+1);
        result[key].push_back(value);
    }

    for (auto &[k,v] : result) {
        cout << k << ": ";
        for (string x:v) cout << x << " ";
        cout << endl;
    }
}





#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, map<string,int>> students = {
        {"Alice", {{"math",90},{"physics",85},{"cs",95}}},
        {"Bob", {{"math",80},{"physics",88},{"cs",84}}},
        {"Charlie", {{"math",95},{"physics",91},{"cs",89}}}
    };

    string best;
    double bestAvg = 0;

    for (auto &[name, grades] : students) {
        double sum = 0;
        for (auto &[sub, grade] : grades) sum += grade;
        double avg = sum / grades.size();

        if (avg > bestAvg) {
            bestAvg = avg;
            best = name;
        }
    }

    cout << best << endl;
}


#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, vector<string>> courses = {
        {"Alice", {"Math","Physics","CS"}},
        {"Bob", {"Math","CS"}},
        {"Charlie", {"Physics","Biology"}},
        {"David", {"Math","Biology"}}
    };

    map<string,int> count;

    for (auto &[name, list] : courses)
        for (string course : list)
            count[course]++;

    string best;
    int mx = 0;

    for (auto &[course, c] : count)
        if (c > mx) {
            mx = c;
            best = course;
        }

    cout << best << endl;
}



#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, vector<char>> attendance = {
        {"Alice", {'P','A','P','P','A'}},
        {"Bob", {'A','A','P','P','P'}},
        {"Charlie", {'P','P','P','P','P'}}
    };

    for (auto &[name, rec] : attendance) {
        int p=0,a=0;
        for (char c:rec) {
            if (c=='P') p++;
            else a++;
        }

        cout << name << ": Present=" << p << " Absent=" << a << endl;
    }
}





#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<pair<string,int>> data = {
        {"apple",10},{"banana",5},{"apple",7},{"orange",3},{"banana",2}
    };

    map<string,int> result;

    for (auto &[product, qty] : data)
        result[product] += qty;

    for (auto &[p,q] : result)
        cout << p << ": " << q << endl;
}




#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<string>> phrases = {
        {"python","is","powerful"},
        {"I","love","programming"},
        {"tuples","are","immutable"}
    };

    for (auto group : phrases) {
        string longest = group[0];
        for (string word : group)
            if (word.size() > longest.size())
                longest = word;

        cout << longest << endl;
    }
}



#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<pair<string,string>> logs = {
        {"user1","login"},
        {"user2","login"},
        {"user1","logout"},
        {"user2","view"},
        {"user1","login"}
    };

    map<string, map<string,int>> result;

    for (auto &[user, action] : logs)
        result[user][action]++;

    for (auto &[user, actions] : result) {
        cout << user << ":" << endl;
        for (auto &[act, count] : actions)
            cout << "  " << act << " = " << count << endl;
    }
}
