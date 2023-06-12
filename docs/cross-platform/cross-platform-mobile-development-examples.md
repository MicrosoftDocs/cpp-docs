---
description: "Learn more about: Cross-platform mobile development examples"
title: "Cross-platform mobile development examples"
ms.date: "10/17/2019"
ms.assetid: bc384c12-fccc-45d7-9fb9-b90d536aa663
---
# Cross-platform mobile development examples

Several of the templates installed by the **Mobile development with C++** workload generate complete examples that you can use to learn from. Additionally, the Windows Dev Center has several example applications that you can download and try out in Visual Studio.

- [hello-jni Android Application Sample](https://code.msdn.microsoft.com/hello-jni-Android-790ab73d)

   This sample is a port of the Android NDK hello-jni application. The sample demonstrates an end-to-end Java Native Interface "Hello World" app. It loads a string from a native method implemented in a shared library, and then displays it in the app.

- [TwoLibs Android Library Sample](https://code.msdn.microsoft.com/TwoLibs-Android-Library-6396e5c4)

   This sample is a port of the Android NDK TwoLibs sample. It uses both a dynamically loaded shared library, and a static C++ Android native library, that implements a method called from a Java Native Interface app. This sample is a good starting point for developers to understand how to use static/dynamic shared libraries to build an end-to-end JNI Android application with Visual Studio.

- [test-libstdcpp Android Library Sample](https://code.msdn.microsoft.com/test-libstdcpp-Android-00b548f5)

   This sample is a port of the Android NDK test-libstdc++ sample, specifically for use with Visual Studio. This sample is a good starting point for developers to understand how to use the Standard Library.

  To open one of the examples in Visual Studio, download the zip file and open the **Properties** page of the downloaded file in Explorer. Choose the **Unblock** button then choose **OK**. Extract the contents of the zip file to a convenient location, then open the C++ folder in the extracted sample and open the solution file.

  To build the sample, press **F7**, or on the menu bar, choose **Build**, **Build Solution**.
