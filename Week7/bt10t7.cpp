void rFilter(char* s)
{
    int start_index;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            start_index = i + 1;
            break;
        }
    }

    for (int i = start_index; i < strlen(s); i++)
    {
        s[i] = '_';
    }
}
