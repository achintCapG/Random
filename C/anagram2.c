//  Working Solution - to check given strings are anagrams of each other

# define NO_OF_CHARS 256
int isAnagram(char *str1, char* str2)
{
    int count1[NO_OF_CHARS] = {0};
    int count2[NO_OF_CHARS] = {0};
    int i;
    
    // For each character in input strings, increment count in
    // the corresponding count array
    for (i = 0; str1[i] && str2[i];  i++)
    {
        count1[str1[i]]++;
        count2[str2[i]]++;
    }
    
    // If both strings are of different length. Removing this condition
    // will make the program fail for strings like "aaca" and "aca"
    if (str1[i] || str2[i])
    return 0;
    
    // Compare count arrays
    for (i = 0; i < NO_OF_CHARS; i++)
    if (count1[i] != count2[i])
    return 0;

    return 1;
}