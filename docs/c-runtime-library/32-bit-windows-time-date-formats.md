---
description: "Learn more about: 32-Bit Windows Time/Date Formats"
title: "32-Bit Windows Time-Date Formats"
ms.date: "11/04/2016"
f1_keywords: ["vc.time"]
helpviewer_keywords: ["32-bit Windows"]
ms.assetid: ef1589db-84d7-4b24-8799-7c7a22cfe2bf
---
# 32-Bit Windows Time/Date Formats

The file time and the date are stored individually, using unsigned integers as bit fields. File time and date are packed as follows:

### Time

|Bit position:|0   1   2   3   4|5   6   7   8   9   A|B   C   D   E   F|
|-------------------|-----------------------|---------------------------|-----------------------|
|Length:|5|6|5|
|Contents:|hours|minutes|2-second increments|
|Value Range:|0-23|0-59|0-29 in 2-second intervals|

### Date

|Bit position:|0   1   2   3   4   5   6|7   8   9   A|B   C   D   E   F|
|-------------------|-------------------------------|-------------------|-----------------------|
|Length:|7|4|5|
|Contents:|year|month|day|
|Value Range:|0-119|1-12|1-31|
||(relative to 1980)|||

## See also

[Global Constants](../c-runtime-library/global-constants.md)
