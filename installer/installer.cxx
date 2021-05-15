output[{long('

░█████╗░░░░░░░░░░░░░░░  ██╗███╗░░██╗░██████╗████████╗░█████╗░██╗░░░░░██╗░░░░░███████╗██████╗░
██╔══██╗░░██╗░░░░██╗░░  ██║████╗░██║██╔════╝╚══██╔══╝██╔══██╗██║░░░░░██║░░░░░██╔════╝██╔══██╗
██║░░██║██████╗██████╗  ██║██╔██╗██║╚█████╗░░░░██║░░░███████║██║░░░░░██║░░░░░█████╗░░██████╔╝
██║░░██║╚═██╔═╝╚═██╔═╝  ██║██║╚████║░╚═══██╗░░░██║░░░██╔══██║██║░░░░░██║░░░░░██╔══╝░░██╔══██╗
╚█████╔╝░░╚═╝░░░░╚═╝░░  ██║██║░╚███║██████╔╝░░░██║░░░██║░░██║███████╗███████╗███████╗██║░░██║
░╚════╝░░░░░░░░░░░░░░░  ╚═╝╚═╝░░╚══╝╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝╚══════╝╚══════╝╚══════╝╚═╝░░╚═╝
')}] //outputs logo
input[{short('OPP//: :')}] //creates cli input mechanic
  par{store('cli')} //stores cli as 'cli'
output['Welcome to the O++ Installer'] //welcome 1
output['You will now be enterng a Command Line Interface in order to install O++'] //welcome 2
par{store([output]{asm}('userInput'))} //stores user input
while true = true: //starts python loop
  output[input('cli') //outputs cli input
    par{store([output]{asm}('userInput'))} //stores cli input
  if par('userInput') = value('exit'): 
    opp.exitScript.code(0) //exits if user writes 'exit
  if par('userInput') = value('install'):
    output['Starting Install Process']
    wait[1]
    new[directory(C:\ProgramData)] 
      directory(name['O++'])//creates directory with name 'O++'
    download[{__FILE__.github('#https://github.com/Normolo/O-Plus-Plus/blob/main/installer/installer_manifest.json')}] //downloads installer manifest
      save[{__FILE__}(C:\ProgramData\O++)]
      if download(false):
        output['Download Failed'] //checks if download fails
    download[{__FILE__.github('https://github.com/Normolo/O-Plus-Plus/blob/main/LTTemplate.cpp')}] //downloads template
      save[{__FILE__(C:\ProgramData\O++)}] 
      if download(false):
        output['Download Failed'] //checks if download fails
    output['Download Complete!'] //tells user that O++ is downloaded
  if par('userInput') = value('help')
    output[{long('
    help      -   Opens this message
    install   -   Installs O++
    exit      -   Exits O++ instaleler
    ')}] //shows help menu
