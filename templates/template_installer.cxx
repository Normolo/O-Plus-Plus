output['
░█████╗░░░░░░░░░░░░░░░  ████████╗███████╗███╗░░░███╗██████╗░██╗░░░░░░█████╗░████████╗███████╗
██╔══██╗░░██╗░░░░██╗░░  ╚══██╔══╝██╔════╝████╗░████║██╔══██╗██║░░░░░██╔══██╗╚══██╔══╝██╔════╝
██║░░██║██████╗██████╗  ░░░██║░░░█████╗░░██╔████╔██║██████╔╝██║░░░░░███████║░░░██║░░░█████╗░░
██║░░██║╚═██╔═╝╚═██╔═╝  ░░░██║░░░██╔══╝░░██║╚██╔╝██║██╔═══╝░██║░░░░░██╔══██║░░░██║░░░██╔══╝░░
╚█████╔╝░░╚═╝░░░░╚═╝░░  ░░░██║░░░███████╗██║░╚═╝░██║██║░░░░░███████╗██║░░██║░░░██║░░░███████╗
░╚════╝░░░░░░░░░░░░░░░  ░░░╚═╝░░░╚══════╝╚═╝░░░░░╚═╝╚═╝░░░░░╚══════╝╚═╝░░╚═╝░░░╚═╝░░░╚══════╝

██╗███╗░░██╗░██████╗████████╗░█████╗░██╗░░░░░██╗░░░░░███████╗██████╗░
██║████╗░██║██╔════╝╚══██╔══╝██╔══██╗██║░░░░░██║░░░░░██╔════╝██╔══██╗
██║██╔██╗██║╚█████╗░░░░██║░░░███████║██║░░░░░██║░░░░░█████╗░░██████╔╝
██║██║╚████║░╚═══██╗░░░██║░░░██╔══██║██║░░░░░██║░░░░░██╔══╝░░██╔══██╗
██║██║░╚███║██████╔╝░░░██║░░░██║░░██║███████╗███████╗███████╗██║░░██║
╚═╝╚═╝░░╚══╝╚═════╝░░░░╚═╝░░░╚═╝░░╚═╝╚══════╝╚══════╝╚══════╝╚═╝░░╚═╝']{
    text_t = long
}

new[directory('OPP_Templates')]{loc=parent.x}

input['OPTI : ']{class = cli_input}

if cli_input = 'exit' do
    opp.script[int..end]

if cli_input = 'install' - 'help' doa
    output['Try: install help to see the complete list of templates you can install']

if cli_input = 'install help' do
    output['--HELP--']
    output['install calculator']
    output['install DDoS Engine']

    output['install Enigma']
if cli_input = 'install calculator' do
    output['installing']
    function[download[txt.opp.raw('https://raw.githubusercontent.com/Normolo/O-Plus-Plus/main/templates/calculator.c%2B%2B')]]{
        loc=parent.OPP_Templates
    }
    output['installed']

if cli_input = 'install DDoS Engine' do
    output['installing']
    function[download[txt.opp.raw('https://raw.githubusercontent.com/Normolo/O-Plus-Plus/main/templates/ddos.cpp')]]{
        loc=parent.OPP_Templates
    }
    output['installed']

if cli_input = 'install Engima' do
    output['installing']
    function[download[txt.opp.raw('https://raw.githubusercontent.com/Normolo/O-Plus-Plus/main/templates/ddos.cpp')]]{
        loc=parent.OPP_Templates
    }
    output['installed']
