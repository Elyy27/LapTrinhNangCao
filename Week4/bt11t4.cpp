string pigLatin(string word) {
    string ay = "ay";
    string way = "way";
    if (word[0] == 'a' or word[0] == 'u' or word[0] == 'e' or word[0] == 'o' or word[0] == 'i')
        word = word + way;
    else {
        word = word + word[0] + ay;
        word.erase(0, 1);
    }
    return word;
}