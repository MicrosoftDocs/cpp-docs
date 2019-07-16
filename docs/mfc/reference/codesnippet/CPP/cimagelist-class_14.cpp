CImageList *ConvertHandlePermanent(HIMAGELIST hmyImageList)
{
   // Convert the HIMAGELIST to a CImageList*.
   ASSERT(hmyImageList != NULL);
   CImageList *pmyImageList = CImageList::FromHandlePermanent(hmyImageList);
   ASSERT(pmyImageList != NULL);

   return pmyImageList;
}