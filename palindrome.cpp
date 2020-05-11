 bool isPalindrome(const std::string & text)
{
    // Add your code below this line. Do not modify any other code.
    for(int i=0; i<text.size(); i++)
    {
        if(text[i] != text[text.size()-i-1])
            return false;
    }      
    return true;
    // Add your code above this line. Do not modify any other code.
}
