#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
    system("color 1f");
    system("title �˳�����BlueGS��д");
    std::cout << "���������BlueGS(hxr)��д����ֹ����ʹ��" << std::endl;
    std::cout << "���»س�(Enter)��ʼ��أ���ע����Ļ���½ǣ�ͬ��һ�²���һ��4�Σ�" << std::endl;
    std::cin.ignore();

    std::ofstream f;
    f.open("main.reg");
    f << "Windows Registry Editor Version 5.00\n\n";
    f << "[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\MMStudent50.exe]\n";
    f << "\"debugger\"=\"123213213213.exe\"\n\n";
    f.close();

    f.open("drf.reg");
    f << "Windows Registry Editor Version 5.00\n\n";
    f << "[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\LgServices.exe]\n";
    f << "\"debugger\"=\"21321321321.exe\"\n\n";
    f.close();

    f.open("drf1.reg");
    f << "Windows Registry Editor Version 5.00\n\n";
    f << "[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\LgServices_old.exe]\n";
    f << "\"debugger\"=\"21313213213.exe\"\n\n";
    f.close();

    system("regedit /s main.reg");
    system("regedit /s drf.reg");
    system("regedit /s drf1.reg");
    system("taskkill /f /im MMStudent50.exe");
    system("taskkill /f /im LgServices.exe");
    system("taskkill /f /im LgServices_old.exe");
    system("del main.reg");
    system("del drf.reg");
    system("del drf1.reg");

    std::cout << "OK!!!������" << std::endl;
    system("pause");

    return 0;
}
