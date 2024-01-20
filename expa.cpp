#include <iostream>

int main()
{
    int age;
    age = 28 + 123;
    std::cout << "Age = " << age << "\n";
    int sex {28 + 234};
    std::cout << "Sex = " << sex << "\n";
    int funcNotation (28 + 234);
    std::cout << "functional notation = " << funcNotation << "\n";

    int y = 123;
    std::cout << "Age1 = " << y << "\n";
    y = 567;
    std::cout << "Age2 = " << y << "\n";

    bool isAlive = true;
    bool isDead = false;
    std::cout << "isAlive = " << isAlive << " \nisDead = " << isDead << "\n";

    signed char sigChar = -64;
    std::cout << "sigChar = " << sigChar << std::endl;
    unsigned char unsigChar = 254;
    std::cout << "unsigChar = " << unsigChar << std::endl;
    char chr = 'B';
    std::cout << "chr = " << chr << std::endl;
    short shrt = 234;
    std::cout << "shrt = " << shrt << std::endl;

    short int shrtInt = 23;
    std::cout << "shrtInt = " << shrtInt << std::endl;
    signed short int sigShrtInt = 234;
    std::cout << "sigShrtInt = " << sigShrtInt << std::endl;
    signed short sigShrt = 234;
    std::cout << "sigShrt = " << sigShrt << std::endl;
    
    unsigned short unSignShort = 234;
    std::cout << "unSignShort = " << unSignShort << std::endl;
    unsigned short int unsignShortInt = 23;
    std::cout << "unsignShortInt = " << unsignShortInt << std::endl;

    int intVal = 3465;
    std::cout << "intVal = " << intVal << std::endl;

    unsigned int unsignInt = 3567567;
    std::cout << "unsignInt = " << unsignInt << std::endl;

    unsigned unSign = 234;
    std::cout << "unSign = " << unSign << std::endl;

    long longVal = -23423542345;
    std::cout << "longVal = " << longVal << std::endl;


    unsigned long unSignLong = 534;
    
    unsigned long int unSingLongInt = 13423;

    long long longLong = 345345345536;

    long long int longLongInt = 234234;

    signed long long int signLongLongInt = 234234;
    signed long long signLongLong = 1234234;

    unsigned long long unSignLongLong = 234;
    unsigned long long int unSignedLongLong = 234234;

    int num = 1'234'567'890;

    int num1{ 0x1A };
    int num2{ 0xFF };
    int num3{ 0xFFFFFF };
    int vosm1{ 034 };
    int vosm2{ 0234 };
    int biNum1{ 0b11010 };
    int biNum2{ 0b11111111 };
    std::cout << "biNum2 = " << biNum1 << "\n";
    // int num2

    std::cout << "Hello World!\n";
    std::cout << "privet\n";
    return 0;
}