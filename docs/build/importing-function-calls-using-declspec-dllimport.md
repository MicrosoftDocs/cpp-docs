---
title: "Importing Function Calls Using __declspec(dllimport) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__declspec"
  - "dllimport"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "importing function calls [C++]"
  - "dllimport attribute [C++], function call imports"
  - "__declspec(dllimport) keyword [C++]"
  - "function calls [C++], importing"
ms.assetid: 6b53c616-0c6d-419a-8e2a-d2fff20510b3
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Importing Function Calls Using __declspec(dllimport)
The following code example shows how to use **_declspec(dllimport)** to import function calls from a DLL into an application. Assume that `func1` is a function that resides in a DLL separate from the .exe file that contains the **main** function.  
  
 Without **__declspec(dllimport)**, given this code:  
  
```  
int main(void)   
{  
   func1();  
}  
```  
  
 the compiler generates code that looks like this:  
  
```  
call func1  
```  
  
 and the linker translates the call into something like this:  
  
```  
call 0x4000000         ; The address of 'func1'.  
```  
  
 If `func1` exists in another DLL, the linker cannot resolve this directly because it has no way of knowing what the address of `func1` is. In 16-bit environments, the linker adds this code address to a list in the .exe file that the loader would patch at run time with the correct address. In 32-bit and 64-bit environments, the linker generates a thunk of which it does know the address. In a 32-bit environment the thunk looks like:  
  
```  
0x40000000:    jmp DWORD PTR __imp_func1  
```  
  
 Here `imp_func1` is the address for the `func1` slot in the import address table of the .exe file. All the addresses are thus known to the linker. The loader only has to update the .exe file's import address table at load time for everything to work correctly.  
  
 Therefore, using **__declspec(dllimport)** is better because the linker does not generate a thunk if it is not required. Thunks make the code larger (on RISC systems, it can be several instructions) and can degrade your cache performance. If you tell the compiler the function is in a DLL, it can generate an indirect call for you.  
  
 So now this code:  
  
```  
__declspec(dllimport) void func1(void);  
int main(void)   
{  
   func1();  
}  
```  
  
 generates this instruction:  
  
```  
call DWORD PTR __imp_func1  
```  
  
 There is no thunk and no `jmp` instruction, so the code is smaller and faster.  
  
 On the other hand, for function calls inside a DLL, you do not want to have to use an indirect call. You already know a function's address. Because time and space are required to load and store the address of the function before an indirect call, a direct call is always faster and smaller. You only want to use **__declspec(dllimport)** when calling DLL functions from outside the DLL itself. Do not use **__declspec(dllimport)** on functions inside a DLL when building that DLL.  
  
## See Also  
 [Importing into an Application](../build/importing-into-an-application.md)