set PROGRAM="%~1"
%PROGRAM% 1 2 3 > "Not triangle"
if %ERRORLEVEL% EQU 1 goto error 
%PROGRAM% 2 2 2 > "Equilateral"
if %ERRORLEVEL% EQU 1 goto error
%PROGRAM% 1 2 2 > "Isosceles"
if %ERRORLEVEL% EQU 1 goto error
%PROGRAM% 4 5 6 > "Normal"
if %ERRORLEVEL% EQU 1 goto error
%PROGRAM% a b c > "Enter not"
if %ERRORLEVEL% EQU 1 goto error
%PROGRAM%  > "Specify the lengths of the sides as parameters. The input format: triangle.exe a b c"
if %ERRORLEVEL% NEQ 1 goto error
echo Successful program testing
exit 0