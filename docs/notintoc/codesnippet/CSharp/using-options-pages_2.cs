            Properties propertiesList = vsEnvironment.get_Properties("TextEditor", "Basic");
            if (null == propertiesList)
            {
                // The specified properties collection is not available.
                return;
            }