---
title: "Using Database, OLE, and Sockets MFC extension DLLs in regular MFC DLLs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["DLLs [C++], initializing", "DLLs [C++], extension", "DLLs [C++], regular"]
ms.assetid: 9f1d14a7-9e2a-4760-b3b6-db014fcdb7ff
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Using Database, OLE, and Sockets MFC extension DLLs in regular MFC DLLs
When using an MFC extension DLL from a regular MFC DLL, if the MFC extension DLL is not wired into the **CDynLinkLibrary** object chain of the regular MFC DLL, you might run into one or more of a set of related problems. Because the debug versions of the MFC Database, OLE, and Sockets support DLLs are implemented as MFC extension DLLs, you might see similar problems if you are using these MFC features, even if you are not explicitly using any of your own MFC extension DLLs. Some symptoms are:  
  
-   When attempting to deserialize an object of a type of class defined in the MFC extension DLL, the message "Warning: Cannot load CYourClass from archive. Class not defined." appears in the TRACE debug window and the object fails to serialize.  
  
-   An exception indicating bad class might be thrown.  
  
-   Resources stored in the MFC extension DLL fail to load because `AfxFindResourceHandle` returns **NULL** or an incorrect resource handle.  
  
-   `DllGetClassObject`, `DllCanUnloadNow`, and the `UpdateRegistry`, `Revoke`, `RevokeAll`, and `RegisterAll` member functions of `COleObjectFactory` fail to locate a class factory defined in the MFC extension DLL.  
  
-   `AfxDoForAllClasses` does not work for any classes in the MFC extension DLL.  
  
-   Standard MFC database, sockets, or OLE resources fail to load. For example, **AfxLoadString**(**AFX_IDP_SQL_CONNECT_FAIL**) returns an empty string, even when the regular MFC DLL is properly using the MFC Database classes.  
  
 The solution to these problems is to create and export an initialization function in the MFC extension DLL that creates a **CDynLinkLibrary** object. Call this initialization function exactly once from each regular MFC DLL that uses the MFC extension DLL.  
  
## MFC OLE, MFC Database (or DAO), or MFC Sockets Support  
 If you are using any MFC OLE, MFC Database (or DAO), or MFC Sockets support in your regular MFC DLL, respectively, the MFC debug MFC extension DLLs MFCOxxD.dll, MFCDxxD.dll, and MFCNxxD.dll (where xx is the version number) are linked automatically. You must call a predefined initialization function for each of these DLLs that you are using.  
  
 For database support, add a call to `AfxDbInitModule` to your regular MFC DLL's `CWinApp::InitInstance` function. Make sure this call occurs before any base-class call or any added code which accesses the MFCDxxD.dll. This function takes no parameters and returns void.  
  
 For OLE support, add a call to `AfxOleInitModule` to your regular MFC DLL's `CWinApp::InitInstance`. Note that the **COleControlModule InitInstance** function calls `AfxOleInitModule` already, so if you are building an OLE control and are using `COleControlModule`, you should not add this call to `AfxOleInitModule`.  
  
 For Sockets support, add a call to `AfxNetInitModule` to your regular MFC DLL's `CWinApp::InitInstance`.  
  
 Note that release builds of MFC DLLs and applications do not use separate DLLs for database, sockets, or OLE support. However, it is safe to call these initialization functions in release mode.  
  
## CDynLinkLibrary Objects  
 During each of the operations mentioned at the beginning of this topic, MFC needs to search for a desired value or object. For example, during deserialization, MFC needs to search through all the currently available run-time classes to match objects in the archive with their proper run-time class.  
  
 As a part of these searches, MFC scans through all the MFC extension DLLs in use by walking a chain of **CDynLinkLibrary** objects. **CDynLinkLibrary** objects attach automatically to a chain during their construction and are created by each MFC extension DLL in turn during initialization. In addition, every module (application or regular MFC DLL) has its own chain of **CDynLinkLibrary** objects.  
  
 For an MFC extension DLL to get wired into a **CDynLinkLibrary** chain, it must create a **CDynLinkLibrary** object in the context of every module that uses the MFC extension DLL. Therefore, if an MFC extension DLL is going to be used from regular MFC DLLs, it must provide an exported initialization function that creates a **CDynLinkLibrary** object. Every regular MFC DLL that uses the MFC extension DLL must call the exported initialization function.  
  
 If an MFC extension DLL is only going to be used from an MFC application (.exe) and never from a regular MFC DLL, then it is sufficient to create the **CDynLinkLibrary** object in the MFC extension DLL's `DllMain`. This is what the MFC DLL Wizard MFC extension DLL code does. When loading an MFC extension DLL implicitly, `DllMain` loads and executes before the application ever starts. Any **CDynLinkLibrary** creations are wired into a default chain that the MFC DLL reserves for an MFC application.  
  
 Note that it is a bad idea to have multiple **CDynLinkLibrary** objects from one MFC extension DLL in any one chain, especially if the MFC extension DLL will be dynamically unloaded from memory. Do not call the initialization function more than once from any one module.  
  
## Sample Code  
 This sample code assumes that the regular MFC DLL is implicitly linking to the MFC extension DLL. This is accomplished by linking to the import library (.lib) of the MFC extension DLL when building the regular MFC DLL.  
  
 The following lines should be in the source of the MFC extension DLL:  
  
```  
// YourExtDLL.cpp:  
  
// standard MFC extension DLL routines  
#include "afxdllx.h"  
  
static AFX_EXTENSION_MODULE NEAR extensionDLL = { NULL, NULL };  
  
extern "C" int APIENTRY  
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)  
{  
    if (dwReason == DLL_PROCESS_ATTACH)  
    {  
        // MFC extension DLL one-time initialization  
        if (!AfxInitExtensionModule(extensionDLL, hInstance))  
           return 0;  
    }  
    return 1;   // ok  
}  
  
// Exported DLL initialization is run in context of  
// application or regular MFC DLL  
extern "C" void WINAPI InitYourExtDLL()  
{  
    // create a new CDynLinkLibrary for this app  
    new CDynLinkLibrary(extensionDLL);  
  
    // add other initialization here  
}  
```  
  
 Be sure to export the **InitYourExtDLL** function. This could be done using **__declspec(dllexport)** or in your DLL's .def file as follows:  
  
```  
// YourExtDLL.Def:  
LIBRARY      YOUREXTDLL  
CODE         PRELOAD MOVEABLE DISCARDABLE  
DATA         PRELOAD SINGLE  
EXPORTS  
    InitYourExtDLL  
```  
  
 Add a call to the `InitInstance` member of the `CWinApp`-derived object in each regular MFC DLL using the MFC extension DLL:  
  
```  
// YourRegularDLL.cpp:  
  
class CYourRegularDLL : public CWinApp  
{  
public:  
    virtual BOOL InitInstance(); // Initialization  
    virtual int ExitInstance();  // Termination  
  
    // nothing special for the constructor  
    CYourRegularDLL(LPCTSTR pszAppName) : CWinApp(pszAppName) { }  
};  
  
BOOL CYourRegularDLL::InitInstance()  
{  
    // any DLL initialization goes here  
    TRACE0("YOUR regular MFC DLL initializing\n");  
  
    // wire any MFC extension DLLs into CDynLinkLibrary chain  
    InitYourExtDLL();  
  
    return TRUE;  
}  
```  
  
### What do you want to do?  
  
-   [Initialize an MFC extension DLL](../build/run-time-library-behavior.md#initializing-extension-dlls)  
  
-   [Initialize regular MFC DLLs](../build/run-time-library-behavior.md#initializing-regular-dlls)  
  
### What do you want to know more about?  
  
-   [MFC extension DLLs](../build/extension-dlls.md)  
  
-   [Regular MFC DLLs Statically Linked to MFC](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [Regular MFC DLLs Dynamically Linked to MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Using MFC as Part of a DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
  
-   [DLL Version of MFC](../mfc/tn033-dll-version-of-mfc.md)  
  
## See Also  
 [MFC extension DLLs](../build/extension-dlls.md)