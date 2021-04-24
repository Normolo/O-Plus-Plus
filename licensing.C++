<#startO(++s)>

//Importers
import('time')
import('random')
import('web.browser')

//Dictionary
new[bin(bin1)]
new[bin(bin2)]
new[variable(text)]('line)'{'--------------'} storedIn[bin1]
new[variable()](password) storedIn[bin1]
new[variable(modText{'Version'})]{'v1.0'} storedIn[bin1]
new[variable<1+>(text)]{
   charsAll = 'abcdefghijklmopqrstuvewd1234567890!@#$%^&*()-=QWERTYUIOPASDFGHJKLZXCVBNM,./;l]['
   charsNum = '123456789'  
   charsLet = 'qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM'
   charsLoB = 'QWERTYUIOPASDFGHJKLZXCVBNM'
   charsLoS = 'qwertyuiopasdfghjklzxcvbnm'
   charsSpe = '!@#$%^&*(_+)><":~|}{":?><'
} storedIn[bin2]
new[variable()]{} storedIn[bin1]

show('OJAVE CONSOLE-BASED-SOFTWARE LIMITED') in [output(console)] for 2.seconds
show(' < Loading Application > ') in [output(console)] for 2.seconds
show('') for 1.seconds
for 1.seconds <#stop>
show('Version: ')(variable('Version')) from bin(bin1)

new[state('startCheck')]{true}
while variable('startCheck') iet{true}
   show('Select character range from the following options: (all / numbers / special / letters / onlySmallLetters / onlyCapsLetters): ')(input() storedIn[bin1] as('Selection'))
   
script{break}
        chars = charsLet
    if typeChar == 'all':
        chars = charsAll
    if typeChar == 'numbers':
        chars = charsNum
    if typeChar == 'special':
        chars = charsSpe
    if typeChar == 'onlySmallLetters':
        chars = charsLoS
    if typeChar == 'onlyCapsLetters':
        chars = charsLoB
    confirmCheck = 10

    while confirmCheck == 10:
        length = input('Length to add? (Starts at 0) :')
        length = int(length)
        print(spc)
        for c in range(length):
            password += random.choice(chars)
        print(password)
        time.sleep(0.5)
        print(spc)
        CONA = input('Close? (y/n): ')
        if CONA == 'y':
            print('Goodbye')
            time.sleep(1)
            raise SystemExit(0)
        if CONA == 'n':
            confirmCheck + 0
        print(spc))


