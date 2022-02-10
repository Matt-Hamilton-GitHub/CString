#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;
//-----------------Functions---------------------
//cout << name.substr(0,4); -> shows charactars from index 0 to 4
//name.find("This"); -> returns a position of that word
//name.erase(start_index, length);
//getline(cin, nameOffile);
//getline(cin, nameOfFile, stopChar);
string encrypt(string user, string enc, string decrypt){
    string temp{};
    bool test = false;
    for(size_t i{0}; i < user.length();i++){
        test = false;
        for(size_t x{0};x < enc.length();x++){
            if(user[i] == enc[x]){
                temp+=decrypt[x];
                test = true;
            }   
        }
        if(test != true)
            temp+=user[i];
    }
    return temp;
}

string decrypt(string user, string enc, string decrypt){
    string temp{};
    bool test = false;
    for(size_t i{0}; i < user.length();i++){
        test = false;
        for(size_t x{0};x < enc.length();x++){
            if(user[i] == enc[x]){
                temp+=decrypt[x];
                test = true;
            }   
        }
        if(test != true)
            temp+=user[i];
    }
    return temp;
}
int main()
{
    
//   string unformatted_full_name {"StephenHawking"};
//    
//
//    string first_name {unformatted_full_name,0,7};
//    cout << first_name << endl;
//    string last_name {unformatted_full_name.substr(7,14)};
//    cout << last_name << endl;

string secretMessage{};
string origin {"qwertyuiopasd3454klzxcvbnmQWERTYUIOP@SDFGHJKLZXCVBNM:)($#&<>^;"};
string key    {"QETUOWRYIPADGJLSFHKZC&MXVNzmxnbcvlaksjdhfgpqoweiuryt1234567890"};


cout << "Enter your secter message: ";
getline(cin, secretMessage);


cout << "Encrepyted to: " << encrypt(secretMessage, key, origin) << endl;
cout << "Decrypted: " << decrypt(encrypt(secretMessage, key, origin),origin, key) << endl;



	system("pause");
	return 0;
}
