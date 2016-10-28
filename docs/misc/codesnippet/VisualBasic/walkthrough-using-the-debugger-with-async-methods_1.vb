' Breakpoints to show control flow.
Imports System.Threading.Tasks

Module Module1
    Sub Main()
        Dim theTask = ProcessAsync()
        Dim x = 0 ' set breakpoint
        theTask.Wait()
    End Sub

    Async Function ProcessAsync() As Task
        Dim result = Await DoSomethingAsync()  ' set breakpoint

        Dim y = 0 ' set breakpoint
    End Function

    Async Function DoSomethingAsync() As Task(Of Integer)
        Await Task.Delay(1000)
        Return 5
    End Function
End Module