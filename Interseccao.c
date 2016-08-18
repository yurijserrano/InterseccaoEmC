int Interseccao(int v1[], int v2[], int m, int n)
{
  int i = 0, j = 0;
  while (i < m && j < n)
  {
    if (v1[i] < v2[j])
      i++;
    else if (v2[j] < v1[i])
      j++;
    else 
    {
      printf(" %d ", v2[j++]);
      i++;
    }
  }
}
 

int main()
{
  int v1[] = {1, 2, 4, 5, 6};
  int v2[] = {2, 3, 5, 7};
  int m = sizeof(v1)/sizeof(v1[0]);
  int n = sizeof(v2)/sizeof(v2[0]);
  Interseccao(v1, v2, m, n);
  system("PAUSE");
  return 0;
}
