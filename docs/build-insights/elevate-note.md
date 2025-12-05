---
title: "Build Insights needs additional permissions"
description: "To capture trace files, Build Insights needs additional permissions as described in this topic."
ms.topic: article
ms.date: 12/04/2025
ms.update-cycle: 365-days
f1_keywords: 
  - bi_permissions
---
# Build Insights needs additional permissions

Starting with Visual Studio 2026, Build Insights and `vcperf` need additional permissions to capture traces.
 
To allow build trace capture by `vcperf`, please accept the one time, per user, elevated prompt that appears when you first attempt to capture a trace:

:::image type="content" source="./media/elevation-prompt.png" alt-text="A screenshot of the elevation prompt. It says: To capture trace files, Build Insights needs additional permisisons. Allow this one-time elevated request?":::
 
After you accept the elevation request, you'll be able to capture trace files with `vcperf`. Once you accept this elevation request, you won't need to do it again. Accepting this request doesn't elevate permissions for Visual Studio. It only elevates permissions for `vcperf` to capture traces.

## See also

[Get started with C++ Build Insights](get-started-with-cpp-build-insights.md)