---
title: "C.1 Notation"
ms.date: "11/04/2016"
ms.assetid: a23b2631-8096-4bf3-ac23-ba4f4bd7a52a
---
# C.1 Notation

The grammar rules consist of the name for a non-terminal, followed by a colon, followed by replacement alternatives on separate lines.

The syntactic expression term<sub>opt</sub> indicates that the term is optional within the replacement.

The syntactic expression *term*<sub>optseq</sub> is equivalent to *term-seq*<sub>opt</sub> with the following additional rules:

*term-seq* :<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*term*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*term-seq* *term*<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*term-seq* **,** *term*