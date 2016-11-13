---
title: "Exporting and Importing Using AFX_EXT_CLASS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "afx_ext_class"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AFX_EXT_CLASS macro"
  - "exporting classes [C++]"
  - "importing DLLs [C++]"
  - "extension DLLs [C++], exporting classes"
  - "executable files [C++], importing classes"
  - "exporting DLLs [C++], AFX_EXT_CLASS macro"
ms.assetid: 6b72cb2b-e92e-4ecd-bcab-c335e1d1cfde
caps.latest.revision: 7
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
# Exporting and Importing Using AFX_EXT_CLASS
[Extension DLLs](../build/extension-dlls-overview.md) use the macro **AFX_EXT_CLASS** to export classes; the executables that link to the extension DLL use the macro to import classes. With the **AFX_EXT_CLASS** macro, the same header files that are used to build the extension DLL can be used with the executables that link to the DLL.  
  
 In the header file for your DLL, add the **AFX_EXT_CLASS** keyword to the declaration of your class as follows:  
  
```  
class AFX_EXT_CLASS CMyClass : public CDocument  
{  
// <body of class>  
};  
```  
  
 This macro is defined by MFC as **__declspec(dllexport)** when the preprocessor symbols **_AFXDLL** and `_AFXEXT` are defined. But the macro is defined as **__declspec(dllimport)** when **_AFXDLL** is defined and `_AFXEXT` is not defined. When defined, the preprocessor symbol **_AFXDLL** indicates that the shared version of MFC is being used by the target executable (either a DLL or an application). When both **_AFXDLL** and `_AFXEXT` are defined, this indicates that the target executable is an extension DLL.  
  
 Because **AFX_EXT_CLASS** is defined as **__declspec(dllexport)** when exporting from an extension DLL, you can export entire classes without placing the decorated names for all of that class's symbols in the .def file. This method is used by the MFC sample [DLLHUSK](http://msdn.microsoft.com/en-us/dfcaa6ff-b8e2-4efd-8100-ee3650071f90).  
  
 Although you can avoid creating a .def file and all of the decorated names for the class with this method, creating a .def file is more efficient because the names can be exported by ordinal. To use the .def file method of exporting, place the following code at the beginning and end of your header file:  
  
```  
#undef AFX_DATA  
#define AFX_DATA AFX_EXT_DATA  
// <body of your header file>  
#undef AFX_DATA  
#define AFX_DATA  
```  
  
> [!CAUTION]
>  Be careful when exporting inline functions, because they can create the possibility of version conflicts. An inline function gets expanded into the application code; therefore, if you later rewrite the function, it does not get updated unless the application itself is recompiled. Normally, DLL functions can be updated without rebuilding the applications that use them.  
  
## Exporting Individual Members in a Class  
 Sometimes you might want to export individual members of your class. For example, if you are exporting a `CDialog`-derived class, you might only need to export the constructor and the `DoModal` call. You can use **AFX_EXT_CLASS** on the individual members you need to export.  
  
 For example:  
  
```  
class CExampleDialog : public CDialog  
{  
public:  
   AFX_EXT_CLASS CExampleDialog();  
   AFX_EXT_CLASS int DoModal();  
   ...  
   // rest of class definition  
   ...  
};  
```  
  
 Because you are no longer exporting all members of the class, you may run into an additional problem because of the way that MFC macros work. Several of MFC's helper macros actually declare or define data members. Therefore, these data members must also be exported from your DLL.  
  
 For example, the `DECLARE_DYNAMIC` macro is defined as follows when building an extension DLL:  
  
```  
#define DECLARE_DYNAMIC(class_name) \  
protected: \  
   static CRuntimeClass* PASCAL _GetBaseClass(); \  
public: \  
   static AFX_DATA CRuntimeClass class##class_name; \  
   virtual CRuntimeClass* GetRuntimeClass() const; \  
```  
  
 The line that begins with static `AFX_DATA` is declaring a static object inside of your class. To export this class correctly and access the run-time information from a client executable, you must export this static object. Because the static object is declared with the modifier `AFX_DATA`, you only need to define `AFX_DATA` to be **__declspec(dllexport)** when building your DLL and define it as **__declspec(dllimport)** when building your client executable. Because **AFX_EXT_CLASS** is already defined in this way, you just need to redefine `AFX_DATA` to be the same as **AFX_EXT_CLASS** around your class definition.  
  
 For example:  
  
```  
#undef  AFX_DATA  
#define AFX_DATA AFX_EXT_CLASS  
  
class CExampleView : public CView  
{  
   DECLARE_DYNAMIC()  
   // ... class definition ...  
};  
  
#undef  AFX_DATA  
#define AFX_DATA  
```  
  
 Because MFC always uses the `AFX_DATA` symbol on data items it defines within its macros, this technique works for all such scenarios. For example, it works for `DECLARE_MESSAGE_MAP`.  
  
> [!NOTE]
>  If you are exporting the entire class rather than selected members of the class, static data members are automatically exported.  
  
### What do you want to do?  
  
-   [Export from a DLL using .def files](../build/exporting-from-a-dll-using-def-files.md)  
  
-   [Export from a DLL using __declspec(dllexport)](../build/exporting-from-a-dll-using-declspec-dllexport.md)  
  
-   [Export C++ functions for use in C-language executables](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)  
  
-   [Export C functions for use in C or C++-language executables](../build/exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)  
  
-   [Determine which exporting method to use](../build/determining-which-exporting-method-to-use.md)  
  
-   [Import into an application using __declspec(dllimport)](../build/importing-into-an-application-using-declspec-dllimport.md)  
  
-   [Initialize a DLL](../build/initializing-a-dll.md)  
  
### What do you want to know more about?  
  
-   [Decorated names](../build/reference/decorated-names.md)  
  
-   [Importing and exporting inline functions](../build/importing-and-exporting-inline-functions.md)  
  
-   [Mutual imports](../build/mutual-imports.md)  
  
## See Also  
 [Exporting from a DLL](../build/exporting-from-a-dll.md)