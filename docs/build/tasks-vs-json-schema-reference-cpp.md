---
title: "Tasks.vs.json schema reference (C++)"
ms.date: "08/07/2019"
helpviewer_keywords: ["Open Folder Projects in Visual C++"]
ms.assetid: abd1985e-3717-4338-9e80-869db5435175
---
# Tasks.vs.json (C++)

A *tasks.vs.json* file can be added to an Open Folder project to define any arbitrary task and then invoke it from the **Solution Explorer** context menu. CMake projects typically do not use this file because all the build commands are specified in *CMakeLists.txt*. For build systems other than CMake, *tasks.vs.json* is where you can specify build commands and invoke build scripts. For general information about using *tasks.vs.json*, see [Customize build and debug tasks for "Open Folder" development](/visualstudio/ide/customize-build-and-debug-tasks-in-visual-studio).

## Default Properties

||||
|-|-|-|
|**Property**|**Type**|**Description**|
|`taskName`|string| Specifies the task label used in the user interface (Deprecated: Use `taskLabel` instead).|
|`taskLabel`|string| (Required.) Specifies the task label used in the user interface.|
|`appliesTo`|string| (Required.) Specifies which files the command can be performed on. The use of wildcards is supported, for example: "*", "*.cpp", "/*.txt"|
|`contextType`|string| Allowed values: "custom", "build", "clean", "rebuild". Specifies the build target invoked when running the task. Defaults to "custom".|
|`output`|string| Specifies an output tag to your task.|
|`inheritEnvironments`|array| Specifies a set of environment variables inherited from multiple sources. You can define variables in files like *CMakeSettings.json* or *CppProperties.json* and make them available to the task context.|
|`passEnvVars`|boolean| Specifies whether or not to include additional environment variables to the task context. These variables are different from the ones defined using the `envVars` property. Defaults to "true".|

## Remote Properties

||||
|-|-|-|
|**Property**|**Type**|**Description**|
|`remoteMachineName`|string|The name of the remote machine.|
|`command`|string|The command to send.|
|`remoteWorkingDirectory`|string| |
|`localCopyDirectory`|string| |
|`remoteCopyDirectory`|string| |
|`remoteCopyMethod`|string| Allowed values: "none", "sftp", "rsync"| |
|`remoteCopySourcesOutputVerbosity`|string| Allowed values: "Normal","Verbose","Diagnostic".| |
|`rsyncCommandArgs`|string|Defaults to "-t --delete"| |
|`remoteCopyExclusionList`|array| |

## Launch properties

||||
|-|-|-|
|**Property**|**Type**|**Description**|
|`command`|string| Specifies the full path of the process or script to launch.|
|`args`|array| Specifies a comma-separated list of arguments passed to the command.|
|`launchOption`|string| Allowed values: "None", "ContinueOnError","IgnoreError". Specifies how to proceed with the command invoke when there are errors.|
|`workingDirectory`|string| Specifies the directory in which the command will run. Defaults to the project's current working directory.|
|`customLaunchCommand`|string| Specifies a global scope customization to apply before executing the command. Useful for setting environment variables like %PATH%.|
|`customLaunchCommandArgs`|string| Specifies arguments to customLaunchCommand. (Requires `customLaunchCommand`|
|`envVars`|object| Specifies a key-value list of custom environment variables, for example "myEnv": "myVal"|
|`commands`|array| Specifies a list of commands to invoke in order.|

## MSBuild properties

||||
|-|-|-|
|**Property**|**Type**|**Description**|
|`verbosity`|string| Specifies the MSBuild project build output verbosityAllowed values: "Quiet", "Minimal", "Normal", "Detailed", "Diagnostic".|
|`toolsVersion`|string| Specifies the toolset version to build the project, for example "2.0", "3.5", "4.0", "Current". Defaults to "Current".|
|`globalProperties`|object|Specifies a key-value list of the global properties to pass into the project, for example, "Configuration":"Release"|
|`properties`|object| Specifies a key-value list of additional project only properties.|
|`targets`|array| Specifies the list of targets to invoke, in order, on the project. The project's default target is used if none are specified.|
