---
description: "Learn more about: Cross-platform mobile development with C++"
title: "Cross-platform mobile development with C++"
ms.date: "11/14/2019"
ms.assetid: 0bb872d6-981b-4c96-9143-fcec5336bf0d
---
# Cross-platform mobile development with C++

You can build native C++ apps for iOS, Android, and Windows devices by using the cross-platform tools available in Visual Studio. **Mobile development with C++** is a workload available in the Visual Studio installer. It installs the SDKs and tools you need for cross-platform development of shared libraries and native apps. When it's installed, you can use C++ to create code that runs on iOS and Android devices and platforms, Windows, Windows Store, and Xbox.

Writing code for multiple platforms is often frustrating. The primary development languages and tools for iOS, Android, and Windows are different on each platform. However, all platforms support writing code in C++. It's the common denominator that can enable reuse of core code across platforms. Native code written in C++ can be both more performant and resistant to reverse engineering. Code reuse can save both time and effort when creating apps for multiple platforms.

Development using C++ for cross-platform mobile development has several advantages:

- **Easy installation.** The Visual Studio installer acquires and installs the required third-party tools and SDKs you need to build apps or libraries for Android and iOS. Configuration and setup are simple and mostly automatic.

- **A powerful and familiar build environment.** Create sharable cross-platform solutions and projects easily with Visual Studio templates. Manage properties for all projects using one common interface. Edit all your code in the Visual Studio editor, and take advantage of the built-in cross-platform IntelliSense for code completion and error highlighting.

- **A unified debugging experience.** Use the world-class debugging tools in Visual Studio to watch and step through C++ code on all platforms: Android devices and emulators, iOS simulators and devices, and Windows or Windows Store devices and emulators.

## Get the tools

Mobile development with C++ is an installable workload that comes with Visual Studio. For prerequisites and installation instructions, see [Install cross-platform mobile development with C++](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md). To build code for iOS, you also need a Mac computer and an Apple iOS Developer Account. For more information, see [Install and configure tools to build using iOS](../cross-platform/install-and-configure-tools-to-build-using-ios.md).

## Come up to speed

If you're coming from Android or iOS development, we have some great material on how to get started. Visual Studio is an expressive and capable development environment. To learn how to use it, try [Get started for Android developers](/previous-versions/windows/apps/dn275875\(v=win.10\)) or [Get started for iOS developers](/previous-versions/windows/apps/jj657966\(v=win.10\)). These articles introduce you to Visual Studio, and to the concepts you'll need to develop cross-platform apps for Windows and Windows Store. To get started writing your first cross-platform app for iOS and Android, see [Build an OpenGL ES application on Android and iOS](../cross-platform/build-an-opengl-es-application-on-android-and-ios.md).

The Mobile development with C++ workload includes several templates to help you get started on your apps:

- Native-Activity Application (Android)

  Creates a complete C++ OpenGL app as an Android Native Activity project.

- OpenGLES Application (Android, iOS)

  Creates a solution with a set of projects to build both an Android Native Activity app and an iOS app. These apps use platform-specific libraries created by using common C++ OpenGL ES code to draw the same spinning cube in each app.

- Shared Library (Android, iOS)

  Creates a solution with projects to create an Android dynamic library (.so) file and an iOS static library (.a) file by using common C++ code in a shared project.

- Basic Application (Android, Ant)

  Creates an Android "Hello, World" app project that uses only Java source code and the Ant build system.

- Basic Application (Android, Gradle)

  Creates an Android "Hello, World" app project that uses only Java source code and the Gradle build system.

- Basic Library (Android, Ant)

  Creates an Android "Hello, World" library project that uses only Java source code and the Ant build system.

- Basic Library (Android, Gradle)

  Creates an Android "Hello, World" library project that uses only Java source code and the Gradle build system.

- Dynamic Shared Library (Android)

  Creates an Android dynamic library (.so) file by using C++ code.

- OpenGLES 2 Application (iOS)

  Creates a solution with a set of projects to build an OpenGL ES 2 iOS app. The app uses a library of C++ OpenGL ES code to draw the spinning cube in an iOS app. This app can be a good starting point for seeing how to import C++ libraries into your iOS app.

- Static Library (Android)

  Creates a project to build a static library for Android. You can only link one dynamic library in an Android app, but you can link any number of static libraries.

- Static Library (iOS)

  Creates a project to build a static library for iOS.

- Makefile Project (Android)

  Creates a project wrapper for your own Android makefile projects.

## Try out sample code

Download samples that show how to create shared code libraries you can use in Windows, Android, and iOS apps. And, see examples of how to create complete Native Activity apps for Android. To get started, see [Cross-platform mobile development examples](../cross-platform/cross-platform-mobile-development-examples.md).

## See also

[Install cross-platform mobile development with C++](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md)\
[Install and configure tools to build using iOS](../cross-platform/install-and-configure-tools-to-build-using-ios.md)\
[Create an Android native activity app](../cross-platform/create-an-android-native-activity-app.md)\
[Build an OpenGL ES application on Android and iOS](../cross-platform/build-an-opengl-es-application-on-android-and-ios.md)\
[Cross-platform mobile development examples](../cross-platform/cross-platform-mobile-development-examples.md)
