# Como executar:

## Para compilar:

`gcc main.c .\print.c .\controls.c .\search.c filesystem.c utils.c operations.c sort.c -o output.exe`

## Para executar:

`./output.exe`

## OBS 1:

No Powershell, executar o seguinte codigo para resolver problema dos acentos:

`$OutputEncoding = [console]::InputEncoding = [console]::OutputEncoding =
New-Object System.Text.UTF8Encoding`

No CMD, executar o seguinte codigo para resolver problema dos acentos:

`chcp 65001`
