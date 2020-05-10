bool is_string_palindrome(string str)
{
    // Add your code below this line. Do not modify any other code.
    for(int i=0; i<str.size(); i++)
    {
        if(str[i] != str[str.size()-i-1])
            return false;
    }      
    return true;
    // Add your code above this line. Do not modify any other code.
}
