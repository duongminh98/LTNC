char* concat(const char* str1, const char* str2)
{
  size_t len1 = strlen(str1);
  size_t len2 = strlen(str2);
  size_t result_len = len1 + len2 + 1;
  char* result = new char[result_len];
  strcpy(result, str1);
  strcat(result, str2);
  return result;
}
