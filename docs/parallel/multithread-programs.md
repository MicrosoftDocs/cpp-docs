---
title: "Multithread Programs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["threading [C++], about threading", "multithreading [C++], about threads"]
ms.assetid: 02443596-f7e1-48d0-b3a4-39ee0e54e444
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Multithread Programs
A thread is basically a path of execution through a program. It is also the smallest unit of execution that Win32 schedules. A thread consists of a stack, the state of the CPU registers, and an entry in the execution list of the system scheduler. Each thread shares all the process's resources.  
  
 A process consists of one or more threads and the code, data, and other resources of a program in memory. Typical program resources are open files, semaphores, and dynamically allocated memory. A program executes when the system scheduler gives one of its threads execution control. The scheduler determines which threads should run and when they should run. Threads of lower priority might have to wait while higher priority threads complete their tasks. On multiprocessor machines, the scheduler can move individual threads to different processors to balance the CPU load.  
  
 Each thread in a process operates independently. Unless you make them visible to each other, the threads execute individually and are unaware of the other threads in a process. Threads sharing common resources, however, must coordinate their work by using semaphores or another method of interprocess communication. For more information about synchronizing threads, see [Writing a Multithreaded Win32 Program](../parallel/writing-a-multithreaded-win32-program.md).  
  
## See Also  
 [Multithreading with C and Win32](../parallel/multithreading-with-c-and-win32.md)