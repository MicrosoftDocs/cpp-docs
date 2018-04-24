Module Module1

    Sub Main()
        Dim o As NVC_MFC_AxUILib._DNVC_MFC_AxUI
        Dim x As Short

        o = CreateObject("NVC_MFC_AXUI.MyAxUICtrl.1")

        ' <Snippet1>
        x = o.Array(2, 3) ' gets element of 2D array
        o.Array(2, 3) = 7 ' sets element of 2D array
        ' </Snippet1>

    End Sub

End Module
