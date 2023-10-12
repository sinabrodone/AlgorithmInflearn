#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int idx = 0;
    string str;
    cin >> str;
    for(int i = 0; i < croatian.size(); i++)
    {
        while(1){
            idx = str.find(croatian[i]);
            // 찾는 문자열이 없는경우 string::npos 반환 
            if(idx == string::npos)
                break;
            str.replace(idx,croatian[i].length(),"#");
        }
    }
    cout << str.length();
}
