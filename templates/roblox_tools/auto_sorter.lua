opp.start.script

if toolbox.item.new(added):
    if toolbox.item.new(par{has.script.lua=true}):
        script.lua = script
        search[script(SSTGSearch) for {'game:GetService("ServerStorage")'}]
        search[script(SSSearch) for {'game:GetService("ServerScriptService")'}]
        if SSSearch = true:
            clone[script.lua][game/ServerScriptService].par({w/name=cloned_script.lua})
            del[script.lua]
        if SSTGSearch = true:
            clone[script.lua][game/ServerStorage].par({w/name=clones_script.lua})
            del[script.lua]
        if SSTGSearch = true:
            if SSSearch = true:
                output['Script must be sorted manually due to multiple error_code']

opp.conclude.script(0)
