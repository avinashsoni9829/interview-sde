

/*   Longest Common Prefix */


/* 
Method  1 :  Word by Word Matching 

time : O( n * m )

*/

string commonPrefixUtil(string str1, string str2)
{
    string result;
    int n1 = str1.length(), n2 = str2.length();
 
    // Compare str1 and str2
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
    {
        if (str1[i] != str2[j])
            break;
        result.push_back(str1[i]);
    }
 
    return (result);
}
 
// A Function that returns the longest common prefix
// from the array of strings
string commonPrefix (string arr[], int n)
{
    string prefix =  arr[0];
 
    for (int i=1; i<=n-1; i++)
        prefix = commonPrefixUtil(prefix, arr[i]);
 
    return (prefix);
}
