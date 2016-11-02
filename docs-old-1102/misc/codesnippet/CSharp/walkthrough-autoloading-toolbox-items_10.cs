        // Scan for toolbox items in the assembly and return the list of
        // toolbox items.
        private ArrayList CreateItemList(Assembly assembly)
        {
            ArrayList list = new ArrayList();
            foreach (Type possibleItem in assembly.GetTypes())
            {
                ToolboxItem item = CreateToolboxItem(possibleItem);
                if (item != null)
                {
                    list.Add(item);
                }
            }
            return list;
        }

        // If the type represents a toolbox item, return an instance of the type;
        // otherwise, return null.
        private ToolboxItem CreateToolboxItem(Type possibleItem)
        {
            // A toolbox item must implement IComponent and must not be abstract.
            if (!typeof(IComponent).IsAssignableFrom(possibleItem) ||
                possibleItem.IsAbstract)
            {
                return null;
            }

            // A toolbox item must have a constructor that takes a parameter of
            // type Type or a constructor that takes no parameters.
            if (null == possibleItem.GetConstructor(new Type[] { typeof(Type) }) &&
                null == possibleItem.GetConstructor(new Type[0]))
            {
                return null;
            }

            ToolboxItem item = null;

            // Check the custom attributes of the candidate type and attempt to
            // create an instance of the toolbox item type.
            AttributeCollection attribs =
                TypeDescriptor.GetAttributes(possibleItem);
            ToolboxItemAttribute tba =
                attribs[typeof(ToolboxItemAttribute)] as ToolboxItemAttribute;
            if (tba != null && !tba.Equals(ToolboxItemAttribute.None))
            {
                if (!tba.IsDefaultAttribute())
                {
                    // This type represents a custom toolbox item implementation.
                    Type itemType = tba.ToolboxItemType;
                    ConstructorInfo ctor =
                        itemType.GetConstructor(new Type[] { typeof(Type) });
                    if (ctor != null && itemType != null)
                    {
                        item = (ToolboxItem)ctor.Invoke(new object[] { possibleItem });
                    }
                    else
                    {
                        ctor = itemType.GetConstructor(new Type[0]);
                        if (ctor != null)
                        {
                            item = (ToolboxItem)ctor.Invoke(new object[0]);
                            item.Initialize(possibleItem);
                        }
                    }
                }
                else
                {
                    // This type represents a default toolbox item.
                    item = new ToolboxItem(possibleItem);
                }
            }
            if (item == null)
            {
                throw new ApplicationException("Unable to create a ToolboxItem " +
                    "object from " + possibleItem.FullName + ".");
            }

            // Update the display name of the toolbox item and add the item to
            // the list.
            DisplayNameAttribute displayName =
                attribs[typeof(DisplayNameAttribute)] as DisplayNameAttribute;
            if (displayName != null && !displayName.IsDefaultAttribute())
            {
                item.DisplayName = displayName.DisplayName;
            }

            return item;
        }