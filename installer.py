from random import randbytes #import random args
import time #import time function
cli = True #cli enviroment

print('░█████╗░░░░░░░░░░░░░░░  ██╗███╗░░██╗░██████╗████████╗░█████╗░██╗░░░░░██╗░░░░░███████╗██████╗░')
print('██╔══██╗░░██╗░░░░██╗░░  ██║████╗░██║██╔════╝╚══██╔══╝██╔══██╗██║░░░░░██║░░░░░██╔════╝██╔══██╗')
print('██║░░██║██████╗██████╗  ██║██╔██╗██║╚█████╗░░░░██║░░░███████║██║░░░░░██║░░░░░█████╗░░██████╔╝')
print('██║░░██║╚═██╔═╝╚═██╔═╝  ██║██║╚████║░╚═══██╗░░░██║░░░██╔══██║██║░░░░░██║░░░░░██╔══╝░░██╔══██╗')
print('╚█████╔╝░░╚═╝░░░░╚═╝░░  ██║██║░╚███║██████╔╝░░░██║░░░██║░░██║███████╗███████╗███████╗██║░░██║')
print('░╚════╝░░░░░░░░░░░░░░░  ╚═╝╚═╝░░╚══╝╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝╚══════╝╚══════╝╚══════╝╚═╝░░╚═╝')
time.sleep(2)
print('Welcome to the O++ Installer')
print('You will now be entering a Command Line Interface in order to install O++') #installer prompt
while cli == True:
    clir = input('OPP//: : ')
    if clir == 'exit':
        print('Exiting')
        raise(SystemExit)
    if clir == 'help':
        print('Command List')
        print('help - this command')
        print('exit - exits opp installer')
        print('install - installs opp')
    if clir == 'install':
        print("[                    ] 0% ")
        time.sleep(5)
        print("[=====               ] 25%")
        time.sleep(5)
        print("[==========          ] 50%")
        time.sleep(5)
        print("[===============     ] 75%")
        time.sleep(5)
        print("[====================] 100%")
        time.sleep(3)
        print('Succesfully installed!')
        print('Enter exit on CLI to exit')
    
