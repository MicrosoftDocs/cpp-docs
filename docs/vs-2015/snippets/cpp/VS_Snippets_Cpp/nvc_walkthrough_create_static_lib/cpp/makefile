MyExecRefsLib.exe : MyExecRefsLib.cpp MathFuncsLib.lib
    cl.exe /EHsc MyExecRefsLib.cpp /link MathFuncsLib.lib 
	
MathFuncsLib.lib : MathFuncsLib.obj
    lib.exe MathFuncsLib.obj
	
MathFuncsLib.obj : MathFuncsLib.cpp
    cl.exe /c /EHsc MathFuncsLib.cpp