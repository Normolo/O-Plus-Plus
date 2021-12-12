const[text.cli] = 'O-CLI: '
const[loop.boolean] = true

new[loop(while)] {
    loop    
}
loop(loop) {

    if new[var(true)] do
    var.par = __ALL_CASE__::true

    new[var(cli.input)] = out[text.cli]
    if var(cli.input) = 'help'  do {
        output[long{
            "The following is a list of possible commands: "
            "---------------------------------------------------------"
            "1.     help    //      Outlines list of possible commands"
            "2.     exit    //      Exits OPP CLI"
            "3.     iopp    //      Installs OPP Interpiler"
        }]
    }
    if var(cli.input) = 'exit' do{
        new[var(cli.exit.confirm)] = output['Confirm? (y/n) : ']
        if var(cali.exit.confirm) = 'y' do{
            break
        }
        else do{
            goto.ln.13
        }
    }
    if var(cli.input) = 'iopp' do{
        output["Fetching git"]
        import[git.package]
        output["Success!"]
        output["Fetching intercompiler from git repo"]
        import[git.repo("https://github.com/Normolo/O-Plus-Plus").file("/O-Plus-Plus-Main.exe")] throw file["C:\Program Files\OPP"]
        output["Success!"]
        output["Fetching directory from git repo using i_m.json as manifest"]
        import[git.repo("https://github.com/Normolo/O-Plus-Plus").directory("/installer")] parameters{
            library.manifest = git.repo(ln.39).directory(ln.39).file("installer_manifest.json")
            throw directory["C:\Program Files\OPP"]
        }
        output["Success!"]
        new[var(user.dowloadTemplate)] = output["Installation completed. Would you like to download templates? (y/n) "]
        if var(user.downloadTemplate) = 'y' do{
            import[git.repo("https://github.com/Normolo/O-Plus-Plus/")].directory("/templates") parameters{
                throw directory[do{
                    import[m.w.file_saving_window]
                    new[var(user.downloadTemplate)] = m.w.file_saving_window.loc
                    output["Templates have been downloaded"]
                }]
            }
        }
        else do{
            goto.ln.13
        }

    }



}
