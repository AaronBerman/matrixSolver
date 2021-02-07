
@echo off
SETLOCAL

CALL "%~dp0lib\matrixSolverCpp.exe" %*
EXIT /B %ERRORLEVEL%
ENDLOCAL
