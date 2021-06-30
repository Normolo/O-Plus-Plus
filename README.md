# Installation
1. Download and execute `installer.py`
2. Wait a bit while the program boots
3. Enter `install`
4. You now have O++!
If you experience any errors within installation, check [It's status page](https://ojaveplusplus.statuspage.io).

```diff
- Before installation
Welcome to the O++ Installer
You will now be entering a Command Line Interface in order to install O++
OPP//: : install
```

```diff
+ After installation
Welcome to the O++ Installer
You will now be entering a Command Line Interface in order to install O++
OPP//: : install
[                    ] 0%
[=====               ] 25%
[==========          ] 50%
[===============     ] 75%
[====================] 100%
Succesfully installed!
Enter exit on CLI to exit
OPP//: : exit
```
# 0. Installer CLI Commands
```diff
+ help
OPP//: : help
Command list
help - command list you are viewing right now
install - installs o++
exit - exits o++ installer
```
```diff
+ install
OPP//: : install
[                    ] 0%
[=====               ] 25%
[==========          ] 50%
[===============     ] 75%
[====================] 100%
Succesfully installed!
```
```diff
+ exit
OPP//: : exit
Exiting Installer
```
# 1. Hello World
We use the output function to call a `Hello World` string to be shown in the output
```cpp
output['Hello World']
```
You can define the string to be short:
```cpp
output[{short('Hello World')}]
```
or long:
```cpp
output[{long(
    'Hello
    my dearest
    world'
)}]
```
If you want, you can have the `{short}` declaration with the parameters. You **must** have two ``{{-}}`` brackets when doing this. This will also get confusing when used ``{long}`` syntax. This is not reccommended:
```cpp
output['Hello Paramter']
    par{{short}}


output['
hello
longer
parameter']
    par{{long}}
```
You can create a string at the beginning and then have it's content shown in the output:
```cpp
store[{short('Hello World')}]
    par{name='stored_value_helloWorld'}
// This stores the Hello World String as 'stored_value_helloWorld'
output[store('store_value_helloWorld')]
// This outputs the string found in 'stored_value_helloWorld'
```
# 2. Input
_Asking the user what their name is and then prints their name_

You can do this by creating a input prompt that is put in the output, using the multi-function: `input[output[]]`. You can then store the input as the stringName `user_name`.
```cpp
input[output[{short('What is your name? : ')}]]
    par{store[short(user_name)]}
```
If you want to then print the name, you can do so by calling `username` to be shown in the output, as seen below:
```cpp
input[output[{short('What is your name? : ')}]]
    par{store[short(user_name)]}
output[store(user_name)]
 ```
 # 3. Loops
 Say you wanted to create a loop that outputs a number every second, like:
```md
01 - 10
02 - 20
03 - 30
04 - 40
05 ...
``` 
This can be done by a loop. You can create a loop by making a `create[loop]` function, as ween below. This creates the loop that fires every second using the ```__TIME__```
```cpp
create[loop[increment{__TIME__('s')+1}]]
    par{name='loop'}
```
After you this, you'd need to create the number `01` in `01 - 10`, this can be done via this script:
This also dictates that the format has to be either `01` or `10`. 
```cpp
create[num[1]]
    par{name='num1' , digit[format('0' , num[dig2] ;; num[dig1] , num[dig2])]}
```
The second number is created more easily by this script:
```cpp
create[num[10]]
    par{name='num2'}
```
We then tell the script to execute:
```cpp
loop('loop').run: //calls on loop 'loop' to run
    num[
        par{name='num1'} //+1s the first number
    ] + num[1]

    num[
        par{name='num2'}
    ] + num[10] //+10s the second number

    output[num['num1'] , '-' , num['num2']] //prints the output (02 - 20 and so on)
```
The script would then be:
```cpp
create[loop[increment{__TIME__('s')+1}]]
    par{name='loop'}
create[num[10]]
    par{name='num2'}
loop('loop').run: //calls on loop 'loop' to run
    num[
        par{name='num1'} //+1s the first number
    ] + num[1]

    num[
        par{name='num2'}
    ] + num[10] //+10s the second number

    output[num['num1'] , '-' , num['num2']] //prints the output (02 - 20 and so on)
   
