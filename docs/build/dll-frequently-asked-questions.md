---
title: "MFC DLL Frequently Asked Questions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["troubleshooting [C++], DLLs", "DLLs [C++], frequently asked questions", "FAQs [C++], DLLs"]
ms.assetid: 09dd068e-fc33-414e-82f7-289c70680256
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# DLL Frequently Asked Questions  
  
Following are some frequently asked questions (FAQ) about DLLs.  
    
-   [Can an MFC DLL create multiple threads?](#mfc_multithreaded_1)  

-   [Can a multithreaded application access an MFC DLL in different threads?](#mfc_multithreaded_2)  
  
-   [Are there any MFC classes or functions that cannot be used in an MFC DLL?](#mfc_prohibited_classes)  
  
-   [What optimization techniques should I use to improve the client application's performance when loading?](#mfc_optimization)  
  
-   [There's a memory leak in my regular MFC DLL, but my code looks fine. How can I find the memory leak?](#memory_leak)  

## <a name="mfc_multithreaded_1"></a> Can an MFC DLL create multiple threads?  
  
Except during initialization, an MFC DLL can safely create multiple threads as long as it uses the Win32 thread local storage (TLS) functions such as **TlsAlloc** to allocate thread local storage. However, if an MFC DLL uses **__declspec(thread)** to allocate thread local storage, the client application must be implicitly linked to the DLL. If the client application explicitly links to the DLL, the call to **LoadLibrary** will not successfully load the DLL. For more information about creating multiple threads inside MFC DLLs, see the Knowledge Base article, "PRB: Calling LoadLibrary() to Load a DLL That Has Static TLS" (Q118816). For more information about thread-local variables in DLLs, see [thread](../cpp/thread.md).
  
 An MFC DLL that creates a new MFC thread during startup will stop responding when it is loaded by an application. This includes whenever a thread is created by calling `AfxBeginThread` or `CWinThread::CreateThread` inside:  
  
-   The `InitInstance` of a `CWinApp`-derived object in a regular MFC DLL.  
  
-   A supplied `DllMain` or **RawDllMain** function in a regular MFC DLL.  
  
-   A supplied `DllMain` or **RawDllMain** function in an MFC extension DLL.  
  
 For more information about creating threads during initialization, see the Knowledge Base article, "PRB: Cannot Create an MFC Thread During DLL Startup" (Q142243).  
  
## <a name="mfc_multithreaded_2"></a> Can a multithreaded application access an MFC DLL in different threads?
Multithreaded applications can access regular MFC DLLs that dynamically link to MFC and MFC extension DLLs from different threads. And as of Visual C++ version 4.2, an application can access regular MFC DLLs that statically link to MFC from multiple threads created in the application.  
  
 Prior to version 4.2, only one external thread could attach to a regular MFC DLL that statically linked to MFC. For more information about restrictions accessing regular MFC DLLs that statically link to MFC from multiple threads (prior to Visual C++ version 4.2), see the Knowledge Base article, "Multiple Threads and MFC _USRDLLs" (Q122676).  
  
 Note that the term USRDLL is no longer used in the Visual C++ documentation. A regular MFC DLL that is statically linked to MFC has the same characteristics as the former USRDLL.  


## <a name="mfc_prohibited_classes"></a> Are there any MFC classes or functions that cannot be used in an MFC DLL?
Extension DLLs use the `CWinApp`-derived class of the client application. They must not have their own `CWinApp`-derived class.  
  
Regular MFC DLLs must have a `CWinApp`-derived class and a single object of that application class, as does an MFC application. Unlike the `CWinApp` object of an application, the `CWinApp` object of the DLL does not have a main message pump.  
  
 Note that because the `CWinApp::Run` mechanism does not apply to a DLL, the application owns the main message pump. If the DLL opens modeless dialog boxes or has a main frame window of its own, the application's main message pump must call a routine exported by the DLL, which in turn calls the `CWinApp::PreTranslateMessage` member function of the DLL's application object.  

## <a name="mfc_optimization"></a> What optimization techniques should I use to improve the client application&#39;s performance when loading?
If your DLL is a regular MFC DLL that is statically linked to MFC, changing it to a regular MFC DLL that is dynamically linked to MFC reduces the file size.  
  
 If the DLL has a large number of exported functions, use a .def file to export the functions (instead of using **__declspec(dllexport)**) and use the .def file [NONAME attribute](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) on each exported function. The NONAME attribute causes only the ordinal value and not the function name to be stored in the DLL's export table, which reduces the file size.  
  
 DLLs that are implicitly linked to an application are loaded when the application loads. To improve the performance when loading, try dividing the DLL into different DLLs. Put all the functions that the calling application needs immediately after loading into one DLL and have the calling application implicitly link to that DLL. Put the other functions that the calling application does not need right away into another DLL and have the application explicitly link to that DLL. For more information, see [Determine which linking method to use](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use).  

## <a name="memory_leak"></a> There&#39;s a memory leak in my regular MFC DLL, but my code looks fine. How can I find the memory leak?  
  
One possible cause of the memory leak is that MFC creates temporary objects that are used inside message handler functions. In MFC applications, these temporary objects are automatically cleaned up in the `CWinApp::OnIdle()` function that is called in between processing messages. However, in MFC dynamic-link libraries (DLLs), the `OnIdle()` function is not automatically called. As a result, temporary objects are not automatically cleaned up. To clean up temporary objects, the DLL must explicitly call `OnIdle(1)` periodically.  
  
## See Also  
 [DLLs in Visual C++](../build/dlls-in-visual-cpp.md)