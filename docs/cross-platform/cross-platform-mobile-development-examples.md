---
description: "Learn more about: Cross-platform mobile development examples"
title: "Cross-platform mobile development examples"
ms.date: 03/04/2024
---
# Cross-platform mobile development examples

> [!IMPORTANT]
> Starting with Visual Studio 2026 (version 18.0), the Mobile development with C++ workload for iOS and Android, as well as the Embedded and IoT tools (RTOS Viewer, Serial Monitor, Peripheral Viewer, and ST Project Import), are no longer supported and will be removed in a future update. The Android NDKs included in the Mobile development with C++ workload remain supported.

Several of the templates installed by the **Mobile development with C++** workload generate complete examples that you can use to learn from. Additionally, here are some example applications that you can download and try out in Visual Studio.

- [hello-jni Android Application Sample](https://github.com/android/ndk-samples/tree/master/hello-jni)

   This sample is a port of the Android NDK hello-jni application. The sample demonstrates an end-to-end Java Native Interface "Hello World" app. It loads a string from a native method implemented in a shared library, and then displays it in the app.

- [TwoLibs Android Library Sample](https://github.com/microsoftarchive/msdn-code-gallery-community-s-z/tree/master/TwoLibs%20Android%20Library%20Sample)

   This sample is a port of the Android NDK TwoLibs sample. It uses both a dynamically loaded shared library and a static C++ Android native library that implements a method called from a Java Native Interface app. This sample is a good starting point for developers to understand how to use static/dynamic shared libraries to build an end-to-end JNI Android application with Visual Studio.

- [test-libstdcpp Android Library Sample](https://github.com/microsoftarchive/msdn-code-gallery-community-s-z/tree/master/test-libstdcpp%20Android%20Library%20Sample)

   This sample is a port of the Android NDK test-libstdc++ sample, specifically for use with Visual Studio. This sample is a good starting point for developers to understand how to use the Standard Library.

  To open one of the examples in Visual Studio, download the zip file and open the **Properties** page of the downloaded file in Explorer. Choose the **Unblock** button then choose **OK**. Extract the contents of the zip file to a convenient location, then open the C++ folder in the extracted sample and open the solution file.

  To build the sample, press **F7**, or on the menu bar, choose **Build**, **Build Solution**.

## See also

[Android NDK samples](https://github.com/android/ndk-samples/tree/master/)
