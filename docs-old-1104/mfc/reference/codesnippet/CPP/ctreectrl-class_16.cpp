   HTREEITEM hmyItem = m_TreeCtrl.GetSelectedItem();

   // If the selected image is the same as the nonselected image
   // then make the selected image one more than the nonselected image.
   if (m_TreeCtrl.ItemHasChildren(hmyItem))
   {
      HTREEITEM hItem = m_TreeCtrl.GetChildItem(hmyItem);
      int nImage, nSelectedImage;

      while (hItem != NULL)
      {
         m_TreeCtrl.GetItemImage(hItem, nImage, nSelectedImage);

         if (nImage == nSelectedImage)
         {
            m_TreeCtrl.SetItemImage(hItem, nImage, nImage + 1);
         }

         hItem = m_TreeCtrl.GetNextSiblingItem(hItem);
      }
   }