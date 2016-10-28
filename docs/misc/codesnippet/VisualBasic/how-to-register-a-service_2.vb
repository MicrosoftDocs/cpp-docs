    <Guid("fafafdfb-60f3-47e4-b38c-1bae05b44240")> _
    Public Interface SMyGlobalService
    End Interface

    <Guid("ba9fe7a3-e216-424e-87f9-dee001228d03")> _
    <ComVisible(True)> _
    Public Interface IMyGlobalService
        Sub GlobalServiceFunction()
        Function CallLocalService() As Integer
    End Interface