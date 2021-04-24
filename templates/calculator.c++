opp.start.script

new bin('bin1')
new variable('userInput') locIn[bin('bin1')]

show[output[query(user)]][inputBox('Enter expression here')] 
    textModifer(lighten(5))
    setThis[variable('userInput')] locIn[bin('bin1')]
//Sepereates charachters in the input using an Algorythm
seperate[text][variable('userInput') locIn[bin('bin1')]]
    using #algo gen;following(example[_]) 
        with;example('X+ 18') as;false
        with;example('X + 18') as;true
        with;example('2 + 11') as;true
        with;example('2 + 1 1') as;false
//Names the charachters in the input
name[seperatedText(variable('userInput')) locIn[bin('bin1')]]
    for char;1 name[{'char1'}]
    for char;2 name[{'char2'}]
    for char;3 name[{'char3'}]

//Calculator Operations Start here
check[_] char;{'char1'}
    if char = num[_]
        char = num[_]
    if char = op[_]
        char = op[_]

