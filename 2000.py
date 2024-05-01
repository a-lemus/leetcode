#https://leetcode.com/problems/reverse-prefix-of-word/?envType=daily-question&envId=2024-05-01
class Solution:
    #this function recieves a string of characters and a character. If the character is in the string than the function returns the string with the prefix before and including the character reversed
    def reversePrefix(self, word: str, ch: str) -> str:
        for i in range(len(word)): #iterate over every letter in word
            if word[i]==ch: # if the letter in word matches the given char
                return word[:i+1][::-1] + word[i+1:] ## returns the string before ch reversed, plus the string after ch in correct order
        return word # if we didnt find ch in word we do nothing