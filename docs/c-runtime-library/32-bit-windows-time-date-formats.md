---
description: "Learn more about: 32-Bit Windows Time/Date Formats"
title: "32-Bit Windows Time-Date Formats"
ms.date: "11/04/2016"
f1_keywords: ["vc.time"]
helpviewer_keywords: ["32-bit Windows"]
ms.assetid: ef1589db-84d7-4b24-8799-7c7a22cfe2bf
---
# 32-Bit Windows time/date formats

The file time and the date are stored individually, using unsigned integers as bit fields. File time and date are packed as follows:

### Time

| Bit position: | 0&emsp;1&emsp;2&emsp;3&emsp;4 | 5&emsp;6&emsp;7&emsp;8&emsp;9&emsp;A | B&emsp;C&emsp;D&emsp;E&emsp;F |
|---|---|---|---|
| Length: | 5 | 6 | 5 |
| Contents: | hours | minutes | 2-second increments |
| Value Range: | 0-23 | 0-59 | 0-29 in 2-second intervals |

### Date

| Bit position: | 0&emsp;1&emsp;2&emsp;3&emsp;4&emsp;5&emsp;6 | 7&emsp;8&emsp;9&emsp;A | B&emsp;C&emsp;D&emsp;E&emsp;F |
|---|---|---|---|
| Length: | 7 | 4 | 5 |
| Contents: | year | month | day |
| Value Range: | 0-119 | 1-12 | 1-31 |
|  | (relative to 1980) |  |  |

## See also

[Global constants](./global-constants.md)
