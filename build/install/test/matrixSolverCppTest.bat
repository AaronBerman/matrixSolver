
@echo off
SETLOCAL

CALL "%~dp0lib\matrixSolverCppTest.exe" %*
EXIT /B %ERRORLEVEL%
ENDLOCAL
