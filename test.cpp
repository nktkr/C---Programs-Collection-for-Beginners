class Solution
{
public:
  bool areAlmostEqual(string s1, string s2)
  {
    int size = s1.length();
    int count = 0;
    int compare[2];
    for (int i = 0; i < size; i++)
    {
      if (s1[i] != s2[i])
      {
        if (count < 3)
        {compare[count] = i;
        count++;}
          else
          return false;
      }
    }
    if (count == 1)
      return false;

    if ((count == 0) || ((s1[compare[0]] == s2[compare[1]]) && (s2[compare[0]] == s1[compare[1]])))
      return true;

    return false;
  }
};