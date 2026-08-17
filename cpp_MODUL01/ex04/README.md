

### find()
#### -> The function returned the starting index of the first occurrence of substring sub in the string s.
string find() is a member function of std::string class defined inside `<string>` header file and have 3 implementations.
- s.find(sub, pos);            // For substring
- s.find(sub, pos, n);        // For n character of sub
- s.find(c, pos);                 // For character
#### Parameters:
- s: String which is to be searched.
- sub: Substring to search. Can be C++ or C style string.
- pos: Position from where the string search is to begin. By default, it is 0.
- n: Number of characters to match.
#### Return Value
Returns the integer representing the **index of the first occurrence** of the sub-string.
If the sub-string is **not found**, it returns **string::npos**.