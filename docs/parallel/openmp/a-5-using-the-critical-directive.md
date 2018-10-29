---
title: "A.5   Using the critical Directive"
ms.date: "11/04/2016"
ms.assetid: 14423018-25b9-4f98-92f2-34c9b0ac0ce0
---
# A.5   Using the critical Directive

The following example includes several `critical` directives ([Section 2.6.2](../../parallel/openmp/2-6-2-critical-construct.md) on page 18). The example illustrates a queuing model in which a task is dequeued and worked on. To guard against multiple threads dequeuing the same task, the dequeuing operation must be in a `critical` section. Because the two queues in this example are independent, they are protected by `critical` directives with different names, *xaxis* and *yaxis*.

```
#pragma omp parallel shared(x, y) private(x_next, y_next)
{
    #pragma omp critical ( xaxis )
        x_next = dequeue(x);
    work(x_next);
    #pragma omp critical ( yaxis )
        y_next = dequeue(y);
    work(y_next);
}
```