class Solution {
   public:
    bool isPalindrome(string s) {
        /* Remove non-alphanumeric characters */
        std::string temp = std::regex_replace(s, std::regex("[^a-zA-Z0-9]"), "");
        /* make lowercase */
        std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);

        int i = 0;
        int j = temp.length() - 1;
        while (i < temp.length() && j > 0) {
            if (temp[i] != temp[j]) {
                /* Debugging */
                std::cout << "temp[i]: " << temp[i] << " ";
                std::cout << "temp[j]: " << temp[j];
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
