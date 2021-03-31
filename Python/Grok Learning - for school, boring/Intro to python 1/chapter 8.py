word = input("Word: ")
wordList = []
wordList.append(word)

while word != "":
  word = input("Word: ")
  wordList.append(word)
  
print("You know " + str(len(set(wordList)) - 1) + " unique word(s)!")





foo = input("Cars: ")

bar = foo.split()

print("red: " + str(bar.count("red")))
print("blue: " + str(bar.count("blue")))





message = input("code: ")
words = message.split()
newWords = []

for i in words:
  if i[0].isupper() == True:
    newWords.append(i)
    
for i in range(len(newWords)):
  newWords[i] = newWords[i].lower()
  
newWords.reverse()

print("says: ", end='')
print(*newWords)





a,b = input('Enter words: ').split()

if sorted(a) == sorted(b) and a[0] == b[0] and a[-1] == b[-1]:
  print('Super Anagram!')
else:
  print('Huh?')