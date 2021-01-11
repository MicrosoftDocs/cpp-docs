---
description: "Learn more about: Multithreading: Terminating Threads in MFC"
title: "Multithreading: Terminating Threads in MFC"
ms.date: "08/27/2018"
helpviewer_keywords: ["premature thread termination", "starting threads", "threading [MFC], terminating threads", "multithreading [C++], terminating threads", "threading [C++], stopping threads", "terminating threads", "stopping threads", "AfxEndThread method"]
ms.assetid: 4c0a8c6d-c02f-456d-bd02-0a8c8d006ecb
---
# Multithreading: Terminating Threads in MFC

Two normal situations cause a thread to terminate: the controlling function exits or the thread is not allowed to run to completion. If a word processor used a thread for background printing, the controlling function would terminate normally if printing completed successfully. If the user wants to cancel the printing, however, the background printing thread has to be terminated prematurely. This topic explains both how to implement each situation and how to get the exit code of a thread after it terminates.

- [Normal Thread Termination](#_core_normal_thread_termination)

- [Premature Thread Termination](#_core_premature_thread_termination)

- [Retrieving the Exit Code of a Thread](#_core_retrieving_the_exit_code_of_a_thread)

## <a name="_core_normal_thread_termination"></a> Normal Thread Termination

For a worker thread, normal thread termination is simple: Exit the controlling function and return a value that signifies the reason for termination. You can use either the [AfxEndThread](../mfc/reference/application-information-and-management.md#afxendthread) function or a **`return`** statement. Typically, 0 signifies successful completion, but that is up to you.

For a user-interface thread, the process is just as simple: from within the user-interface thread, call [PostQuitMessage](/windows/win32/api/winuser/nf-winuser-postquitmessage) in the Windows SDK. The only parameter that `PostQuitMessage` takes is the exit code of the thread. As for worker threads, 0 typically signifies successful completion.

## <a name="_core_premature_thread_termination"></a> Premature Thread Termination

Terminating a thread prematurely is almost as simple: Call [AfxEndThread](../mfc/reference/application-information-and-management.md#afxendthread) from within the thread. Pass the desired exit code as the only parameter. This stops execution of the thread, deallocates the thread's stack, detaches all DLLs attached to the thread, and deletes the thread object from memory.

`AfxEndThread` must be called from within the thread to be terminated. If you want to terminate a thread from another thread, you must set up a communication method between the two threads.

## <a name="_core_retrieving_the_exit_code_of_a_thread"></a> Retrieving the Exit Code of a Thread

To get the exit code of either the worker or the user-interface thread, call the [GetExitCodeThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getexitcodethread) function. For information about this function, see the Windows SDK. This function takes the handle to the thread (stored in the `m_hThread` data member of `CWinThread` objects) and the address of a DWORD.

If the thread is still active, `GetExitCodeThread` places STILL_ACTIVE in the supplied DWORD address; otherwise, the exit code is placed in this address.

Retrieving the exit code of [CWinThread](../mfc/reference/cwinthread-class.md) objects takes an extra step. By default, when a `CWinThread` thread terminates, the thread object is deleted. This means you cannot access the `m_hThread` data member because the `CWinThread` object no longer exists. To avoid this situation, do one of the following:

- Set the `m_bAutoDelete` data member to FALSE. This allows the `CWinThread` object to survive after the thread has been terminated. You can then access the `m_hThread` data member after the thread has been terminated. If you use this technique, however, you are responsible for destroying the `CWinThread` object because the framework will not automatically delete it for you. This is the preferred method.

- Store the thread's handle separately. After the thread is created, copy its `m_hThread` data member (using `::DuplicateHandle`) to another variable and access it through that variable. This way the object is deleted automatically when termination occurs and you can still find out why the thread terminated. Be careful that the thread does not terminate before you can duplicate the handle. The safest way to do this is to pass CREATE_SUSPENDED to [AfxBeginThread](../mfc/reference/application-information-and-management.md#afxbeginthread), store the handle, and then resume the thread by calling [ResumeThread](../mfc/reference/cwinthread-class.md#resumethread).

Either method allows you to determine why a `CWinThread` object terminated.

## See also

[Multithreading with C++ and MFC](multithreading-with-cpp-and-mfc.md)<br/>
[_endthread, _endthreadex](../c-runtime-library/reference/endthread-endthreadex.md)<br/>
[_beginthread, _beginthreadex](../c-runtime-library/reference/beginthread-beginthreadex.md)<br/>
[ExitThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-exitthread)
