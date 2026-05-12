#include <iostream>

int main() {
    char c;
    std::cout << "请输入 ABC 然后按回车: ";
    
    std::cin.get(c); // 你读走了 'A'
    std::cout << "我刚才读走了: " << c << std::endl;

    std::cin.putback('Q'); // 你把 'A' 又还回去了
    
    std::cin.get(c); // 再次读取QQ
    std::cout << "我又读了一次，发现还是: " << c << std::endl;

    std::cin.get(c); // 再次读取
    std::cout << "我又读了一次，发现还是: " << c << std::endl;
    system("pause");

    return 0;
}