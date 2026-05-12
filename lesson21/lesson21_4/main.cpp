#include <iostream>
#include <fstream>
using namespace std;
bool isLetter(char ch)
{
    return ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') );
}
bool isDigit(char ch)
{
    return (ch >= '0' && ch <= '9');
}
void encryptFile(const char* src, const char* dest, int key)
{
    ifstream inFile(src, ios::binary);
    ofstream outFile(dest, ios::binary);
    if(!inFile || !outFile)
    {
        cerr << "无法打开文件进行加密。" << endl;
    }
    char ch;
    while(inFile.get(ch))
    {
        char encryptedChar = ch + key;
        outFile.put(encryptedChar);
    }
    inFile.close();
    outFile.close();
}
void decryptFile(const char* src, const char* dest, int key)
{
    ifstream inFile(src, ios::binary);
    ofstream outFile(dest, ios::binary);
    if(!inFile || !outFile)
    {
        cerr << "无法打开文件进行解密。" << endl;
    }
    char ch;
    while(inFile.get(ch))
    {
        char decryptedChar = ch - key;
        outFile.put(decryptedChar);
    }
    inFile.close();
    outFile.close();
}
void showStatistics(const char* filename)
{
    ifstream inFile(filename, ios::binary);
    if(!inFile)
    {
        cerr << "无法打开文件进行统计。" << endl;
    }
    char ch;
    int charCount = 0;
    int letterCount = 0;
    int digitCount = 0;
    while(inFile.get(ch))
    {
        charCount++;
        if(isLetter(ch))
            letterCount++;
        if(isDigit(ch))
            digitCount++;
    }
    inFile.close();
    cout << "文件: " << filename << " 统计信息:" << endl;
    cout << "字符数量: " << charCount << endl;
    cout << "字母数量: " << letterCount << endl;
    cout << "数字数量: " << digitCount << endl;
}

int main()
{
    int key = 5;

    showStatistics("original.txt");

    encryptFile("original.txt", "encrypted.bin", key);
    showStatistics("encrypted.bin");

    decryptFile("encrypted.bin", "decrypted.txt", key);
    showStatistics("decrypted.txt");
    system("pause");

    return 0;
}
