        Dim propertiesList As Properties = vsEnvironment.get_Properties("TextEditor", "Basic")
        If propertiesList Is Nothing Then
            ' The specified properties collection is not available. 
            Exit Sub
        End If