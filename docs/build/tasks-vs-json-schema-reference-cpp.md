---
description: "Learn more about: tasks.vs.json schema reference (C++)"
title: "tasks.vs.json schema reference (C++)"
ms.date: "08/20/2019"
helpviewer_keywords: ["tasks.vs.json file [C++]"]
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
---
# tasks.vs.json schema reference (C++)

To tell Visual Studio how to build your source code in an Open Folder project, add a *tasks.vs.json* file. You can define any arbitrary task here and then invoke it from the **Solution Explorer** context menu. CMake projects do not use this file because all the build commands are specified in *CMakeLists.txt*. For build systems other than CMake, *tasks.vs.json* is where you can specify build commands and invoke build scripts. For general information about using *tasks.vs.json*, see [Customize build and debug tasks for "Open Folder" development](/visualstudio/ide/customize-build-and-debug-tasks-in-visual-studio).

A task has a `type` property which may have one of four values: `default`, `launch`, `remote`, or `msbuild`. Most tasks should use `launch` unless a remote connection is required.

## Default Properties

The default properties are available on all types of tasks:

|Property|Type|Description|
|-|-|-|
|`taskLabel`|string| (Required.) Specifies the task label used in the user interface.|
|`appliesTo`|string| (Required.) Specifies which files the command can be performed on. The use of wildcards is supported, for example: "*", "*.cpp", "/*.txt"|
|`contextType`|string| Allowed values: "custom", "build", "clean", "rebuild". Determines where in the context menu the task will appear. Defaults to "custom".|
|`output`|string| Specifies an output tag to your task.|
|`inheritEnvironments`|array| Specifies a set of environment variables inherited from multiple sources. You can define variables in files like *CMakeSettings.json* or *CppProperties.json* and make them available to the task context. **Visual Studio 16.4:**: Specify environment variables on a per-task basis using the `env.VARIABLE_NAME` syntax. To unset a variable, set it to "null".|
|`passEnvVars`|boolean| Specifies whether or not to include additional environment variables to the task context. These variables are different from the ones defined using the `envVars` property. Defaults to "true".|

## Launch properties

When the task type is `launch`, these properties are available:

|Property|Type|Description|
|-|-|-|
|`command`|string| Specifies the full path of the process or script to launch.|
|`args`|array| Specifies a comma-separated list of arguments passed to the command.|
|`launchOption`|string| Allowed values: "None", "ContinueOnError","IgnoreError". Specifies how to proceed with the command when there are errors.|
|`workingDirectory`|string| Specifies the directory in which the command will run. Defaults to the project's current working directory.|
|`customLaunchCommand`|string| Specifies a global scope customization to apply before executing the command. Useful for setting environment variables like %PATH%.|
|`customLaunchCommandArgs`|string| Specifies arguments to customLaunchCommand. (Requires `customLaunchCommand`.)|
 `env`| Specifies a key-value list of custom environment variables. For example, "myEnv": "myVal"|
|`commands`|array| Specifies a list of commands to invoke in order.|

### Example

The following tasks invoke *make.exe* when a makefile is provided in the folder and the `Mingw64` environment has been defined in *CppProperties.json*, as shown in [CppProperties.json schema reference](cppproperties-schema-reference.md#user_defined_environments):

```json
 {
  "version": "0.2.1",
  "tasks": [
    {
      "taskLabel": "gcc make",
      "appliesTo": "*.cpp",
      "type": "launch",
      "contextType": "custom",
      "inheritEnvironments": [
        "Mingw64"
      ],
      "command": "make"
    },
    {
      "taskLabel": "gcc clean",
      "appliesTo": "*.cpp",
      "type": "launch",
      "contextType": "custom",
      "inheritEnvironments": [
        "Mingw64"
      ],
      "command": "make",
      "args": ["clean"]
    }
  ]
}
```

These tasks can be invoked from the context menu when you right click on a *.cpp* file in **Solution Explorer**.

## Remote Properties

Remote tasks are enabled when you install the Linux development with C++ workload and add a connection to a remote machine by using the Visual Studio Connection Manager. A remote task runs commands on a remote system and can also copy files to it.

When the task type is `remote`, these properties are available:

|Property|Type|Description|
|-|-|-|
|`remoteMachineName`|string|The name of the remote machine. Must match a machine name in **Connection Manager**.|
|`command`|string|The command to send to the remote machine. By default commands are executed in the $HOME directory on the remote system.|
|`remoteWorkingDirectory`|string|The current working directory on the remote machine.|
|`localCopyDirectory`|string|The local directory to copy to the remote machine. Defaults to the current working directory.|
|`remoteCopyDirectory`|string|The directory on the remote machine into which `localCopyDirectory` is copied.|
|`remoteCopyMethod`|string| The method to use for copying. Allowed values: "none", "sftp", "rsync". rsync is recommended for large projects.|
|`remoteCopySourcesOutputVerbosity`|string| Allowed values: "Normal","Verbose","Diagnostic".|
|`rsyncCommandArgs`|string|Defaults to "-t --delete".|
|`remoteCopyExclusionList`|array|Comma-separated list of files in `localCopyDirectory` to exclude from copy operations.|

### Example

The following task will appear in the context menu when you right-click on *main.cpp* in **Solution Explorer**. It depends on a remote machine called `ubuntu` in **Connection Manager**. The task copies the current open folder in Visual Studio into the `sample` directory on the remote machine and then invokes g++ to build the program.

```json
{
  "version": "0.2.1",
  "tasks": [
    {
      "taskLabel": "Build",
      "appliesTo": "main.cpp",
      "type": "remote",
      "contextType": "build",
      "command": "g++ main.cpp",
      "remoteMachineName": "ubuntu",
      "remoteCopyDirectory": "~/sample",
      "remoteCopyMethod": "sftp",
      "remoteWorkingDirectory": "~/sample/hello",
      "remoteCopySourcesOutputVerbosity": "Verbose"
    }
  ]
}
```

## MSBuild properties

When the task type is `msbuild`, these properties are available:

|Property|Type|Description|
|-|-|-|
|`verbosity`|string| Specifies the MSBuild project build output verbosityAllowed values: "Quiet", "Minimal", "Normal", "Detailed", "Diagnostic".|
|`toolsVersion`|string| Specifies the toolset version to build the project, for example "2.0", "3.5", "4.0", "Current". Defaults to "Current".|
|`globalProperties`|object|Specifies a key-value list of the global properties to pass into the project, for example, "Configuration":"Release"|
|`properties`|object| Specifies a key-value list of additional project only properties.|
|`targets`|array| Specifies the list of targets to invoke, in order, on the project. The project's default target is used if none are specified.|
