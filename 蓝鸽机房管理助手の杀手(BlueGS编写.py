import os
os.system('color 1f')
print('这个程序由BlueGS(hxr)编写，禁止恶意使用')
input('按下回车(Enter)开始解控')
banmain='''Windows Registry Editor Version 5.00

[HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\MMStudent50.exe]
"debugger"="123213213213.exe"

'''
bandrf='''Windows Registry Editor Version 5.00

[HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\LgServices.exe]
"debugger"="21321321321.exe"

'''
bandrfold='''Windows Registry Editor Version 5.00

[HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\LgServices_old.exe]
"debugger"="21313213213.exe"

'''
f=open('main.reg','w')
f.write(banmain)
f.close()
f=open('drf.reg','w')
f.write(bandrf)
f.close()
f=open('drf1.reg','w')
f.write(bandrfold)
f.close()
os.system('regedit /s main.reg')
os.system('regedit /s drf.reg')
os.system('regedit /s drf1.reg')
os.system('taskkill /f /im MMStudent50.exe')
os.system('taskkill /f /im LgServices.exe')
os.system('taskkill /f /im LgServices_old.exe')
os.system('del main.reg')
os.system('del drf.reg')
os.system('del drf1.reg')
print('OK!!!解控完成')
os.system('pause')
