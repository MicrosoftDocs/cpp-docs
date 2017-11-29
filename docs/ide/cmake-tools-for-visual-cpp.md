---
title: "CMake Projects in Visual C++ | Microsoft Docs"
ms.custom: ""
ms.date: "08/08/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-ide"]
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: ["C++"]
helpviewer_keywords: ["CMake in Visual C++"]
ms.assetid: 444d50df-215e-4d31-933a-b41841f186f8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMake projects in Visual C++
This article assumes that you are familiar with CMake, a cross-platform, open-source tool for defining build processes that run on multiple platforms.  

Until recently, Visual Studio users could use CMake to generate MSBuild project files, which the IDE then consumed for IntelliSense, browsing, and compilation. Starting in Visual Studio 2017, the **Visual C++ Tools for CMake** component uses the "Open Folder" feature to enable the IDE to consume CMake project files (such as CMakeLists.txt) directly for the purposes of IntelliSense and browsing. If you use a Visual Studio generator, a temporary project file is generated and passed to msbuild.exe, but is never loaded for IntelliSense or browsing purposes. 

**Visual Studio 2017 version 15.3**: Support is provided for both Ninja and Visual Studio generators.

**Visual Studio 2017 version 15.4**: Support is added for CMake on Linux. For more information, see [Configure a Linux CMake Project](../linux/cmake-linux-project.md).

## Installing
Visual C++ Tools for CMake is installed by default as part of the Desktop development with C++ workload.

![CMake component in C++ Desktop workload](media/cmake-install.png)
 
## IDE Integration
When you choose **File | Open | Folder** to open a folder containing a CMakeLists.txt file, the following things happen:
- Visual Studio adds a **CMake** menu item to the main menu, with commands for viewing and editing CMake scripts. 
- **Solution Explorer** displays the folder structure and files. 
- Visual Studio runs CMake.exe and generates the CMake cache for the default *configuration*, which is x86 Debug. The CMake command line is displayed in the **Output Window**, along with additional output from CMake.
- In the background, Visual Studio starts to index the source files to enable IntelliSense, browsing information, refactoring, and so on. As you work, Visual Studio monitors changes in the editor and also on disk to keep its index in sync with the sources. 
You can open folders containing any number of CMake projects. Visual Studio detects and configures all the "root" CMakeLists.txt files in your workspace. CMake operations (configure, build, debug) as well as C++ IntelliSense and browsing are available to all CMake projects in your workspace.

![CMake project with multiple roots](media/cmake-multiple-roots.png) 

## Building CMake projects
To build a CMake project, you have these choices:
1. Select the target in the Debug dropdown and press **F5** or click the "Run" button. The project will automatically build first, just like with Visual Studio solutions.
2.	Right click on the CMakeLists.txt and select Build from the context menu. If you have multiple targets in your folder structure, you can choose to build all or only one specific target, or
  
3. From the main menu, select **Build | Build Solution** (**F7** or **Ctrl+Shift+B**) (make sure that a CMake target is already selected in the **Startup Item** dropdown in the **General** toolbar).

![CMake build menu command](media/cmake-build-menu.png) 
 
When a Visual Studio generator is selected for the active configuration, MSBuild.exe is invoked with `-m -v:minimal` arguments. To customize the build, inside the CMakeSettings.json file, you can specify additional command line arguments to be passed to the build system via the `buildCommandArgs` property:

```json
"buildCommandArgs": "-m:8 -v:minimal -p:PreferredToolArchitecture=x64"
```
As you would expect, build results are shown in the **Output Window** and **Error List**.
 
![CMake build errors](media/cmake-build-errors.png)

In a folder with multiple build targets, you can choose the Build item on the CMake menu or the CMakeLists.txt context menu to specify which CMake target to build. Pressing **Ctrl+Shift+B** in a CMake project builds the current active document. 

## Debugging the project
To debug a CMake project, choose the desired configuration and press **F5**, or press the Run button in the toolbar. If the Run button says "Select Startup Item", click on the down arrow and choose the target that you want to run. (In a CMake project, the "Current document" option is only valid for .cpp files.) 

 ![CMake run button](media/cmake-run-button.png)

 Pressing **F5** will first build the project if changes have been made since the previous build.

## Configuring CMake debugging sessions
All executable CMake targets are shown in the Startup Item dropdown in the General toolbar. To start a debugging session, just select one and launch the debugger.

 ![CMake startup item dropdown](media/cmake-startup-item-dropdown.png)

You can also start a debug session from the CMake menus.

To customize the debugger settings for any executable CMake target in your project, right-click on the specific CMakeLists.txt file and select **Debug and Launch Settings**, When you select a CMake target in the sub-menu, a file called launch.vs.json is created. This file is pre-populated with information about the CMake target you have selected and allows you to specify additional parameters such as program arguments or debugger type. To reference any key in a CMakeSettings.json file, preface it with "cmake." in launch.vs.json. The following example shows a simple launch.vs.json file that pulls in the value of the "remoteCopySources" key in the CMakeSettings.json file for the currently selected configuration:

```json
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
   {
      "type": "default",
      "project": "CMakeLists.txt",
      "projectTarget": "CMakeHelloWorld.exe (Debug\\CMakeHelloWorld.exe)",
      "name": "CMakeHelloWorld.exe (Debug\\CMakeHelloWorld.exe)",
      "args": ["${cmake.remoteCopySources}"]
    }
  ]
}
```
As soon as you save the launch.vs.json file, an entry is created in the Startup Item dropdown with the new name. By editing the launch.vs.json file, you can create as many debug configurations as you like for any number of CMake targets.

**Visual Studio 2017 version 15.4**: Launch.vs.json supports variables that are declared in CMakeSettings.json (see below). It also has a concept of the "currentDir", which will be set as the current directory of the launching app:

```json
{
"type": "default",
"project": "CMakeLists.txt",
"projectTarget": "CMakeHelloWorld1.exe (C:\\Users\\satyan\\CMakeBuilds\\Test\\Debug\\CMakeHelloWorld1.exe)",
"name": "CMakeHelloWorld1.exe (C:\\Users\\satyan\\CMakeBuilds\\Test\\Debug\\CMakeHelloWorld1.exe)",
"currentDir": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}"
}
```
When you run the app, the value of `currentDir` is 

```cmd
C:\Users\satyan\7f14809a-2626-873e-952e-cdf038211175\
```
 

## Editing CMakeLists.txt files
To edit a CMakeLists.txt file, right click on the file in **Solution Explorer** and choose **Open**. If you make changes to the file, a yellow status bar appears and informs you that IntelliSense will update, and gives you an opportunity to cancel the update operation. For information about CMakeLists.txt, see the [CMake documentation](https://cmake.org/documentation/).

  ![CMakeLists.txt file editing](media/cmake-cmakelists.png)

As soon as you save the file, the configuration step will automatically run again and display information in the Output Window. Errors and warnings are shown in the Error List or Output Window. Double-click on an error in the Error List to navigate to the offending line in CMakeLists.txt.

  ![CMakeLists.txt file errors](media/cmake-cmakelists-error.png)
 
## <a name="cmake_settings"></a> CMake settings and custom configurations
By default, Visual Studio provides six default CMake configurations ("x86-Debug", "x86-Release", "x64-Debug", "x64-Release", "Linux-Debug" and "Linux-Release"). These configurations define how CMake.exe is invoked to create the CMake cache for a given project. To modify these configurations, or create a new custom configuration, choose **CMake | Change CMake Setting**, and then choose the CMakeLists.txt file that the settings will apply to. The Change CMake Settings is also available on the file's context menu in **Solution Explorer**. This command creates a CMakeSettings.json file in the project folder. This file is used to re-create the CMake cache file, for example after a "Clean" operation. 

  ![CMake main menu command for change settings](media/cmake-change-settings.png)
 
JSON IntelliSense helps you edit the CMakeSettings.json file:

   ![CMake JSON IntelliSense](media/cmake-json-intellisense.png)

The following example shows a sample configuration, which you can use as the starting point to create your own in CMakeSettings.json:
```json
    {
      "name": "x86-Debug",
      "generator": "Ninja",
      "configurationType": "Debug",
      "inheritEnvironments": [ "msvc_x86" ],
      "buildRoot": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}\\build\\${name}",
      "installRoot": "${env.USERPROFILE}\\CMakeBuilds\\${workspaceHash}\\install\\${name}",
      "cmakeCommandArgs": "",
      "buildCommandArgs": "-v",
      "ctestCommandArgs": ""
    },

```
1.	name: the name that will appear in the C++ configuration dropdown. This property value can also be used as a macro `${name}` to specify other property values. For an example, see the "buildRoot" definition in CMakeSettings.json.
2.	generator: maps to the -G switch and specifies the generator to be used. This property can also be used as a macro `${generator}` to help specify other property values. Visual Studio currently supports the following CMake generators:
    - "Ninja"
    - "Visual Studio 14 2015"
    - "Visual Studio 14 2015 ARM"
    - "Visual Studio 14 2015 Win64"
    - "Visual Studio 15 2017"
    - "Visual Studio 15 2017 ARM"
    - "Visual Studio 15 2017 Win64"
    - 
Because Ninja is designed for fast builds speeds instead of flexibility and function, it is set as the default. However, some CMake projects may be unable to correctly build using Ninja. If this occurs, you can instruct CMake to generate a Visual Studio project instead. 

To specify a Visual Studio generator, open the CMakeSettings.json from the main menu by choosing **CMake | Change CMake Settings**. Delete “Ninja” and type “V”. This activates IntelliSense, which enables you to choose the generator you want.
3.	buildRoot: maps to -DCMAKE_BINARY_DIR switch and specifies where the CMake cache will be created. If the folder does not exist, it will be created.
4.	variables: contains a name+value pair of CMake variables that will get passed as -Dname=value to CMake. If your CMake project build instructions specify adding any variables directly to the CMake cache file, it is recommended that you add them here instead.
5.	cmakeCommandArgs: specifies any additional switches you want to pass to CMake.exe.
6.	configurationType: defines the build configuration type for the selected generator. Currently supported values are "Debug", "MinSizeRel", "Release", and "RelWithDebInfo".

### Environment variables
CMakeSettings.json also supports consuming environment variables in any of the properties mentioned above. The syntax to use is `${env.FOO}` to expand the environment variable %FOO%.
You also have access to built-in macros inside this file:
- `${workspaceRoot}` – provides the full path of the workspace folder
- `${workspaceHash}` – hash of workspace location; useful for creating a unique identifier for the current workspace (for example, to use in folder paths)
- `${projectFile}` – the full path of the root CMakeLists.txt file
- `${projectDir}` – the full path of the folder of the root CMakeLists.txt file
- `${thisFile}` – the full path of the CMakeSettings.json file
- `${name}` – the name of the configuration
- `${generator}` – the name of the CMake generator used in this configuration

### Ninja command line arguments

If targets are unspecified, builds the 'default' target (see manual).

```cmd
C:\Program Files (x86)\Microsoft Visual Studio\Preview\Enterprise>ninja -?
ninja: invalid option -- `-?'
usage: ninja [options] [targets...]
```

|Option|Description|  
|--------------|------------|  
| --version  | print ninja version ("1.7.1")| 
|   -C DIR   | change to DIR before doing anything else| 
|   -f FILE  | specify input build file [default=build.ninja]| 
|   -j N     | run N jobs in parallel [default=14, derived from CPUs available]| 
|   -k N     | keep going until N jobs fail [default=1]| 
|   -l N     | do not start new jobs if the load average is greater than N| 
|   -n      | dry run (don't run commands but act like they succeeded)| 
|   -v       | show all command lines while building| 
|   -d MODE  | enable debugging (use -d list to list modes)| 
|   -t TOOL  | run a subtool (use -t list to list subtools). terminates toplevel options; further flags are passed to the tool| 
|   -w FLAG  | adjust warnings (use -w list to list warnings)| 


### Inherited environments (Visual Studio 2017 version 15.5)

CmakeSettings.json now supports inherted environments. THis feature enables you to create a custom variable that :

```json
  "inheritEnvironments": [ "msvc_x64_x64" ]
```

This field sets up variables that are automatically passed to CMake.exe when it runs. The example above is the same as running the "Developer Command Prompt for VS 2017" with the `-arch=amd64 -host_arch=amd64` arguments.

The following table shows the supported values and their command line equivalents:

|Context Name|Description|  
|-----------|-----------------|
|vsdev|The default Visual Studio environment|
|msvc_x86|Compile for x86 using x86 tools|
|msvc_arm| Compile for ARM using x86 tools|
|msvc_arm64|Compile for ARM64 using x86 tools|
|msvc_x86_x64|Compile for AMD64 using x86 tools|
|msvc_x64_x64|Compile for AMD64 using 64-bit tools|
|msvc_arm_x64|Compile for ARM using 64-bit tools|
|msvc_arm64_x64|Compile for ARM64 using 64-bit tools|


When significant changes are made to the CMakeSettings.json or to CMakeLists.txt files, Visual Studio automatically re-runs the CMake configure step. If the configure step finishes without errors, the information that is collected will be available in C++ IntelliSense and language services and also in build and debug operations.

When multiple CMake projects use the same CMake configuration name (for example, x86-Debug), all of them are configured and built (in their own build root folder) when that configuration is selected. You can debug the targets from all of the CMake projects that participate in that CMake configuration.

   ![CMake Build Only menu item](media/cmake-build-only.png)

To limit builds and debug sessions to a subset of the projects in the workspace, create a new configuration with a unique name in the CMakeSettings.json file and apply it to those projects only. When that configuration is selected, IntelliSense, building, and debugging will be enabled only for those specified projects.

## Troubleshooting CMake cache errors
If you need more information about the state of the CMake cache to diagnose a problem, open the CMake main menu or the CMakeLists.txt context menu in **Solution Explorer** to run one of these commands:
- **View Cache** opens the CMakeCache.txt file from the build root folder in the editor. (Any edits you make here to CMakeCache.txt are wiped out if you clean the cache. To make changes that persist after the cache is cleaned, see [CMake settings and custom configurations](#cmake_settings) earlier in this article.)
- **Open Cache Folder** opens an Explorer window to the build root folder.  
- **Clean Cache** deletes the build root folder so that the next CMake configure step starts from a clean cache.
- **Generate Cache** forces the generate step to run even if Visual Studio considers the environment up-to-date.

