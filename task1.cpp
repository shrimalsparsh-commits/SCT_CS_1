#include<bits/stdc++.h>

using namespace std;

void encryptCaesarCipher (string &Text,int Shift){
    for (int i = 0;i<Text.size();i++) {
        if(isalpha(Text[i])) {
            if(islower(Text[i])) {
                Text[i] = (((Text[i] -'a')+Shift)%26) + 'a';
            }else{
                Text[i] = (((Text[i] -'A')+Shift)%26)+'A';
            }
        }
    }
    
}
void decryptCaesarCipher (string &Text,int Shift) {
    for (int i = 0;i<Text.size();i++) {
        if(isalpha(Text[i])) {
             if(islower(Text[i])) {
                Text[i] = (((Text[i] -'a')-Shift+26)%26) + 'a';
            }else{
                Text[i] = (((Text[i] -'A')-Shift+26)%26)+'A';
            }
        }
    }
    
}

int main() {
    string Text;
    int Shift;
    string task;
    getline(cin,Text);
    cin>>Shift;
    Shift = Shift%26;
    cin>>task;
    for (char &c : task) {
    c = tolower(c);
}
    if (task == "decrypt") {
        decryptCaesarCipher(Text,Shift);
    }else{
        encryptCaesarCipher(Text,Shift);
    }
    cout<<Text;
}