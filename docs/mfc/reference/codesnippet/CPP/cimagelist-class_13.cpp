CImageList *ConvertHandle(HIMAGELIST hmyImageList)
{
   // Convert the HIMAGELIST to a CImageList*.
   ASSERT(hmyImageList != NULL);
   CImageList *pmyImageList = CImageList::FromHandle(hmyImageList);
   ASSERT(pmyImageList != NULL);

   return pmyImageList;
}