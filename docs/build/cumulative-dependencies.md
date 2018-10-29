---
title: "Cumulative Dependencies"
ms.date: "11/04/2016"
helpviewer_keywords: ["dependencies, cumulative", "cumulative dependencies in NMAKE", "dependencies"]
ms.assetid: fa6dd777-80b8-437d-87a7-aec0ed818a49
---
# Cumulative Dependencies

Dependencies are cumulative in a description block if a target is repeated.

For example, this set of rules,

```Output
bounce.exe : jump.obj
bounce.exe : up.obj
   echo Building bounce.exe...
```

is evaluated as this:

```Output
bounce.exe : jump.obj up.obj
   echo Building bounce.exe...
```

Multiple targets in multiple dependency lines in a single description block are evaluated as if each were specified in a separate description block, but targets that are not in the last dependency line do not use the commands block. NMAKE attempts to use an inference rule for such targets.

For example, this set of rules,

```Output
leap.exe bounce.exe : jump.obj
bounce.exe climb.exe : up.obj
   echo Building bounce.exe...
```

is evaluated as this:

```Output

leap.exe : jump.obj
# invokes an inference rule
bounce.exe : jump.obj up.obj
   echo Building bounce.exe...
climb.exe : up.obj
   echo Building bounce.exe...
```

## See Also

[Targets](../build/targets.md)