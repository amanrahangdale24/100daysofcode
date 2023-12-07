string largestOddNumber(string num) {
    int fnl = 0;

    for (int i = 0; i < num.size(); i++) {
        string substr = "";

        for (int j = i; j < num.size(); j++) {
            substr += num[j];
            long long int comp = stoll(substr);

            if (comp % 2 != 0 && substr.size() >=fnl) {
                fnl = substr.size();
            }
        }
    }

    string fnlstr = num.substr(0, fnl);

    return fnlstr;
}
