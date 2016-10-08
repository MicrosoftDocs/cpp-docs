---
title: "Linking Explicitly"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 1e13d960-a195-4e6d-9864-7d8f3a701f4b
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Linking Explicitly
With explicit linking, applications must make a function call to explicitly load the DLL at run time. To explicitly link to a DLL, an application must:  
  
-   Call **LoadLibrary** (or a similar function) to load the DLL and obtain a module handle.  
  
-   Call **GetProcAddress** to obtain a function pointer to each exported function that the application wants to call. Because applications are calling the DLL's functions through a pointer, the compiler does not generate external references, so there is no need to link with an import library.  
  
-   Call **FreeLibrary** when done with the DLL.  
  
 For example:  
  
```  
typedef UINT (CALLBACK* LPFNDLLFUNC1)(DWORD,UINT);  
...  
  
HINSTANCE hDLL;               // Handle to DLL  
LPFNDLLFUNC1 lpfnDllFunc1;    // Function pointer  
DWORD dwParam1;  
UINT  uParam2, uReturnVal;  
  
hDLL = LoadLibrary("MyDLL");  
if (hDLL != NULL)  
{  
   lpfnDllFunc1 = (LPFNDLLFUNC1)GetProcAddress(hDLL,  
                                           "DLLFunc1");  
   if (!lpfnDllFunc1)  
   {  
      // handle the error  
      FreeLibrary(hDLL);         
      return SOME_ERROR_CODE;  
   }  
   else  
   {  
      // call the function  
      uReturnVal = lpfnDllFunc1(dwParam1, uParam2);  
   }  
}  
```  
  
## What do you want to do?  
  
-   [Link implicitly](../VS_visualcpp/Linking-Implicitly.md)  
  
-   [Determine which linking method to use](../VS_visualcpp/Determining-Which-Linking-Method-to-Use.md)  
  
## What do you want to know more about?  
  
-   [LoadLibrary and AfxLoadLibrary](../VS_visualcpp/LoadLibrary-and-AfxLoadLibrary.md)  
  
-   [GetProcAddress](../VS_visualcpp/GetProcAddress.md)  
  
-   [FreeLibrary and AfxFreeLibrary](../VS_visualcpp/FreeLibrary-and-AfxFreeLibrary.md)  
  
-   [The search path used by Windows to locate a DLL](../VS_visualcpp/Search-Path-Used-by-Windows-to-Locate-a-DLL.md)  
  
## See Also  
 [Linking an Executable to a DLL](../VS_visualcpp/Linking-an-Executable-to-a-DLL.md)