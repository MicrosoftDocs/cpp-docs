---
title: "TN033: DLL Version of MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.dll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC DLLs [C++], writing extension DLLS"
  - "AFXDLL library"
  - "DLLs [C++], MFC"
  - "DLL version of MFC [C++]"
  - "TN033"
ms.assetid: b6f1080b-b66b-4b1e-8fb1-926c5816392c
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
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
# TN033: DLL Version of MFC
This note describes how you can use the MFCxx.DLL and MFCxxD.DLL (where x is the MFC version number) shared dynamic link libraries with MFC applications and extension DLLs. For more information about regular DLLs, see [Using MFC as Part of a DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md).  
  
 This technical note covers three aspects of DLLs. The last two are for the more advanced users:  
  
- [How you build an MFC Extension DLL](#_mfcnotes_how_to_write_an_mfc_extension_dll)  
  
- [How you build an MFC application that uses the DLL version of MFC](#_mfcnotes_writing_an_application_that_uses_the_dll_version)  
  
- [How the MFC shared dynamic-link libraries are implemented](#_mfcnotes_how_the_mfc30.dll_is_implemented)  
  
 If you are interested in building a DLL using MFC that can be used with non-MFC applications (this is called a regular DLL), refer to [Technical Note 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md).  
  
## Overview of MFCxx.DLL Support: Terminology and Files  
 **Regular DLL**: You use a regular DLL to build a stand-alone DLL using some of the MFC classes. Interfaces across the App/DLL boundary are "C" interfaces, and the client application does not have to be an MFC application.  
  
 This is the version of DLL support supported in MFC 1.0. It is described in [Technical Note 11](../mfc/tn011-using-mfc-as-part-of-a-dll.md) and the MFC Advanced Concepts sample [DLLScreenCap](../visual-cpp-samples.md).  
  
> [!NOTE]
>  As of Visual C++ version 4.0, the term **USRDLL** is obsolete and has been replaced by a regular DLL that statically links to MFC. You may also build a regular DLL that dynamically links to MFC.  
  
 MFC 3.0 (and above) supports regular DLLs with all the new functionality including the OLE and Database classes.  
  
 **AFXDLL**: This is also referred to as the shared version of the MFC libraries. This is the new DLL support added in MFC 2.0. The MFC library itself is in a number of DLLs (described below) and a client application or DLL dynamically links the DLLs that it requires. Interfaces across the application/DLL boundary are C++/MFC class interfaces. The client application MUST be an MFC application. This supports all MFC 3.0 functionality (exception: UNICODE is not supported for the database classes).  
  
> [!NOTE]
>  As of Visual C++ version 4.0, this type of DLL is referred to as an "Extension DLL."  
  
 This note will use MFCxx.DLL to refer to the entire MFC DLL set, which includes:  
  
-   Debug: MFCxxD.DLL (combined) and MFCSxxD.LIB (static).  
  
-   Release: MFCxx.DLL (combined) and MFCSxx.LIB (static).  
  
-   Unicode Debug: MFCxxUD.DLL (combined) and MFCSxxD.LIB (static).  
  
-   Unicode Release: MFCxxU.DLL (combined) and MFCSxxU.LIB (static).  
  
> [!NOTE]
>  The MFCSxx[U][D].LIB libraries are used in conjunction with the MFC shared DLLs. These libraries contain code that must be statically linked to the application or DLL.  
  
 An application links to the corresponding import libraries:  
  
-   Debug: MFCxxD.LIB  
  
-   Release: MFCxx.LIB  
  
-   Unicode Debug: MFCxxUD.LIB  
  
-   Unicode Release: MFCxxU.LIB  
  
 An "MFC Extension DLL" is a DLL built upon MFCxx.DLL (and/or the other MFC shared DLLs). Here the MFC component architecture kicks in. If you derive a useful class from an MFC class, or build another MFC-like toolkit, you can place it in a DLL. That DLL uses MFCxx.DLL, as does the ultimate client application. This permits reusable leaf classes, reusable base classes, and reusable view/document classes.  
  
## Pros and Cons  
 Why should you use the shared version of MFC  
  
-   Using the shared library can result in smaller applications (a minimal application that uses most of the MFC library is less than 10K).  
  
-   The shared version of MFC supports MFC Extension DLLs and regular DLLs.  
  
-   Building an application that uses the shared MFC libraries is faster than building a statically linked MFC application because it is not necessary to link MFC itself. This is especially true in **DEBUG** builds where the linker must compact the debug information — by linking with a DLL that already contains the debug information, there is less debug information to compact within your application.  
  
 Why should you not use the shared version of MFC:  
  
-   Shipping an application that uses the shared library requires that you ship the MFCxx.DLL (and others) library with your program. MFCxx.DLL is freely redistributable like many DLLs, but you still must install the DLL in your SETUP program. In addition, you must ship the MSVCRTxx.DLL, which contains the C-runtime library which is used both by your program and the MFC DLLs themselves.  
  
##  <a name="_mfcnotes_how_to_write_an_mfc_extension_dll"></a> How to Write an MFC Extension DLL  
 An MFC Extension DLL is a DLL containing classes and functions written to embellish the functionality of the MFC classes. An MFC Extension DLL uses the shared MFC DLLs in the same way an application uses it, with a few additional considerations:  
  
-   The build process is similar to building an application that uses the shared MFC libraries with a few additional compiler and linker options.  
  
-   An MFC Extension DLL does not have a `CWinApp`-derived class.  
  
-   An MFC Extension DLL must provide a special `DllMain`. AppWizard supplies a `DllMain` function that you can modify.  
  
-   An MFC Extension DLL will usually provide an initialization routine to create a **CDynLinkLibrary** if the extension DLL wishes to export `CRuntimeClass`es or resources to the application. A derived class of **CDynLinkLibrary** may be used if per-application data must be maintained by the extension DLL.  
  
 These considerations are described in more detail below. You should also refer to the MFC Advanced Concepts sample [DLLHUSK](../visual-cpp-samples.md) since it illustrates:  
  
-   Building an application using the shared libraries. (DLLHUSK.EXE is an MFC application that dynamically links to the MFC libraries as well as other DLLs.)  
  
-   Building an MFC Extension DLL. (Note the special flags such as `_AFXEXT` that are used in building an extension DLL)  
  
-   Two examples of MFC Extension DLLs. One shows the basic structure of an MFC Extension DLL with limited exports (TESTDLL1) and the other shows exporting an entire class interface (TESTDLL2).  
  
 Both the client application and any extension DLLs must use the same version of MFCxx.DLL. You should follow the convention of MFC DLL and provide both a debug and retail (/release) version of your extension DLL. This permits client programs to build both debug and retail versions of their applications and link them with the appropriate debug or retail version of all DLLs.  
  
> [!NOTE]
>  Because C++ name mangling and export issues, the export list from an extension DLL may be different between the debug and retail versions of the same DLL and DLLs for different platforms. The retail MFCxx.DLL has about 2000 exported entry points; the debug MFCxxD.DLL has about 3000 exported entry points.  
  
### Quick Note on Memory Management  
 The section titled "Memory Management," near the end of this technical note, describes the implementation of the MFCxx.DLL with the shared version of MFC. The information you need to know to implement just an extension DLL is described here.  
  
 MFCxx.DLL and all extension DLLs loaded into a client application's address space will use the same memory allocator, resource loading and other MFC "global" states as if they were in the same application. This is significant because the non-MFC DLL libraries and regular DLLs that statically link to MFC do the exact opposite and have each DLL allocating out of its own memory pool.  
  
 If an extension DLL allocates memory, then that memory can freely intermix with any other application-allocated object. Also, if an application that uses the shared MFC libraries crashes, the protection of the operating system will maintain the integrity of any other MFC application sharing the DLL.  
  
 Similarly other "global" MFC states, like the current executable file to load resources from, are also shared between the client application and all MFC extension DLLs as well as MFCxx.DLL itself.  
  
### Building an Extension DLL  
 You can use AppWizard to create an MFC extension DLL project, and it will automatically generate the appropriate compiler and linker settings. It was also generate a `DllMain` function that you can modify.  
  
 If you are converting an existing project to an MFC extension DLL, start with the standard rules for building an application using the shared version of MFC, then do the following:  
  
-   Add **/D_AFXEXT** to the compiler flags. On the Project Properties dialog, select the C/C++ node. Then select the Preprocessor category. Add `_AFXEXT` to the Define Macros field, separating each of the items with semicolons.  
  
-   Remove the **/Gy** compiler switch. On the Project Properties dialog, select the C/C++ node. Then select the Code Generation category. Ensure that the "Enable Function-Level Linking" option is not enabled. This will make it easier to export classes because the linker will not remove unreferenced functions. If the original project is used to build a Regular DLL statically linked to MFC, change the **/MT[d]** compiler option to **/MD[d]**.  
  
-   Build an export library with the **/DLL** option to LINK. This will be set when you create a new target, specifying Win32 Dynamic-Link Library as the target type.  
  
### Changing your Header Files  
 The goal of an extension DLL is usually to export some common functionality to one or more applications that can use that functionality. This boils down to exporting classes and global functions that are available for your client applications.  
  
 In order to do this you must insure that each of the member functions is marked as import or export as appropriate. This requires special declarations: **__declspec(dllexport)** and **__declspec(dllimport)**. When your classes are used by the client applications, you want them to be declared as **__declspec(dllimport)**. When the extension DLL itself is being built, they should be declared as **__declspec(dllexport)**. In addition, the functions must be actually exported, so that the client programs bind to them at load time.  
  
 To export your entire class, use **AFX_EXT_CLASS** in the class definition. This macro is defined by the framework as **__declspec(dllexport)** when **_AFXDLL** and `_AFXEXT` is defined, but defined as **__declspec(dllimport)** when `_AFXEXT` is not defined. `_AFXEXT` as described above, is only defined when building your extension DLL. For example:  
  
```  
class AFX_EXT_CLASS CExampleExport : public CObject  
{ ... class definition ... };  
```  
  
### Not Exporting the Entire Class  
 Sometimes you may want to export just the individual necessary members of your class. For example, if you are exporting a `CDialog`-derived class, you might only need to export the constructor and the `DoModal` call. You can export these members using the DLL's .DEF file, but you can also use **AFX_EXT_CLASS** in much the same way on the individual members you need to export.  
  
 For example:  
  
```  
class CExampleDialog : public CDialog  
{  
public:  
    AFX_EXT_CLASS CExampleDialog();
AFX_EXT_CLASS int DoModal();
*// rest of class definition  
 .  
 .  
 .  
};  
```  
  
 When you do this, you may run into an additional problem because you are no longer exporting all members of the class. The problem is in the way that MFC macros work. Several of MFC's helper macros actually declare or define data members. Therefore, these data members will also need to be exported from your DLL.  
  
 For example, the `DECLARE_DYNAMIC` macro is defined as follows when building an extension DLL:  
  
```  
#define DECLARE_DYNAMIC(class_name) \  
protected: \  
    static CRuntimeClass* PASCAL _GetBaseClass();

\  
    public: \  
    static AFX_DATA CRuntimeClass class##class_name; \  
    virtual CRuntimeClass* GetRuntimeClass() const;

\  
```  
  
 The line that begins "static `AFX_DATA`" is declaring a static object inside of your class. To export this class correctly and access the runtime information from a client .EXE, you need to export this static object. Because the static object is declared with the modifier `AFX_DATA`, you only need to define `AFX_DATA` to be **__declspec(dllexport)** when building your DLL and define it as **__declspec(dllimport)** when building your client executable.  
  
 As discussed above, **AFX_EXT_CLASS** is already defined in this way. You just need to re-define `AFX_DATA` to be the same as **AFX_EXT_CLASS** around your class definition.  
  
 For example:  
  
```  
#undef  AFX_DATA  
#define AFX_DATA AFX_EXT_CLASS  
class CExampleView : public CView  
{  
    DECLARE_DYNAMIC() *// ... class definition ...  
};  
#undef  AFX_DATA  
#define AFX_DATA  
```  
  
 MFC always uses the `AFX_DATA` symbol on data items it defines within its macros, so this technique will work for all such scenarios. For example, it will work for `DECLARE_MESSAGE_MAP`.  
  
> [!NOTE]
>  If you are exporting the entire class rather than selected members of the class, static data members are automatically exported.  
  
 You can use the same technique to automatically export the `CArchive` extraction operator for classes that use the `DECLARE_SERIAL` and `IMPLEMENT_SERIAL` macros. Export the archive operator by bracketing the class declarations (located in the .H file) with the following code:  
  
```  
#undef AFX_API  
#define AFX_API AFX_EXT_CLASS  
 
<your class declarations here>  
 
#undef AFX_API  
#define AFX_API  
```  
  
### Limitations of _AFXEXT  
 You can use the _**AFXEXT** pre-processor symbol for your extension DLLs as long as you do not have multiple layers of extension DLLs. If you have extension DLLs that call or derive from classes in your own extension DLLs, which then derive from the MFC classes, you must use your own preprocessor symbol to avoid ambiguity.  
  
 The problem is that in Win32, you must explicitly declare any data as **__declspec(dllexport)** if it is to be exported from a DLL, and **__declspec(dllimport)** if it is to be imported from a DLL. When you define `_AFXEXT`, the MFC headers make sure that **AFX_EXT_CLASS** is defined correctly.  
  
 When you have multiple layers, one symbol such as **AFX_EXT_CLASS** is not sufficient, since an extension DLL may be exporting new classes as well as importing other classes from another extension DLL. In order to deal with this problem, use a special preprocessor symbol that indicates that you are building the DLL itself versus using the DLL. For example, imagine two extension DLLs, A.DLL, and B.DLL. They each export some classes in A.H and B.H, respectively. B.DLL uses the classes from A.DLL. The header files would look something like this:  
  
```  
/* A.H */  
#ifdef A_IMPL  
 #define CLASS_DECL_A   __declspec(dllexport)  
#else  
 #define CLASS_DECL_A   __declspec(dllimport)  
#endif  
 
class CLASS_DECL_A CExampleA : public CObject  
{ ... class definition ... };  
 
/* B.H */  
#ifdef B_IMPL  
 #define CLASS_DECL_B   __declspec(dllexport)  
#else  
 #define CLASS_DECL_B   __declspec(dllimport)  
#endif  
 
class CLASS_DECL_B CExampleB : public CExampleA  
{ ... class definition .. };  
```  
  
 When A.DLL is built, it is built with **/D A_IMPL** and when B.DLL is built, it is built with **/D B_IMPL**. By using separate symbols for each DLL, CExampleB is exported and CExampleA is imported when building B.DLL. CExampleA is exported when building A.DLL and imported when used by B.DLL (or some other client).  
  
 This type of layering cannot be done when using the built-in **AFX_EXT_CLASS** and `_AFXEXT` preprocessor symbols. The technique described above solves this problem in a manner not unlike the mechanism MFC itself uses when building its OLE, Database, and Network extension DLLs.  
  
### Not Exporting the Entire Class  
 Again, you will have to take special care when you are not exporting an entire class. You have to ensure that the necessary data items created by the MFC macros are exported correctly. This can be done by re-defining **AFX_DATA** to your specific class' macro. This should be done any time you are not exporting the entire class.  
  
 For example:  
  
```  
// A.H  
#ifdef A_IMPL  
 #define CLASS_DECL_A  _declspec(dllexport)  
#else  
 #define CLASS_DECL_A  _declspec(dllimport)  
 #endif  
 
#undef  AFX_DATA  
#define AFX_DATA CLASS_DECL_A  
 
class CExampleA : public CObject  
{  
    DECLARE_DYNAMIC() 
    CLASS_DECL_A int SomeFunction();
*//class definition   
 .  
 .  
 .  
};  
 
#undef AFX_DATA  
#define AFX_DATA  
```  
  
### DllMain  
 The following is the exact code you should place in your main source file for your extension DLL. It should come after the standard includes. Note that when you use AppWizard to create starter files for an extension DLL, it supplies a `DllMain` for you.  
  
```  
#include "afxdllx.h"  
  
static AFX_EXTENSION_MODULE extensionDLL;  
  
extern "C" int APIENTRY   
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID)  
{  
   if (dwReason == DLL_PROCESS_ATTACH)  
   {  
      // Extension DLL one-time initialization   
      if (!AfxInitExtensionModule(  
             extensionDLL, hInstance))  
         return 0;  
  
      // TODO: perform other initialization tasks here  
   }  
   else if (dwReason == DLL_PROCESS_DETACH)  
   {  
      // Extension DLL per-process termination  
      AfxTermExtensionModule(extensionDLL);  
  
          // TODO: perform other cleanup tasks here  
   }  
   return 1;   // ok  
}  
```  
  
 The call to `AfxInitExtensionModule` captures the modules runtime-classes (`CRuntimeClass` structures) as well as its object factories (`COleObjectFactory` objects) for use later when the **CDynLinkLibrary** object is created. The (optional) call to `AfxTermExtensionModule` allows MFC to cleanup the extension DLL when each process detaches (which happens when the process exits, or when the DLL is unloaded as a result of a **FreeLibrary** call) from the extension DLL. Since most extension DLLs are not dynamically loaded (usually, they are linked via their import libraries), the call to `AfxTermExtensionModule` is usually not necessary.  
  
 If your application loads and frees extension DLLs dynamically, be sure to call `AfxTermExtensionModule` as shown above. Also be sure to use `AfxLoadLibrary` and `AfxFreeLibrary` (instead of Win32 functions **LoadLibrary** and **FreeLibrary**) if your application uses multiple threads or if it dynamically loads an extension DLL. Using `AfxLoadLibrary` and `AfxFreeLibrary` insures that the startup and shutdown code that executes when the extension DLL is loaded and unloaded does not corrupt the global MFC state.  
  
 The header file AFXDLLX.H contains special definitions for structures used in extension DLLs, such as the definition for `AFX_EXTENSION_MODULE` and **CDynLinkLibrary**.  
  
 The global *extensionDLL* must be declared as shown. Unlike the 16-bit version of MFC, you can allocate memory and call MFC functions during this time, since the MFCxx.DLL is fully initialized by the time your `DllMain` is called.  
  
### Sharing Resources and Classes  
 Simple MFC extension DLLs need only export a few low-bandwidth functions to the client application and nothing more. More user-interface intensive DLLs may want to export resources and C++ classes to the client application.  
  
 Exporting resources is done through a resource list. In each application is a singly linked list of **CDynLinkLibrary** objects. When looking for a resource, most of the standard MFC implementations that load resources look first at the current resource module (`AfxGetResourceHandle`) and if not found walk the list of **CDynLinkLibrary** objects attempting to load the requested resource.  
  
 Dynamic creation of C++ objects given a C++ class name is similar. The MFC object deserialization mechanism needs to have all of the `CRuntimeClass` objects registered so that it can reconstruct by dynamically creating C++ object of the required type based on what was stored earlier.  
  
 If you want the client application to use classes in your extension DLL that are `DECLARE_SERIAL`, then you will need to export your classes to be visible to the client application. This is also done by walking the **CDynLinkLibrary** list.  
  
 In the case of the MFC Advanced Concepts sample [DLLHUSK](../visual-cpp-samples.md), the list looks something like:  
  
```  
head ->   DLLHUSK.EXE   - or -   DLLHUSK.EXE  
 |      |  
    TESTDLL2.DLL TESTDLL2.DLL  
 |      |  
    TESTDLL1.DLL TESTDLL1.DLL  
 |      |  
 |      |  
    MFC90D.DLL MFC90.DLL  
```  
  
 The MFCxx.DLL is usually last on the resource and class list. MFCxx.DLL includes all of the standard MFC resources, including prompt strings for all the standard command IDs. Placing it at the tail of the list allows DLLs and the client application itself to not have a their own copy of the standard MFC resources, but to rely on the shared resources in the MFCxx.DLL instead.  
  
 Merging the resources and class names of all DLLs into the client application's name space has the disadvantage that you have to be careful what IDs or names you pick. You can of course disable this feature by not exporting either your resources or a **CDynLinkLibrary** object to the client application. The [DLLHUSK](../visual-cpp-samples.md) sample manages the shared resource name space by using multiple header files. See [Technical Note 35](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md) for more tips on using shared resource files.  
  
### Initializing the DLL  
 As mentioned above, you will usually want to create a **CDynLinkLibrary** object in order to export your resources and classes to the client application. You will need to provide an exported entry point to initialize the DLL. Minimally, this is a void routine that takes no arguments and returns nothing, but it can be anything you like.  
  
 Each client application that wants to use your DLL must call this initialization routine, if you use this approach. You may also allocate this **CDynLinkLibrary** object in your `DllMain` just after calling `AfxInitExtensionModule`.  
  
 The initialization routine must create a **CDynLinkLibrary** object in the current application's heap, wired up to your extension DLL information. This can be done with the following:  
  
```  
extern "C" extern void WINAPI InitXxxDLL()  
{  
    new CDynLinkLibrary(extensionDLL);

}  
```  
  
 The routine name, *InitXxxDLL* in this example, can be anything you want. It does not need to be `extern "C"`, but doing so makes the export list easier to maintain.  
  
> [!NOTE]
>  If you use your extension DLL from a regular DLL, you must export this initialization function. This function must be called from the regular DLL before using any extension DLL classes or resources.  
  
### Exporting Entries  
 The simple way to export your classes is to use **__declspec(dllimport)** and **__declspec(dllexport)** on each class and global function you wish to export. This makes it a lot easier, but is less efficient than naming each entry point (described below) since you have less control over what functions are exported and you cannot export the functions by ordinal. TESTDLL1 and TESTDLL2 use this method to export their entries.  
  
 A more efficient method (and the method used by MFCxx.DLL) is to export each entry by hand by naming each entry in the .DEF file. Since we are exporting selective exports from our DLL (that is, not everything), we must decide which particular interfaces we wish to export. This is difficult since you must specify the mangled names to the linker in the form of entries in the .DEF file. Don't export any C++ classes unless you really need to have a symbolic link for it.  
  
 If you have tried exporting C++ classes with a .DEF file before, you may want to develop a tool to generate this list automatically. This can be done using a two-stage link process. Link your DLL once with no exports, and allow the linker to generate a .MAP file. The .MAP file can be used to generate a list of functions that should be exported, so with some rearranging, it can be used to generate your EXPORT entries for your .DEF file. The export list for MFCxx.DLL and the OLE and Database extension DLLs, several thousand in number, was generated with such a process (although it is not completely automatic and requires some hand tuning every once in a while).  
  
### CWinApp vs. CDynLinkLibrary  
 An MFC Extension DLL does not have a `CWinApp`-derived object of its own; instead it must work with the `CWinApp`-derived object of the client application. This means that the client application owns the main message pump, the idle loop and so on.  
  
 If your MFC Extension DLL needs to maintain extra data for each application, you can derive a new class from **CDynLinkLibrary** and create it in the InitXxxDLL routine describe above. When running, the DLL can check the current application's list of **CDynLinkLibrary** objects to find the one for that particular extension DLL.  
  
### Using Resources in Your DLL Implementation  
 As mentioned above, the default resource load will walk the list of **CDynLinkLibrary** objects looking for the first EXE or DLL that has the requested resource. All MFC APIs as well as all the internal code uses `AfxFindResourceHandle` to walk the resource list to find any resource, no matter where it may reside.  
  
 If you wish to only load resources from a specific place, use the APIs `AfxGetResourceHandle` and `AfxSetResourceHandle` to save the old handle and set the new handle. Be sure to restore the old resource handle before you return to the client application. The sample TESTDLL2 uses this approach for explicitly loading a menu.  
  
 Walking the list has the disadvantages that it is slightly slower and requires managing resource ID ranges. It has the advantage that a client application that links to several extension DLLs can use any DLL-provided resource without having to specify the DLL instance handle. `AfxFindResourceHandle` is an API used for walking the resource list to look for a given match. It takes the name and type of a resource and returns the resource handle where it was first found (or NULL).  
  
##  <a name="_mfcnotes_writing_an_application_that_uses_the_dll_version"></a> Writing an Application That Uses the DLL Version  
  
### Application Requirements  
 An application that uses the shared version of MFC must follow a few simple rules:  
  
-   It must have a `CWinApp` object and follow the standard rules for a message pump.  
  
-   It must be compiled with a set of required compiler flags (see below).  
  
-   It must link with the MFCxx import libraries. By setting the required compiler flags, the MFC headers determine at link time which library the application should link with.  
  
-   To run the executable, MFCxx.DLL must be on the path or in the Windows system directory.  
  
### Building with the Development Environment  
 If you are using the internal makefile with most of the standard defaults, you can easily change the project to build the DLL version.  
  
 The following step assumes you have a correctly functioning MFC application linked with NAFXCWD.LIB (for debug) and NAFXCW.LIB (for retail) and you want to convert it to use the shared version of the MFC library. You are running the Visual C++ environment and have an internal project file.  
  
1.  On the **Projects** menu, click **Properties**. In the **General** page under **Project Defaults**, set Microsoft Foundation Classes to **Use MFC in a Shared DLL** (MFCxx(d).dll).  
  
### Building with NMAKE  
 If you are using the external makefile feature of the Visual C++, or are using NMAKE directly, you will have to edit your makefile to support compiler and linker options  
  
 Required compiler flags:  
  
 **/D_AFXDLL /MD**  
 **/D_AFXDLL**  
  
 The standard MFC headers need this symbol to be defined:  
  
 **/MD**  
 The application must use the DLL version of the C run-time library  
  
 All other compiler flags follow the MFC defaults (for example, _DEBUG for debug).  
  
 Edit the linker list of libraries. Change NAFXCWD.LIB to MFCxxD.LIB and change NAFXCW.LIB to MFCxx.LIB. Replace LIBC.LIB with MSVCRT.LIB. As with any other MFC library it is important that MFCxxD.LIB is placed **before** any C-runtime libraries.  
  
 Optionally add **/D_AFXDLL** to both your retail and debug resource compiler options (the one that actually compiles the resources with **/R**). This makes your final executable smaller by sharing the resources that are present in the MFC DLLs.  
  
 A full rebuild is required after these changes are made.  
  
### Building the Samples  
 Most of the MFC sample programs can be built from Visual C++ or from a shared NMAKE-compatible MAKEFILE from the command line.  
  
 To convert any of these samples to use MFCxx.DLL, you can load the .MAK file into the Visual C++ and set the Project options as described above. If you are using the NMAKE build, you can specify "AFXDLL=1" on the NMAKE command line and that will build the sample using the shared MFC libraries.  
  
 The MFC Advanced Concepts sample [DLLHUSK](../visual-cpp-samples.md) is built with the DLL version of MFC. This sample not only illustrates how to build an application linked with MFCxx.DLL, but it also illustrates other features of the MFC DLL packaging option such as MFC Extension DLLs described later in this technical note.  
  
### Packaging Notes  
 The retail version of the DLLs (MFCxx[U].DLL) are freely redistributable. The debug version of the DLLs are not freely redistributable and should be used only during the development of your application.  
  
 The debug DLLs are provided with debugging information. By using the Visual C++ debugger, you can trace execution of your application as well as the DLL. The Release DLLs (MFCxx[U].DLL) do not contain debugging information.  
  
 If you customize or rebuild the DLLs, then you should call them something other than "MFCxx" The MFC SRC file MFCDLL.MAK describes build options and contains the logic for renaming the DLL. Renaming the files is necessary, since these DLLs are potentially shared by many MFC applications. Having your custom version of the MFC DLLs replace those installed on the system may break another MFC application using the shared MFC DLLs.  
  
 Rebuilding the MFC DLLs is not recommended.  
  
##  <a name="_mfcnotes_how_the_mfc30.dll_is_implemented"></a> How the MFCxx.DLL Is Implemented  
 The following section describes how the MFC DLL (MFCxx.DLL and MFCxxD.DLL) is implemented. Understanding the details here are also not important if all you want to do is use the MFC DLL with your application. The details here are not essential for understanding how to write an MFC extension DLL, but understanding this implementation may help you write your own DLL.  
  
### Implementation Overview  
 The MFC DLL is really a special case of an MFC Extension DLL as described above. It has a very large number of exports for a large number of classes. There are a few additional things we do in the MFC DLL that make it even more special than a regular Extension DLL.  
  
### Win32 Does Most of the Work  
 The 16-bit version of MFC needed a number of special techniques including per-app data on the stack segment, special segments created by some 80x86 assembly code, per-process exception contexts, and other techniques. Win32 directly supports per-process data in a DLL, which is what you want most of the time. For the most part MFCxx.DLL is just NAFXCW.LIB packaged in a DLL. If you look at the MFC source code, you'll find very few #ifdef _AFXDLL, since there are very few special cases that need to be made. The special cases that are there are specifically to deal with Win32 on Windows 3.1 (otherwise known as Win32s). Win32s does not support per-process DLL data directly so the MFC DLL must use the thread-local storage (TLS) Win32 APIs to obtain process local data.  
  
### Impact on Library Sources, Additional Files  
 The impact of the **_AFXDLL** version on the normal MFC class library sources and headers is relatively minor. There is a special version file (AFXV_DLL.H) as well as an additional header file (AFXDLL_.H) included by the main AFXWIN.H header. The AFXDLL_.H header includes the **CDynLinkLibrary** class and other implementation details of both **_AFXDLL** applications and MFC Extension DLLs. The AFXDLLX.H header is provided for building MFC Extension DLLs (see above for details).  
  
 The regular sources to the MFC library in MFC SRC have some additional conditional code under the **_AFXDLL** #ifdef. An additional source file (DLLINIT.CPP) contains the extra DLL initialization code and other glue for the shared version of MFC.  
  
 In order to build the shared version of MFC, additional files are provided. (See below for details on how to build the DLL.)  
  
-   Two .DEF files are used for exporting the MFC DLL entry points for debug (MFCxxD.DEF) and release (MFCxx.DEF) versions of the DLL.  
  
-   An .RC file (MFCDLL.RC) contains all the standard MFC resources and a VERSIONINFO resource for the DLL.  
  
-   A .CLW file (MFCDLL.CLW) is provided to allow browsing the MFC classes using ClassWizard. Note: this feature is not particular to the DLL version of MFC.  
  
### Memory Management  
 An application using MFCxx.DLL uses a common memory allocator provided by MSVCRTxx.DLL, the shared C-runtime DLL. The application, any extension DLLs, and well as the MFC DLLs themselves use this shared memory allocator. By using a shared DLL for memory allocation, the MFC DLLs can allocate memory that is later freed by the application or vice versa. Because both the application and the DLL must use the same allocator, you should not override the C++ global `operator new` or `operator delete`. The same rules apply to the rest of the C run-time memory allocation routines (such as `malloc`, `realloc`, **free**, and others).  
  
### Ordinals and class __declspec(dllexport) and DLL naming  
 We do not use the `class` **__declspec(dllexport)** functionality of the C++ compiler. Instead, a list of exports is included with the class library sources (MFCxx.DEF and MFCxxD.DEF). Only these select set of entry points (functions and data) are exported. Other symbols, such as MFC private implementation functions or classes, are not exported All exports are done by ordinal without a string name in the resident or non-resident name table.  
  
 Using `class` **__declspec(dllexport)** may be a viable alternative for building smaller DLLs, but in the case of a large DLL like MFC, the default exporting mechanism has efficiency and capacity limits.  
  
 What this all means is that we can package a large amount of functionality in the release MFCxx.DLL that is only around 800 KB without compromising much execution or loading speed. MFCxx.DLL would have been 100K larger had this technique not been used. This also makes it possible to add additional entry points at the end of the .DEF file to allow simple versioning without compromising the speed and size efficiency of exporting by ordinal. Major version revisions in the MFC class library will change the library name. That is, MFC30.DLL is the redistributable DLL containing version 3.0 of the MFC class library. An upgrade of this DLL, say, in a hypothetical MFC 3.1, the DLL would be named MFC31.DLL instead. Again, if you modify the MFC source code to produce a custom version of the MFC DLL, use a different name (and preferably one without "MFC" in the name).  
  
## See Also  
 [Technical Notes by Number](../mfc/technical-notes-by-number.md)   
 [Technical Notes by Category](../mfc/technical-notes-by-category.md)

