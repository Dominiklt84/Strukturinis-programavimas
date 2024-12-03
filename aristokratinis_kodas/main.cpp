#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

const char ABC[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
const char ABC_AA[26] = {'N', 'L', 'J', 'C', 'B', 'P', 'I', 'S', 'X', 'E', 'T', 'O', 'M', 'H', 'Z', 'K', 'A', 'D', 'U', 'Q', 'Y', 'V', 'W', 'F', 'G', 'R'};//1,8,9,10,11,12,13,14,15,16
const char ABC_AB[26]=  {'U', 'X', 'Q', 'A', 'C', 'L', 'N', 'P', 'K', 'J', 'Z', 'V', 'I', 'O', 'H', 'F', 'B', 'M', 'T', 'S', 'Y', 'R', 'G', 'E', 'W', 'D'};//2
const char ABC_AC[26] = {'I', 'Q', 'L', 'O', 'P', 'Y', 'D', 'B', 'W', 'K', 'F', 'M', 'V', 'T', 'Z', 'U', 'C', 'X', 'J', 'H', 'G', 'A', 'E', 'S', 'N', 'R'};//3
const char ABC_AD[26] = {'A', 'U', 'K', 'O', 'N', 'E', 'C', 'M', 'P', 'I', 'R', 'Q', 'F', 'V', 'H', 'T', 'Z', 'L', 'W', 'J', 'D', 'S', 'X', 'B', 'Y', 'G'};//4
const char ABC_AE[26] = {'G', 'A', 'N', 'I', 'V', 'R', 'U', 'B', 'C', 'M', 'Z', 'Q', 'W', 'O', 'S', 'E', 'T', 'X', 'Y', 'L', 'J', 'H', 'D', 'F', 'P', 'K'};//5
const char ABC_AF[26] = {'X', 'M', 'Y', 'T', 'Z', 'C', 'L', 'N', 'K', 'V', 'H', 'R', 'P', 'F', 'I', 'A', 'S', 'O', 'J', 'G', 'B', 'W', 'D', 'E', 'Q', 'U'};//6
const char ABC_AR[26] = {'X', 'W', 'L', 'J', 'R', 'P', 'U', 'N', 'M', 'A', 'O', 'Z', 'F', 'B', 'D', 'T', 'S', 'Q', 'E', 'Y', 'G', 'K', 'I', 'V', 'C', 'H'};//7
const char ABC_AK[26] = {'U', 'W', 'Y', 'C', 'R', 'N', 'O', 'J', 'Z', 'M', 'H', 'V', 'S', 'L', 'K', 'D', 'P', 'T', 'I', 'F', 'X', 'E', 'Q', 'G', 'B', 'A'};//17
const char ABC_AI[26] = {'E', 'U', 'Y', 'P', 'M', 'G', 'H', 'V', 'K', 'O', 'Z', 'D', 'J', 'X', 'Q', 'N', 'T', 'C', 'F', 'W', 'I', 'B', 'A', 'I', 'R', 'S'};//18
void Desifravimas();

int main() {
    Desifravimas();
    return 0;
}

void Desifravimas() {
    char text[135000], word[135000] = {0};
    ifstream in("uzsifruotastekstas.txt");


    in.getline(text, sizeof(text));
    in.close();
    if(text[19]==ABC_AB[14]){
        for (int i = 0; i < strlen(text); i++) {
            if (isalpha(text[i])) {
                for (int j = 0; j < 26; j++) {
                    if (toupper(text[i]) == ABC_AB[j]) {
                        word[i] = ABC[j];
                        break;
                    }
                }
            } else {
                word[i] = text[i];
            }
        }
    }else if(text[19]==ABC_AC[10]){
        for (int i = 0; i < strlen(text); i++) {
            if (isalpha(text[i])) {
                for (int j = 0; j < 26; j++) {
                    if (toupper(text[i]) == ABC_AC[j]) {
                        word[i] = ABC[j];
                        break;
                    }
                }
            } else {
                word[i] = text[i];
            }
        }
    }else if(text[4]==ABC_AD[14]) {
        for (int i = 0; i < strlen(text); i++) {
            if (isalpha(text[i])) {
                for (int j = 0; j < 26; j++) {
                    if (toupper(text[i]) == ABC_AD[j]) {
                        word[i] = ABC[j];
                        break;
                    }
                }
            } else {
                word[i] = text[i];
            }
        }
    }else if(text[19]==ABC_AE[19]) {
        for (int i = 0; i < strlen(text); i++) {
            if (isalpha(text[i])) {
                for (int j = 0; j < 26; j++) {
                    if (toupper(text[i]) == ABC_AE[j]) {
                        word[i] = ABC[j];
                        break;
                    }
                }
            } else {
                word[i] = text[i];
            }
        }
    }else if(text[19]==ABC_AF[17]) {
        for (int i = 0; i < strlen(text); i++) {
            if (isalpha(text[i])) {
                for (int j = 0; j < 26; j++) {
                    if (toupper(text[i]) == ABC_AF[j]) {
                        word[i] = ABC[j];
                        break;
                    }
                }
            } else {
                word[i] = text[i];
            }
        }
    }else if(text[19]==ABC_AR[0]) {
        for (int i = 0; i < strlen(text); i++) {
            if (isalpha(text[i])) {
                for (int j = 0; j < 26; j++) {
                    if (toupper(text[i]) == ABC_AR[j]) {
                        word[i] = ABC[j];
                        break;
                    }
                }
            } else {
                word[i] = text[i];
            }
        }
    }else if(text[25]==ABC_AK[0]) {
        for (int i = 0; i < strlen(text); i++) {
            if (isalpha(text[i])) {
                for (int j = 0; j < 26; j++) {
                    if (toupper(text[i]) == ABC_AK[j]) {
                        word[i] = ABC[j];
                        break;
                    }
                }
            } else {
                word[i] = text[i];
            }
        }
    }else if(text[6]==ABC_AI[13]) {
        for (int i = 0; i < strlen(text); i++) {
            if (isalpha(text[i])) {
                for (int j = 0; j < 26; j++) {
                    if (toupper(text[i]) == ABC_AI[j]) {
                        word[i] = ABC[j];
                        break;
                    }
                }
            } else {
                word[i] = text[i];
            }
        }
    }else {
        for (int i = 0; i < strlen(text); i++) {
            if (isalpha(text[i])) {
                for (int j = 0; j < 26; j++) {
                    if (toupper(text[i]) == ABC_AA[j]) {
                        word[i] = ABC[j];
                        break;
                    }
                }
            } else {
                word[i] = text[i];
            }
        }
    }
    word[strlen(text)] = '\0';

    ofstream out("tikrastekstas.txt");

    out << word;
    out.close();
}