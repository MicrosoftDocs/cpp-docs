---
title: "CWinThread Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 10cdc294-4057-4e76-ac7c-a8967a89af0b
caps.latest.revision: 18
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
# CWinThread Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Represents a thread of execution within an application. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CWinThread : public CCmdTarget</legacySyntax>
    </syntaxSection>
    <section>
        <title>Members</title>
        <content/>
        <sections>
            <section>
                <title>Public Constructors</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__cwinthread">CWinThread::CWinThread</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Methods</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__createthread">CWinThread::CreateThread</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Starts execution of a <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__exitinstance">CWinThread::ExitInstance</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to clean up when your thread terminates.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__getmainwnd">CWinThread::GetMainWnd</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a pointer to the main window for the thread.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__getthreadpriority">CWinThread::GetThreadPriority</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Gets the priority of the current thread.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__initinstance">CWinThread::InitInstance</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to perform thread instance initialization.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__isidlemessage">CWinThread::IsIdleMessage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Checks for special messages.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__onidle">CWinThread::OnIdle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Override to perform thread-specific idle-time processing.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__postthreadmessage">CWinThread::PostThreadMessage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Posts a message to another <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__pretranslatemessage">CWinThread::PreTranslateMessage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Filters messages before they are dispatched to the Windows functions                                         <externalLink> <linkText>TranslateMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644955</linkUri>
                                        </externalLink> and                                         <externalLink> <linkText>DispatchMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644934</linkUri>
                                        </externalLink>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__processmessagefilter">CWinThread::ProcessMessageFilter</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Intercepts certain messages before they reach the application.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__processwndprocexception">CWinThread::ProcessWndProcException</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Intercepts all unhandled exceptions thrown by the thread's message and command handlers.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__pumpmessage">CWinThread::PumpMessage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Contains the thread's message loop.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__resumethread">CWinThread::ResumeThread</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Decrements a thread's suspend count.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__run">CWinThread::Run</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Controlling function for threads with a message pump. Override to customize the default message loop.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__setthreadpriority">CWinThread::SetThreadPriority</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the priority of the current thread.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__suspendthread">CWinThread::SuspendThread</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Increments a thread's suspend count.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Operators</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__operator_handle">CWinThread::operator HANDLE</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the handle of the <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Data Members</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__m_bautodelete">CWinThread::m_bAutoDelete</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether to destroy the object at thread termination.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__m_hthread">CWinThread::m_hThread</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Handle to the current thread.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__m_nthreadid">CWinThread::m_nThreadID</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>ID of the current thread.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__m_pactivewnd">CWinThread::m_pActiveWnd</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Pointer to the main window of the container application when an OLE server is in-place active.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cwinthread__m_pmainwnd">CWinThread::m_pMainWnd</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Holds a pointer to the application's main window.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <languageReferenceRemarks>
        <content>
            <para>The main thread of execution is usually provided by an object derived from <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>; <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> is derived from <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference>. Additional <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> objects allow multiple threads within a given application.</para>
            <para>There are two general types of threads that <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> supports: worker threads and user-interface threads. Worker threads have no message pump: for example, a thread that performs background calculations in a spreadsheet application. User-interface threads have a message pump and process messages received from the system. <legacyLink xlink:href="e426a3cd-0d15-40d6-bd55-beaa5feb2343">CWinApp</legacyLink> and classes derived from it are examples of user-interface threads. Other user-interface threads can also be derived directly from <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference>.</para>
            <para>Objects of class <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> typically exist for the duration of the thread. If you wish to modify this behavior, set <legacyLink xlink:href="#cwinthread__m_bautodelete">m_bAutoDelete</legacyLink> to <legacyBold>FALSE</legacyBold>.</para>
            <para>The <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> class is necessary to make your code and MFC fully thread-safe. Thread-local data used by the framework to maintain thread-specific information is managed by <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> objects. Because of this dependence on <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> to handle thread-local data, any thread that uses MFC must be created by MFC. For example, a thread created by the run-time function <legacyLink xlink:href="0df64740-a978-4358-a88f-fb0702720091">_beginthread, _beginthreadex</legacyLink> cannot use any MFC APIs.</para>
            <para>To create a thread, call <legacyLink xlink:href="e9e8684d-24f7-4599-8fdf-1f4f560a753b">AfxBeginThread</legacyLink>. There are two forms, depending on whether you want a worker or user-interface thread. If you want a user-interface thread, pass to <unmanagedCodeEntityReference>AfxBeginThread</unmanagedCodeEntityReference> a pointer to the <unmanagedCodeEntityReference>CRuntimeClass</unmanagedCodeEntityReference> of your <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference>-derived class. If you want to create a worker thread, pass to <unmanagedCodeEntityReference>AfxBeginThread</unmanagedCodeEntityReference> a pointer to the controlling function and the parameter to the controlling function. For both worker threads and user-interface threads, you can specify optional parameters that modify priority, stack size, creation flags, and security attributes. <unmanagedCodeEntityReference>AfxBeginThread</unmanagedCodeEntityReference> will return a pointer to your new <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object. </para>
            <para>Instead of calling <unmanagedCodeEntityReference>AfxBeginThread</unmanagedCodeEntityReference>, you can construct a <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference>-derived object and then call <unmanagedCodeEntityReference>CreateThread</unmanagedCodeEntityReference>. This two-stage construction method is useful if you want to reuse the <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object between successive creation and terminations of thread executions.</para>
            <para>For more information on <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference>, see the articles <legacyLink xlink:href="979605f8-3988-44b5-ac9c-b8cce7fcce14">Multithreading with C++ and MFC</legacyLink>, <legacyLink xlink:href="446925c1-db59-46ea-ae5b-d5ae5d5b91d8">Multithreading: Creating User-Interface Threads</legacyLink>, <legacyLink xlink:href="670adbfe-041c-4450-a3ed-be14aab15234">Multithreading: Creating Worker Threads</legacyLink>, and <legacyLink xlink:href="f266d4c6-0454-4bda-9758-26157ef74cc5">Multithreading: How to Use the Synchronization Classes</legacyLink>.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <legacyLink xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">CCmdTarget</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxwin.h</para>
        </content>
    </requirements>
    <section address="cwinthread__createthread">
        <!--a62f618d-d48b-4f77-bdc0-ee9f17306f9f-->
        <title>CWinThread::CreateThread</title>
        <content>
            <para>Creates a thread to execute within the address space of the calling process.</para>
            <legacySyntax>BOOL CreateThread(
    DWORD dwCreateFlags = 0,
    UINT nStackSize = 0,
    LPSECURITY_ATTRIBUTES lpSecurityAttrs = NULL );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwCreateFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies an additional flag that controls the creation of the thread. This flag can contain one of two values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>CREATE_SUSPENDED</legacyBold>   Start the thread with a suspend count of one. Use <legacyBold>CREATE_SUSPENDED</legacyBold> if you want to initialize any member data of the <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object, such as <legacyLink xlink:href="#cwinthread__m_bautodelete">m_bAutoDelete</legacyLink> or any members of your derived class, before the thread starts running. Once your initialization is complete, use the <legacyLink xlink:href="#cwinthread__resumethread">CWinThread::ResumeThread</legacyLink> to start the thread running. The thread will not execute until <unmanagedCodeEntityReference>CWinThread::ResumeThread</unmanagedCodeEntityReference> is called.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>0</legacyBold>   Start the thread immediately after creation.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>nStackSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the size in bytes of the stack for the new thread. If <legacyBold>0</legacyBold>, the stack size defaults to the same size as that of the process's primary thread.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpSecurityAttrs</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <externalLink> <linkText>SECURITY_ATTRIBUTES</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/aa379560</linkUri>
                                </externalLink> structure that specifies the security attributes for the thread.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the thread is created successfully; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use <unmanagedCodeEntityReference>AfxBeginThread</unmanagedCodeEntityReference> to create a thread object and execute it in one step. Use <unmanagedCodeEntityReference>CreateThread</unmanagedCodeEntityReference> if you want to reuse the thread object between successive creation and termination of thread executions.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__cwinthread">
        <!--b7cc4951-978f-4bb0-af2a-dd5cb93d7989-->
        <title>CWinThread::CWinThread</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CWinThread();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>To begin the thread's execution, call the <legacyLink xlink:href="#cwinthread__createthread">CreateThread</legacyLink> member function. You will usually create threads by calling <legacyLink xlink:href="e9e8684d-24f7-4599-8fdf-1f4f560a753b">AfxBeginThread</legacyLink>, which will call this constructor and <unmanagedCodeEntityReference>CreateThread</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__exitinstance">
        <!--e20c394d-b71d-40a7-9f85-b474bc17efc9-->
        <title>CWinThread::ExitInstance</title>
        <content>
            <para>Called by the framework from within a rarely overridden <legacyLink xlink:href="#cwinthread__run">Run</legacyLink> member function to exit this instance of the thread, or if a call to <legacyLink xlink:href="#cwinthread__initinstance">InitInstance</legacyLink> fails.</para>
            <legacySyntax>virtual int ExitInstance();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The thread's exit code; 0 indicates no errors, and values greater than 0 indicate an error. This value can be retrieved by calling                         <externalLink> <linkText>GetExitCodeThread</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms683190</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Do not call this member function from anywhere but within the <legacyBold>Run</legacyBold> member function. This member function is used only in user-interface threads.</para>
                    <para>The default implementation of this function deletes the <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object if <legacyLink xlink:href="#cwinthread__m_bautodelete">m_bAutoDelete</legacyLink> is <legacyBold>TRUE</legacyBold>. Override this function if you wish to perform additional clean-up when your thread terminates. Your implementation of <unmanagedCodeEntityReference>ExitInstance</unmanagedCodeEntityReference> should call the base class's version after your code is executed.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__getmainwnd">
        <!--85e70750-4e26-4d35-a8a8-c1d58db10ce7-->
        <title>CWinThread::GetMainWnd</title>
        <content>
            <para>If your application is an OLE server, call this function to retrieve a pointer to the active main window of the application instead of directly referring to the <unmanagedCodeEntityReference>m_pMainWnd</unmanagedCodeEntityReference> member of the application object.</para>
            <legacySyntax>virtual CWnd * GetMainWnd();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>This function returns a pointer to one of two types of windows. If your thread is part of an OLE server and has an object that is in-place active inside an active container, this function returns the <legacyLink xlink:href="e426a3cd-0d15-40d6-bd55-beaa5feb2343#cwinapp__m_pactivewnd">CWinApp::m_pActiveWnd</legacyLink> data member of the <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object. </para>
                    <para>If there is no object that is in-place active within a container or your application is not an OLE server, this function returns the <legacyLink xlink:href="#cwinthread__m_pmainwnd">m_pMainWnd</legacyLink> data member of your thread object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For user-interface threads, this is equivalent to directly referring to the <unmanagedCodeEntityReference>m_pActiveWnd</unmanagedCodeEntityReference> member of your application object.</para>
                    <para>If your application is not an OLE server, then calling this function is equivalent to directly referring to the <unmanagedCodeEntityReference>m_pMainWnd</unmanagedCodeEntityReference> member of your application object.</para>
                    <para>Override this function to modify the default behavior.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__getthreadpriority">
        <!--d85c7f70-0c8d-450e-8a4d-300195c54cf7-->
        <title>CWinThread::GetThreadPriority</title>
        <content>
            <para>Gets the current thread priority level of this thread.</para>
            <legacySyntax>int GetThreadPriority();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current thread priority level within its priority class. The value returned will be one of the following, listed from highest priority to lowest:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>THREAD_PRIORITY_TIME_CRITICAL</legacyBold>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>THREAD_PRIORITY_HIGHEST</legacyBold>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>THREAD_PRIORITY_ABOVE_NORMAL</legacyBold>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>THREAD_PRIORITY_NORMAL</legacyBold>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>THREAD_PRIORITY_BELOW_NORMAL</legacyBold>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>THREAD_PRIORITY_LOWEST</legacyBold>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>THREAD_PRIORITY_IDLE</legacyBold>
                            </para>
                        </listItem>
                    </list>
                    <para>For more information on these priorities, see                         <externalLink> <linkText>SetThreadPriority</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms686277</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__initinstance">
        <!--346176e4-9dcf-4d00-bee7-48b307328991-->
        <title>CWinThread::InitInstance</title>
        <content>
            <para> <unmanagedCodeEntityReference>InitInstance</unmanagedCodeEntityReference> must be overridden to initialize each new instance of a user-interface thread.</para>
            <legacySyntax>virtual BOOL InitInstance();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if initialization is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Typically, you override <unmanagedCodeEntityReference>InitInstance</unmanagedCodeEntityReference> to perform tasks that must be completed when a thread is first created. </para>
                    <para>This member function is used only in user-interface threads. Perform initialization of worker threads in the controlling function passed to <legacyLink xlink:href="e9e8684d-24f7-4599-8fdf-1f4f560a753b">AfxBeginThread</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__isidlemessage">
        <!--d80163ee-53a8-49fa-a5cc-bd17d4749f27-->
        <title>CWinThread::IsIdleMessage</title>
        <content>
            <para>Override this function to keep <legacyBold>OnIdle </legacyBold>from being called after specific messages are generated.</para>
            <legacySyntax>virtual BOOL IsIdleMessage( MSG* pMsg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the current message being processed.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> should be called after processing message; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default implementation does not call <legacyBold>OnIdle </legacyBold>after redundant mouse messages and messages generated by blinking carets.</para>
                    <para>If an application has created a short timer, <legacyBold>OnIdle </legacyBold>will be called frequently, causing performance problems. To improve such an application's performance, override <unmanagedCodeEntityReference>IsIdleMessage</unmanagedCodeEntityReference> in the application's <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference>-derived class to check for <unmanagedCodeEntityReference>WM_TIMER</unmanagedCodeEntityReference> messages as follows:</para>
                    <codeReference>NVC_MFCDocView#189</codeReference>
                    <para>Handling <unmanagedCodeEntityReference>WM_TIMER</unmanagedCodeEntityReference> in this fashion will improve performance of applications that use short timers. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__m_bautodelete">
        <!--c4cd5f2a-31f9-45fe-8bfe-ef5af16d699c-->
        <title>CWinThread::m_bAutoDelete</title>
        <content>
            <para>Specifies whether the <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object should be automatically deleted at thread termination.</para>
            <legacySyntax>BOOL m_bAutoDelete;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>m_bAutoDelete</unmanagedCodeEntityReference> data member is a public variable of type <legacyBold>BOOL</legacyBold>.</para>
                    <para>The value of <unmanagedCodeEntityReference>m_bAutoDelete</unmanagedCodeEntityReference> does not affect how the underlying thread handle is closed. The thread handle is always closed when the <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object is destroyed.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__m_hthread">
        <!--fe288030-72ea-4839-bea5-6575865c3533-->
        <title>CWinThread::m_hThread</title>
        <content>
            <para>Handle to the thread attached to this <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference>.</para>
            <legacySyntax>HANDLE m_hThread;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>m_hThread</unmanagedCodeEntityReference> data member is a public variable of type <unmanagedCodeEntityReference>HANDLE</unmanagedCodeEntityReference>. It is only valid if underlying thread currently exists.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__m_nthreadid">
        <!--20bfe043-48ac-4156-80b2-deea74e82dbc-->
        <title>CWinThread::m_nThreadID</title>
        <content>
            <para>ID of the thread attached to this <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference>.</para>
            <legacySyntax>DWORD m_nThreadID;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <legacyBold>m_nThreadID</legacyBold> data member is a public variable of type <unmanagedCodeEntityReference>DWORD</unmanagedCodeEntityReference>. It is only valid if underlying thread currently exists.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="75e7a519-c7e2-4ab0-ae05-20bb53e5df08">AfxGetThread</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__m_pactivewnd">
        <!--1148a727-fb61-497a-8ab9-6c0d2c975965-->
        <title>CWinThread::m_pActiveWnd</title>
        <content>
            <para>Use this data member to store a pointer to your thread's active window object.</para>
            <legacySyntax>CWnd* m_pActiveWnd;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The Microsoft Foundation Class Library will automatically terminate your thread when the window referred to by <unmanagedCodeEntityReference>m_pActiveWnd</unmanagedCodeEntityReference> is closed. If this thread is the primary thread for an application, the application will also be terminated. If this data member is <legacyBold>NULL</legacyBold>, the active window for the application's <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> object will be inherited. <unmanagedCodeEntityReference>m_pActiveWnd</unmanagedCodeEntityReference> is a public variable of type <legacyBold>CWnd*</legacyBold>.</para>
                    <para>Typically, you set this member variable when you override <unmanagedCodeEntityReference>InitInstance</unmanagedCodeEntityReference>. In a worker thread, the value of this data member is inherited from its parent thread.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__m_pmainwnd">
        <!--0ba89a46-25ef-4208-8ee5-4cb9f1f8f096-->
        <title>CWinThread::m_pMainWnd</title>
        <content>
            <para>Use this data member to store a pointer to your thread's main window object.</para>
            <legacySyntax>CWnd* m_pMainWnd;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The Microsoft Foundation Class Library will automatically terminate your thread when the window referred to by <unmanagedCodeEntityReference>m_pMainWnd</unmanagedCodeEntityReference> is closed. If this thread is the primary thread for an application, the application will also be terminated. If this data member is <legacyBold>NULL</legacyBold>, the main window for the application's <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> object will be used to determine when to terminate the thread. <unmanagedCodeEntityReference>m_pMainWnd</unmanagedCodeEntityReference> is a public variable of type <legacyBold>CWnd*</legacyBold>.</para>
                    <para>Typically, you set this member variable when you override <unmanagedCodeEntityReference>InitInstance</unmanagedCodeEntityReference>. In a worker thread, the value of this data member is inherited from its parent thread.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__onidle">
        <!--d0ae16c9-4ade-4572-bd93-b46a3fdef726-->
        <title>CWinThread::OnIdle</title>
        <content>
            <para>Override this member function to perform idle-time processing.</para>
            <legacySyntax>virtual BOOL OnIdle( LONG lCount );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A counter incremented each time <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> is called when the thread's message queue is empty. This count is reset to 0 each time a new message is processed. You can use the <parameterReference>lCount</parameterReference> parameter to determine the relative length of time the thread has been idle without processing a message.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero to receive more idle processing time; 0 if no more idle processing time is needed.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> is called in the default message loop when the thread's message queue is empty. Use your override to call your own background idle-handler tasks.</para>
                    <para> <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> should return 0 to indicate that no additional idle processing time is required. The <parameterReference>lCount</parameterReference> parameter is incremented each time <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> is called when the message queue is empty and is reset to 0 each time a new message is processed. You can call your different idle routines based on this count.</para>
                    <para>The default implementation of this member function frees temporary objects and unused dynamic link libraries from memory.</para>
                    <para>This member function is used only in user-interface threads.</para>
                    <para>Because the application cannot process messages until <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> returns, do not perform lengthy tasks in this function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__operator_handle">
        <!--083f2fb3-4353-4ed5-8dee-cdb659b0b0b2-->
        <title>CWinThread::operator HANDLE</title>
        <content>
            <para>Retrieves the handle of the <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>operator HANDLE() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If successful, the handle of the thread object; otherwise, <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use the handle to directly call Windows APIs.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__postthreadmessage">
        <!--23b5c524-b0e3-402e-baf8-bed1ba4b2a3b-->
        <title>CWinThread::PostThreadMessage</title>
        <content>
            <para>Called to post a user-defined message to another <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>BOOL PostThreadMessage(
    UINT message,
    WPARAM wParam,
    LPARAM lParam );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>message</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>ID of the user-defined message.</para>
                        </definition>
                        <definedTerm> <parameterReference>wParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>First message parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>lParam</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Second message parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The posted message is mapped to the proper message handler by the message map macro <unmanagedCodeEntityReference>ON_THREAD_MESSAGE</unmanagedCodeEntityReference>.</para>
                    <alert class="note">
                        <para>When calling the Windows                             <externalLink> <linkText>PostThreadMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644946</linkUri>
                            </externalLink> function within an MFC application, the MFC message handlers are not called. For more information, see the Knowledge Base article, "PRB: MFC Message Handler Not Called with PostThreadMessage()" (Q142415).</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__pretranslatemessage">
        <!--d726346b-2f3c-4f0e-9bb2-d67084ce4b21-->
        <title>CWinThread::PreTranslateMessage</title>
        <content>
            <para>Override this function to filter window messages before they are dispatched to the Windows functions                 <externalLink> <linkText>TranslateMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644955</linkUri>
                </externalLink> and                 <externalLink> <linkText>DispatchMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644934</linkUri>
                </externalLink>.</para>
            <legacySyntax>virtual BOOL PreTranslateMessage( MSG * pMsg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a "MSG" structure containing the message to process.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the message was fully processed in <unmanagedCodeEntityReference>PreTranslateMessage</unmanagedCodeEntityReference> and should not be processed further. Zero if the message should be processed in the normal way.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function is used only in user-interface threads.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__processmessagefilter">
        <!--f867a047-1285-45da-8fb3-c745cfab5e1a-->
        <title>CWinThread::ProcessMessageFilter</title>
        <content>
            <para>The framework's hook function calls this member function to filter and respond to certain Windows messages.</para>
            <legacySyntax>virtual BOOL ProcessMessageFilter(
    int code,
    LPMSG lpMsg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>code</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies a hook code. This member function uses the code to determine how to process <parameterReference>lpMsg.</parameterReference>
                            </para>
                        </definition>
                        <definedTerm> <parameterReference>lpMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a Windows "MSG" structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the message is processed; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A hook function processes events before they are sent to the application's normal message processing.</para>
                    <para>If you override this advanced feature, be sure to call the base-class version to maintain the framework's hook processing.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__processwndprocexception">
        <!--af8ab4de-24e1-4ea7-b7da-cfed98d726cd-->
        <title>CWinThread::ProcessWndProcException</title>
        <content>
            <para>The framework calls this member function whenever the handler does not catch an exception thrown in one of your thread's message or command handlers.</para>
            <legacySyntax>virtual LRESULT ProcessWndProcException(
    CException * e,
    const MSG * pMsg );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>e</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to an unhandled exception.</para>
                        </definition>
                        <definedTerm> <parameterReference>pMsg</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a "MSG" structure containing information about the windows message that caused the framework to throw an exception.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>–1 if a <unmanagedCodeEntityReference>WM_CREATE</unmanagedCodeEntityReference> exception is generated; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Do not call this member function directly.</para>
                    <para>The default implementation of this member function handles only exceptions generated from the following messages:</para>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Command</para>
                                </TD>
                                <TD>
                                    <para>Action</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>WM_CREATE</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fail.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>WM_PAINT</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Validate the affected window, thus preventing another <unmanagedCodeEntityReference>WM_PAINT</unmanagedCodeEntityReference> message from being generated.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                    <para>Override this member function to provide global handling of your exceptions. Call the base functionality only if you wish to display the default behavior.</para>
                    <para>This member function is used only in threads that have a message pump.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__pumpmessage">
        <!--04c22d38-7a1d-4eb7-8974-6b1c26e20a16-->
        <title>CWinThread::PumpMessage</title>
        <content>
            <para>Contains the thread's message loop.</para>
            <legacySyntax>virtual BOOL PumpMessage();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>PumpMessage</unmanagedCodeEntityReference> contains the thread's message loop. <legacyBold>PumpMessage </legacyBold>is called by <unmanagedCodeEntityReference>CWinThread</unmanagedCodeEntityReference> to pump the thread's messages. You can call <unmanagedCodeEntityReference>PumpMessage</unmanagedCodeEntityReference> directly to force messages to be processed, or you can override <unmanagedCodeEntityReference>PumpMessage</unmanagedCodeEntityReference> to change its default behavior.</para>
                    <para>Calling <unmanagedCodeEntityReference>PumpMessage</unmanagedCodeEntityReference> directly and overriding its default behavior is recommended for advanced users only.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__resumethread">
        <!--d6f97a2f-5c9f-4ee1-b978-d74938784db5-->
        <title>CWinThread::ResumeThread</title>
        <content>
            <para>Called to resume execution of a thread that was suspended by the <legacyLink xlink:href="#cwinthread__suspendthread">SuspendThread</legacyLink> member function, or a thread created with the <legacyBold>CREATE_SUSPENDED</legacyBold> flag.</para>
            <legacySyntax>DWORD ResumeThread();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The thread's previous suspend count if successful; <codeInline>0xFFFFFFFF</codeInline> otherwise. If the return value is zero, the current thread was not suspended. If the return value is one, the thread was suspended, but is now restarted. Any return value greater than one means the thread remains suspended.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The suspend count of the current thread is reduced by one. If the suspend count is reduced to zero, the thread resumes execution; otherwise the thread remains suspended.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__run">
        <!--1aa41001-7295-4159-a8f9-74d460acd1b1-->
        <title>CWinThread::Run</title>
        <content>
            <para>Provides a default message loop for user-interface threads.</para>
            <legacySyntax>virtual int Run();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An <languageKeyword>int</languageKeyword> value that is returned by the thread. This value can be retrieved by calling                         <externalLink> <linkText>GetExitCodeThread</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms683190</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <legacyBold>Run</legacyBold> acquires and dispatches Windows messages until the application receives a                         <externalLink> <linkText>WM_QUIT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms632641</linkUri>
                        </externalLink> message. If the thread's message queue currently contains no messages, <legacyBold>Run</legacyBold> calls <unmanagedCodeEntityReference>OnIdle</unmanagedCodeEntityReference> to perform idle-time processing. Incoming messages go to the <legacyLink xlink:href="#cwinthread__pretranslatemessage">PreTranslateMessage</legacyLink> member function for special processing and then to the Windows function                         <externalLink> <linkText>TranslateMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644955</linkUri>
                        </externalLink> for standard keyboard translation. Finally, the                         <externalLink> <linkText>DispatchMessage</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms644934</linkUri>
                        </externalLink> Windows function is called. </para>
                    <para> <legacyBold>Run</legacyBold> is rarely overridden, but you can override it to implement special behavior.</para>
                    <para>This member function is used only in user-interface threads.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__setthreadpriority">
        <!--64a5499f-545c-48c3-9003-470a41ee001f-->
        <title>CWinThread::SetThreadPriority</title>
        <content>
            <para>This function sets the priority level of the current thread within its priority class.</para>
            <legacySyntax>BOOL SetThreadPriority( int nPriority );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nPriority</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new thread priority level within its priority class. This parameter must be one of the following values, listed from highest priority to lowest:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>THREAD_PRIORITY_TIME_CRITICAL</legacyBold>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>THREAD_PRIORITY_HIGHEST</legacyBold>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>THREAD_PRIORITY_ABOVE_NORMAL</legacyBold>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>THREAD_PRIORITY_NORMAL</legacyBold>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>THREAD_PRIORITY_BELOW_NORMAL</legacyBold>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>THREAD_PRIORITY_LOWEST</legacyBold>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>THREAD_PRIORITY_IDLE</legacyBold>
                                    </para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                    <para>For more information on these priorities, see                         <externalLink> <linkText>SetThreadPriority</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms686277</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if function was successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>It can only be called after <legacyLink xlink:href="#cwinthread__createthread">CreateThread</legacyLink> successfully returns.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cwinthread__suspendthread">
        <!--57189c7e-fd71-42e5-bc4b-3de7cd373d28-->
        <title>CWinThread::SuspendThread</title>
        <content>
            <para>Increments the current thread's suspend count.</para>
            <legacySyntax>DWORD SuspendThread();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The thread's previous suspend count if successful; <codeInline>0xFFFFFFFF</codeInline> otherwise. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If any thread has a suspend count above zero, that thread does not execute. The thread can be resumed by calling the <legacyLink xlink:href="#cwinthread__resumethread">ResumeThread</legacyLink> member function.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="e426a3cd-0d15-40d6-bd55-beaa5feb2343">CWinApp</link> <link xlink:href="8883b132-2057-4ce0-a5f2-88979f8f2b13">CCmdTarget</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



